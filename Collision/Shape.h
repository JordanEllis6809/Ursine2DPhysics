/* ---------------------------------------------------------------------------
** Team Bear King
** DigiPen Institute of Technology 2014
**
** Shape.h
**
** Author:
** - Jordan Ellis - J.Ellis@digipen.edu
**
** Contributors:
** - <list in same format as author if applicable>
** -------------------------------------------------------------------------*/

#pragma once

#include "AABB.h"
#include "RayCast.h"

namespace Ursine
{
    enum ShapeType
    {
        POLYGON,
        ELLIPSE
    };

    class Shape
    {
    public:
        virtual ~Shape(void) {};

        virtual Shape *Clone(void) const = 0;

        // Set the shape's properties 
        // (mesh name for polygons, radius for circles)
        template<typename T>
        void Set(T) = 0;

        // return the encumpasing AABB of the shape
        virtual AABB TransformShape(ECS::Transform &transform) = 0;

        // return a support point in the specified direction
        virtual Vector2 GetSupport(const Vector2 &direction) const = 0;

        // compute the mass of this shape
        virtual void ComputeMass(ECS::Transform &transform, Vector2 &center,
                                 float &area, float &inertia) = 0;

        virtual bool RayCast(RayCastOutput &output, const RayCastInput &input) = 0;

        ShapeType type;
    };
}
