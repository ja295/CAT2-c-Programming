#include <stdio.h>
int main(){
int scores[2][2];
scores[0][0]=65;
scores[0][1]=92;
scores[1][0]=35;
scores[1][1]=70;
scores[0][0]=84;
scores[0][1]=72;
scores[1][0]=59;
scores[1][1]=67;
for(int i=0;i<2;++i){
for(int k=0;k<2;++k){
printf("%d ", scores[i][k]);
}
printf("\n");
}
return 0;
}