/*
 * TouchpadContainer.cpp
 *
 *  Created on: Aug 13, 2024
 *      Author: matos
 */

#include <gui/common/TouchpadContainer.h>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <touchgfx/Utils.hpp>

TouchpadContainer::TouchpadContainer() {
    CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    circle1.setPosition(0, 0, 40, 40);
    circle1.setCenter(20, 20);
    circle1.setRadius(15);
    circle1.setLineWidth(0);
    circle1.setArc(0, 360);
    circle1Painter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    circle1.setPainter(circle1Painter);
    add(circle1);
	touchgfx_printf("Hello touchable!");
    setTouchable(true);
}

TouchpadContainer::~TouchpadContainer() {
    CanvasWidgetRenderer::resetBuffer();
}

