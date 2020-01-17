#include <pthread.h>
#include <stdio.h>



pthread_t incrementingThread;
pthread_t decrementingThread; 
int i = 0;

// Note the return type: void*
void* incrementingThreadFunction(){
    // TODO: increment i 1_000_000 times
    for ( int x = 1; x <= 1000000 ; x++ )
        {
            i++;
        }
}

void* decrementingThreadFunction(){
    // TODO: decrement testi 1_000_000
        for ( int x = 1; x <= 1000000 ; x++ )
        {
            i--;
        } 
}


int main(){
    // TODO: declare incrementingThread and decrementingThread (hint: google pthread_create)
 


    pthread_create(&incrementingThread, NULL, incrementingThreadFunction, NULL);
    pthread_create(&decrementingThread, NULL, decrementingThreadFunction, NULL);
    
    pthread_join(incrementingThread, NULL);
    pthread_join(decrementingThread, NULL);
    
    printf("The magic number is: %d\n", i);
    return 0;
}
