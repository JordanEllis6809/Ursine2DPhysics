/* ---------------------------------------------------------------------------
** Team Bear King
** DigiPen Institute of Technology 2014
**
** RayCast.h
**
** Author:
** - Jordan Ellis - J.Ellis@digipen.edu
**
** Contributors:
** - <list in same format as author if applicable>
** -------------------------------------------------------------------------*/

#pragma once

#include "Vector2.h"
#include "Utils.h"

namespace Ursine
{
    // RayCastInput data.  Extends from p1 to p1 + max_fraction * (p2 - p1).
    class RayCastInput
    {
    public:
        Vector2 p1, p2;
        float max_fraction;
    };

    // RayCastOutput data.  The ray hits at p1 + fraction * (p2 - p1).
    // Normal will be the surface normal of intersection.
    class RayCastOutput
    {
    public:
        Vector2 normal;
        float fraction;

        URSINE_TODO("Add an entity pointer?");
    };
}