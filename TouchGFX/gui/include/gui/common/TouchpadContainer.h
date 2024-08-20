/*
 * TouchpadContainer.h
 *
 *  Created on: Aug 13, 2024
 *      Author: matos
 */

#ifndef APPLICATION_USER_GUI_TOUCHPADCONTAINER_H_
#define APPLICATION_USER_GUI_TOUCHPADCONTAINER_H_

#include <touchgfx/widgets/TouchArea.hpp>
#include <touchgfx/widgets/canvas/Circle.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/containers/Container.hpp>

using namespace touchgfx;

class TouchpadContainer: public Container {
public:
	TouchpadContainer();
	virtual ~TouchpadContainer();

protected:
    Circle circle1;
    PainterRGB565 circle1Painter;

private:
    static const uint32_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif /* APPLICATION_USER_GUI_TOUCHPADCONTAINER_H_ */
