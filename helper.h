#ifndef HELPER_H
#define HELPER_H

#include <iostream>
using namespace std;

extern bool game_over;
extern const int width;
extern const int height;
extern int x, y, fruitX, fruitY, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
extern eDirection dir;

void Setup();
void ClearScreen();
void Draw();
void Input();
void Logic();
int _kbhit(void);
char getch(void);

#endif // HELPER_H
