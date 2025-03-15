#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <unistd.h>
#include <time.h>

#define WIDTH 30
#define HEIGHT 20
#define MAX_LENGTH (WIDTH * HEIGHT)

typedef struct {
    int x, y;
} Position;

typedef struct {
    int x, y;
    Position body[MAX_LENGTH];
    int length;
} Snake;

enum Direction { UP, DOWN, LEFT, RIGHT };

void initialize(Snake *snake, Position *food, enum Direction *dir) {
    snake->x = WIDTH / 2;
    snake->y = HEIGHT / 2;
    snake->length = 1;
    snake->body[0].x = snake->x;
    snake->body[0].y = snake->y;

    srand(time(NULL));
    food->x = rand() % WIDTH;
    food->y = rand() % HEIGHT;

    *dir = RIGHT;
}

void draw(Snake *snake, Position *food) {
    clear();
    for (int i = 0; i < snake->length; ++i) {
        mvprintw(snake->body[i].y, snake->body[i].x, "o");
    }
    mvprintw(food->y, food->x, "*");
    refresh();
}

void input(enum Direction *dir) {
    int ch = getch();
    switch(ch) {
        case 'w':
            *dir = UP;
            break;
        case 's':
            *dir = DOWN;
            break;
        case 'a':
            *dir = LEFT;
            break;
        case 'd':
            *dir = RIGHT;
            break;
        case 'x':
            *dir = -1;
            break;
    }
}

void moveSnake(Snake *snake, enum Direction dir, int *gameOver) {
    for (int i = snake->length - 1; i > 0; --i) {
        snake->body[i] = snake->body[i - 1];
    }

    switch(dir) {
        case UP:
            snake->y--;
            break;
        case DOWN:
            snake->y++;
            break;
        case LEFT:
            snake->x--;
            break;
        case RIGHT:
            snake->x++;
            break;
        default:
            break;
    }

    if (snake->x >= WIDTH || snake->x < 0 || snake->y >= HEIGHT || snake->y < 0) {
        *gameOver = 1;
    }

    for (int i = 1; i < snake->length; ++i) {
        if (snake->body[i].x == snake->x && snake->body[i].y == snake->y) {
            *gameOver = 1;
        }
    }

    snake->body[0].x = snake->x;
    snake->body[0].y = snake->y;
}

int main() {
    initscr();
    noecho();
    curs_set(FALSE);

    Snake snake;
    Position food;
    enum Direction dir;
    int gameOver = 0;

    initialize(&snake, &food, &dir);

    while (!gameOver) {
        draw(&snake, &food);
        input(&dir);
        moveSnake(&snake, dir, &gameOver);

        if (snake.x == food.x && snake.y == food.y) {
            snake.length++;
            food.x = rand() % WIDTH;
            food.y = rand() % HEIGHT;
        }

        usleep(100000);
    }

    endwin();
    printf("Game Over! Score: %d\n", snake.length - 1);
    return 0;
}
