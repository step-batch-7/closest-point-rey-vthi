#include <math.h>
#include "point.h"

double find_distance(struct Point *point1,struct Point *point2){
  return hypot(point2->x - point1->x, point2->y - point1->y);
}

void get_closest_food(struct Point food_points[], int points_length, struct Point current_location, struct Point *closest_food_location){
  double shortest_distance = find_distance(&current_location, &food_points[0]);
  double current_distance;
  *closest_food_location = food_points[0];
  
  for (int i = 0; i < points_length; i++)
  {
    current_distance = find_distance(&current_location, &food_points[i]);
    if(shortest_distance > current_distance) {
      shortest_distance = current_distance;
      *closest_food_location = food_points[i];

    }
  }
}