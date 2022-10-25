#define MAXSTACK 500
#define TRUE 1
#define FALSE 0

typedef struct stack
{
    int top;
    char name[MAXSTACK];
    int chess[MAXSTACK];      //棋子種類
    int original_x[MAXSTACK]; //原始x
    int original_y[MAXSTACK]; //原始y
    int position_x[MAXSTACK]; // x
    int position_y[MAXSTACK]; // y
    int die[MAXSTACK];        //是否死掉
} stack;

int isempty(const stack *);
int isoverflow(const stack *);
void push(stack *, char, int, int, int, int, int, int);
void pop(stack *, int *, int *, int *);
void show_stack(stack *);