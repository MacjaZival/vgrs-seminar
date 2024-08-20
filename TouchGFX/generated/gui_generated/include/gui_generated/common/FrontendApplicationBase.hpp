/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    virtual void changeToStartScreen()
    {
        gotoKeyboardScreenScreenNoTransition();
    }

    // KeyboardScreen
    void gotoKeyboardScreenScreenNoTransition();

    // TouchpadScreen
    void gotoTouchpadScreenScreenNoTransition();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // KeyboardScreen
    void gotoKeyboardScreenScreenNoTransitionImpl();

    // TouchpadScreen
    void gotoTouchpadScreenScreenNoTransitionImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
