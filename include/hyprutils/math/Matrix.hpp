#pragma once

// includes box and vector as well
#include <hyprutils/math/Region.hpp>

using namespace Hyprutils::Math;

void projectBox(float mat[9], const CBox& box, eTransform transform, float rotation, const float projection[9]);
void matrixProjection(float mat[9], int width, int height, eTransform transform);
void matrixTransform(float mat[9], eTransform transform);
void matrixRotate(float mat[9], float rad);
void matrixScale(float mat[9], float x, float y);
void matrixTranslate(float mat[9], float x, float y);
void matrixTranspose(float mat[9], const float a[9]);
void matrixMultiply(float mat[9], const float a[9], const float b[9]);
void matrixIdentity(float mat[9]);
