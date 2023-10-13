#include <errno.h>
char *fifo= "./22-fifo";

void init()
{
    int fifoStatus;

    fifoStatus = mkfifo(fifo, S_IRWXU);
    if (!(errno == EEXIST || fifoStatus != -1))
        perror("Error while creating FIFO file fifoOne");
}
