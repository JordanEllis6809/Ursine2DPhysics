/* ---------------------------------------------------------------------------
** Team Bear King
** DigiPen Institute of Technology 2014
**
** CollisionEventArgs.h
**
** Author:
** - Jordan Ellis - J.Ellis@digipen.edu
**
** Contributors:
** - <list in same format as author if applicable>
** -------------------------------------------------------------------------*/

#pragma once

#include "EventArgs.h"
#include "Entity/Entity.h"

namespace Ursine
{
    enum CollisionEvents
    {
        // The collision has started
        COLLISION_STARTED,
        // The collision has continued
        COLLISION_PERSISTED,
        // The collision has ended
        COLLISION_ENDED
    };

    struct CollisionEventArgs : public EventArgs
    {
        // the other entity involved in the collision
        ECS::Entity *other;

        // the point at which they have collided
        Vector2 at;
    };
}
