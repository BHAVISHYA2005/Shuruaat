#include <stdio.h>
int main(){
    int maxscore=500;
    int userscore=197;
    float avrscore= (float) userscore/maxscore*100;
    printf("The average of the user is: %.2f" , avrscore);
    return 0;
}