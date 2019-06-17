#include <SFML/Graphics.hpp>

#define block_size 16
#define rows 20
#define cols 10
#define width 512
#define height 448

/*
 * Defines a 4x4 grid within which each piece is located
 * Each block is defined as a set of 4 rotations,
 * each of which has 4 coordinates in the grid, with the upper leftmost square being {0, 0}
 */
unsigned char blocks[7][4][4][2] = {
    {{{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}}},
    {{{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}}},
    {{{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}}},
    {{{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}}},
    {{{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}}},
    {{{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}}},
    {{{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}}}};

void setup()
{
}

void main()
{
}