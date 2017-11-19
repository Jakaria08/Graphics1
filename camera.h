#ifndef CAMERA_H_INCLUDED
#define CAMERA_H_INCLUDED

#include "ray.h"
#include "glm/glm/vec3.hpp"
#include "glm/glm/glm.hpp"

class camera
{
public:
    camera()
    {
        lower_left_corner = glm::vec3(-2.0, -1.0, -1.0);
        horizontal = glm::vec3(4.0, 0.0, 0.0);
        vertical = glm::vec3(0.0, 2.0, 0.0);
        origin = glm::vec3(0.0, 0.0, 0.0);
    }

    ray get_ray(float u, float v)
    {
        return ray(origin, lower_left_corner + u*horizontal + v*vertical - origin);
    }

     glm::vec3 lower_left_corner;
     glm::vec3 horizontal;
     glm::vec3 vertical;
     glm::vec3 origin;
};

#endif // CAMERA_H_INCLUDED
