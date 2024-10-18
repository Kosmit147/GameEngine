#pragma once

#include <SFML/Graphics.hpp>

#include <span>

#include "Geometry.h"
#include "Helpers.h"
#include "Window.h"

enum class LineRenderingAlgorithm
{
    Default,
    Incremental,
};

class PrimitiveRenderer
{
public:
    inline PrimitiveRenderer(Window* window) : _window(window) {}

    void draw(Point2D point);
    void draw(const Line& line, LineRenderingAlgorithm alg = LineRenderingAlgorithm::Default);
    void draw(std::span<Line> lines, LineRenderingAlgorithm alg = LineRenderingAlgorithm::Default);
    void draw(const Circle& circle);
    void draw(const Ellipse& ellipse);

private:
    Window* _window;
};
