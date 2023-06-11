#include<stdio.h>
#include<cs50.h>

int main(void){
    int length;
    do{

    length = get_int("Length: ");
}
while(length<1);
int new_array[length];
int x = 1;
for(int i=0;i<length;i++){
new_array[i] = x;
x = x *2;
printf("%i\n",new_array[i]);
}
}
