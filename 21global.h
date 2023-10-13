#include <errno.h>

char *f1file= "./21-fifoOne";
char *f2file= "./21-fifoTwo";

void init()
{
    int fifoOneStatus, fifoTwoStatus;

    fifoOneStatus = mkfifo(f1file, S_IRWXU);
    if (!(errno == EEXIST || fifoOneStatus != -1))
        perror("Error while creating FIFO file fifoOne");

    fifoTwoStatus = mkfifo(f2file, S_IRWXU);
    if (!(errno == EEXIST || fifoTwoStatus != -1))
        perror("Error while creating FIFO file fifoTwo");
}
