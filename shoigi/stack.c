#include "stack.h"
#include <stdio.h>

int isempty(const stack *stackptr)
{
    if (stackptr->top == -1)
    {
        return TRUE;
    }
    return FALSE;
}

int isoverflow(const stack *stackptr)
{
    if (stackptr->top == MAXSTACK - 1)
    {
        return TRUE;
    }
    return FALSE;
}

void push(stack *stackptr, char name, int chess, int original_x, int original_y, int position_x, int position_y, int die)
{
    int top = ++(stackptr->top);
    stackptr->name[top] = name;
    stackptr->chess[top] = chess;
    stackptr->original_x[top] = original_x;
    stackptr->original_y[top] = original_y;
    stackptr->position_x[top] = position_x;
    stackptr->position_y[top] = position_y;
    stackptr->die[top] = die;
}

void pop(stack *stackptr, int *chess, int *position_x, int *position_y)
{
    int top = stackptr->top;
    *chess = stackptr->chess[top];
    *position_x = stackptr->original_x[top];
    *position_y = stackptr->original_y[top];
    (stackptr->top)--;
}

void show_stack(stack *ptr)
{
    int temp = ptr->top;
    while (temp != -1)
    {
        printf("player: %c chess = %d o_x = %d o_y = %d p_x = %d p_y = %d die = %d\n", ptr->name[temp], ptr->chess[temp], ptr->original_x[temp], ptr->original_y[temp], ptr->position_x[temp], ptr->position_y[temp], ptr->die[temp]);
        temp--;
    }
}
