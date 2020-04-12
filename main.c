#include <stdio.h>
#include "point.h"

int main(void)
{
  struct Point food[5] = {{18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38}};
  struct Point organism = {36,27};
  struct Point closest_food;
  get_closest_food(food, 5, organism, &closest_food);
  printf("%d %d", closest_food.x, closest_food.y);
  return 0;
}