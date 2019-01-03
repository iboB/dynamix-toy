// DynaMix Toy
// Copyright(c) 2018 Borislav Stanimirov
//
// Distributed under the MIT Software License
// See accompanying file LICENSE.txt or copy at
// https://opensource.org/licenses/MIT
//
#pragma once

#include "ID.h"

#include "dynamixc.h"

class GameObject : public dynamix::object
{
public:
    using ID = ::ID;

    GameObject();
    ~GameObject();
    
    GameObject(GameObject&&);
    GameObject& operator=(GameObject&&);
    
    GameObject(const GameObject&) = delete;
    GameObject& operator=(const GameObject&) = delete;


    ID id() const { return m_id; }

private:
    ID m_id = Invalid_ID;

#if !defined(RETAIL)
public:
    const std::string& name() const { return m_name; }
private:
    std::string m_name;
#endif

public:
    // Since we're using a custom object derived from `dynamix::object`,
    // we need special casts to get it from a mixin. 
    // For this we add those functions so we can use a special custom macro
    // instead of `dm_this`
    template <typename Mixin>
    GameObject* of(Mixin* m)
    {
        return static_cast<GameObject*>(dynamix::object_of(m));
    }

    template <typename Mixin>
    const GameObject* of(const Mixin* m)
    {
        return static_cast<const GameObject*>(dynamix::object_of(m));
    }
};

// For this project use this macro instead of `dm_this`.
// It casts the owning object to GameObject
// Warning: this is not applicable unless the owining object is a GameObject!
#define self GameObject::of(this)
