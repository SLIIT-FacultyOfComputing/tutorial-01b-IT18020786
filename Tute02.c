#include <stdio.h>

int main() {

  int distance;
	int first30km;
	int secondkm;
	int  amount;

  printf("Enter distance the van has travelled:");
  scanf("%d",&distance);

  if(distance>30){
	
	first30km = 30*50;
	secondkm = (distance-30)*40;
	amount = first30km+secondkm;
	
	printf("amount is:%d",amount);
	}
	else{
		amount=distance*50;
		printf("amount is:%d",amount);
	}
  
  return 0;
}