/*
user enters num_boxes
compute tot_cost of boxes, including tax
output tot_cost
*/

#include <../include/stdio.h>

main()
{
  int one_box_cost = 5;
  int ten_box_cost = 45;
  float tax = .15;
  int num_boxes;
  int ten_boxes;
  int ten_boxes2;
  int rem_boxes;
  float ten_boxes_cost;
  float rem_boxes_cost;
  float tot_cost;
  
  printf("Enter number of boxes:\n");
  scanf("%d",&num_boxes);
  
  /*
  if num_boxes >= 10 then 
  	(multiply each set of 10 boxes by ten_box_cost) + 
  	(multiply remaining boxes by one_box_cost)
  else
  	(multipy num_boxes by one_box_cost)
  end if  	
  */
  
  if (num_boxes >= 10)
  {
    ten_boxes = num_boxes / 10;
    ten_boxes2 = ten_boxes * 10;
    ten_boxes_cost = ten_boxes2 * ten_box_cost;
    rem_boxes = num_boxes % 10;
    rem_boxes_cost = rem_boxes * one_box_cost;
    tot_cost = (ten_boxes_cost + rem_boxes_cost) + ((ten_boxes_cost + rem_boxes_cost) * tax);
  }  
  else
  {
    tot_cost = (num_boxes * one_box_cost) + (tax * (num_boxes * one_box_cost));
  }  
    
  printf("The total cost is: $ %f",tot_cost);
  return 0;
}