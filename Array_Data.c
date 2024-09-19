#include <stdio.h>

#define PORT_SIZE 8

void print_port_data(int port[]) 
{
    printf("PORT Data: ");
    for (int i = 0; i < PORT_SIZE; i++) 
    {
        printf("%d ", port[i]); 
    }
       printf("\n");
}

int main(void) {

    int port[PORT_SIZE] = {0, 0, 0, 0, 0, 0, 0, 0}; 

    
    port[0] = 1; 
    port[2] = 0; 
    port[3] = 1; 


    print_port_data(port);

    port[4] = 1; 
    port[5] = 0; 

    print_port_data(port);

    return 0; 
}
