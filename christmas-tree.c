#include <stdio.h>
#include <stdlib.h>
void space(int n){
    for (int i = 0; i < n; i++) printf(" ");
}

void star(int n){
    for (int i = 0; i < n; i++) printf("*");
}

void my_christmas_tree(int size){
    if (size <= 0) return;
    int stars = 1;
    int lines = 4;
    int max_width = 1;
    int tmp_line = lines;

    // max_width for space
    int firstLineValue = 1;
    int step = 2;
    int dovr = 0;
    int increase;
    for (int i = 1; i <= size; i++){
        increase = (tmp_line - 1) * 2 + firstLineValue;
        firstLineValue = increase - step;
        tmp_line++;
        if (dovr < 1){
            dovr++;
        }
        else{
            dovr = 0;
            step += 2;
        }
    }    
    max_width = increase;

    // tree
    stars = -1;
    lines = 4;
    dovr = 0;
    step = 2;
    for (int i = 1; i <= size; i++){
        for (int j = 0; j < lines; j++){
            stars += 2;
            int spaces = (max_width - stars) / 2;
            space(spaces);
            star(stars);
            printf("\n");
            
        }
        if (dovr < 1){
            dovr++;
        }
        else{
            step += 2;
            dovr = 0;
        }
        stars -= step;
        if (i%2==1){
            stars-=2;
        }
        
        lines++;
    }

    // trunk
int trunk_width = size;
int trunk_height = size;
int trunk_spaces = (max_width - trunk_width) / 2;
if (trunk_width%2==0){
    trunk_spaces++;
}


for (int i = 0; i < trunk_height; i++){
        space(trunk_spaces);
        for (int j = 0; j < trunk_width; j++) printf("|");
        printf("\n");
    }
}

int main(int argc, char **argv){
    if (argc != 2)
    {
        printf("Usage: %s <size>\n", argv[0]);
        return 1;
    }

    int size = atoi(argv[1]);
    my_christmas_tree(size);
    return 0;
}