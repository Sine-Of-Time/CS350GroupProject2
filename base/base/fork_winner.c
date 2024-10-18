#include "types.h"
#include "stat.h"
#include "user.h"

int 
main(int argc, char * argv[])
{    
    cprintf("Inside fork_winner!!!");
    if(argc != 1){
        printf(1, "Pleae only input one int!!!\n");
    }

	fork_winner(argv[1]);
    exit(); //return 0;
}