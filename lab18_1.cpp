#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
	double overlapLeft;
	if(R1.x>R2.x) overlapLeft=R1.x;
    else overlapLeft=R2.x;

    double overlapRight;
    if(R1.x+R1.w>R2.x+R2.w) overlapRight=R2.x+R2.w;
    else overlapRight=R1.x+R1.w;

	double overlapWidth = overlapRight-overlapLeft;

	double overlapTop;
	if(R1.y>R2.y) overlapTop=R2.y;
	else overlapTop=R1.y;

	double overlapDown;
	if(R1.y-R1.h>R2.y-R2.h) overlapDown=R1.y-R1.h;
	else overlapDown=R2.y-R2.h;

	double overlapHeight = overlapTop-overlapDown;
	
	double overlapArea = overlapHeight*overlapWidth;

	if (overlapArea>0) return overlapArea;
	else return 0;
    
}

int main(){
	Rect R1 = {1,1,5,5};
Rect R2 = {2,2,5,5};	
cout << overlap(R1,R2);	
}