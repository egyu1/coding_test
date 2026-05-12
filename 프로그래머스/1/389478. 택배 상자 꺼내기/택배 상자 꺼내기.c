#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int w, int num) {
    int answer = 0;
    
    int row = (num - 1) / w;
    int position = (num - 1) % w;
    int column;
    
    //짝수 층은 왼쪽 -> 오른쪽, 홀수 층은 오른쪽 -> 왼쪽
    if(row % 2 == 0) {
        column = position;
    }
    else{
        column = (w - 1) - position;
    }
    
    int height = row;
    while(true){
        int current;
        
        if(height % 2 ==0){
            current = (height*w) + (column + 1);
        }
        else {
            current = (height*w) + (w - column);
        }
        if(current <= n) {
        answer++;
        height++;
    }
    else
        break;
    }
    
    
    
    return answer;
}