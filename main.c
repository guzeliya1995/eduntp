#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    system("rm /etc/ntp.conf");
    FILE *fd = fopen("/etc/ntp.conf","w");
    return 0;
}
