/*
 * KeyboardKeyMappings.hpp
 *
 *  Created on: Aug 11, 2024
 *      Author: matos
 */

#ifndef APPLICATION_USER_GUI_KEYBOARDKEYMAPPINGS_HPP_
#define APPLICATION_USER_GUI_KEYBOARDKEYMAPPINGS_HPP_

static const Keyboard::KeyMapping keyMappingsAlphaUpper[30] =
{
    { 1, 113 - 32},  // Q
    { 2, 119 - 32},  // W
    { 3, 101 - 32},  // E
    { 4, 114 - 32},  // R
    { 5, 116 - 32},  // T
    { 6, 121 - 32},  // Y
    { 7, 117 - 32},  // U
    { 8, 105 - 32},  // I
    { 9, 111 - 32},  // O
    {10, 112 - 32},  // P
    {11, 47},        // /
    {12,  97 - 32},  // A
    {13, 115 - 32},  // S
    {14, 100 - 32},  // D
    {15, 102 - 32},  // F
    {16, 103 - 32},  // G
    {17, 104 - 32},  // H
    {18, 106 - 32},  // J
    {19, 107 - 32},  // K
    {20, 108 - 32},  // L
    {21, 58},        // :
    {22, 59},        //
    {23, 122 - 32},  // Z
    {24, 120 - 32},  // X
    {25,  99 - 32},  // C
    {26, 118 - 32},  // V
    {27,  98 - 32},  // B
    {28, 110 - 32},  // N
    {29, 109 - 32},  // M
    {30,  32}        // space
};

static const Keyboard::KeyMappingList keyMappingListAlphaUpper =
{
    keyMappingsAlphaUpper,
    30
};

static const Keyboard::KeyMapping keyMappingsAnsi[49] =
{
    { 1, 126},  // ~
	{ 2, 49},  // 1
	{ 3, 50},  // 2
	{ 4, 51},  // 3
	{ 5, 52},  // 4
	{ 6, 53},  // 5
	{ 7, 54},  // 6
	{ 8, 55},  // 7
	{ 9, 56},  // 8
	{ 10, 57},  // 9
	{ 11, 48},  // 0
	{ 12, 95},  // -
	{ 13, 61},  // =

	{ 14, 113 - 32},  // Q
    { 15, 119 - 32},  // W
    { 16, 101 - 32},  // E
    { 17, 114 - 32},  // R
    { 18, 116 - 32},  // T
    { 19, 121 - 32},  // Y
    { 20, 117 - 32},  // U
    { 21, 105 - 32},  // I
    { 22, 111 - 32},  // O
    { 23, 112 - 32},  // P
    { 24, 91},  // [
    { 25, 93},  // ]

    { 26,  97 - 32},  // A
    { 27, 115 - 32},  // S
    { 28, 100 - 32},  // D
    { 29, 102 - 32},  // F
    { 30, 103 - 32},  // G
    { 31, 104 - 32},  // H
    { 32, 106 - 32},  // J
    { 33, 107 - 32},  // K
    { 34, 108 - 32},  // L
    { 35, 58},        // :
    { 36, 39},        // '
    { 37, 92},        // (backslash)

    { 38, 122 - 32},  // Z
    { 39, 120 - 32},  // X
    { 40,  99 - 32},  // C
    { 41, 118 - 32},  // V
    { 42,  98 - 32},  // B
    { 43, 110 - 32},  // N
    { 44, 109 - 32},  // M
	{ 45, 44},        // ,
	{ 46, 46},        // .
	{ 47, 47},        // /
	{ 48, 47},        // /

    { 49, 32},        // space
};

static const Keyboard::KeyMappingList keyMappingListAnsi =
{
	keyMappingsAnsi,
    49
};



#endif /* APPLICATION_USER_GUI_KEYBOARDKEYMAPPINGS_HPP_ */
