#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <dirent.h>
#include <limits.h>
#include <iostream>
using namespace std;

int main ()
{
    char path[100];
    DIR *dp;
    int directorycount = 0;
    int filecount = 0;
    int byte = 0;
    struct dirent *ep;   
    struct stat sb;  
    dp = opendir ("./");

    // Input path from user
    printf("Enter path to list files: ");
    scanf("%s", path);
    if (dp != NULL)
    {
        while(ep->d_type == DT_DIR) 
            directorycount++;
        while (ep = readdir (dp))
            filecount++;
        byte = sb.st_size;
        (void) closedir (dp);
    }
    else
        perror ("Couldn't open the directory");

    cout << "The total number of directories in directory " << path << " is: " << directorycount << "\n";

    cout << "The total number of files in directory " << path << " is: " << filecount << "\n";

    cout << "The total number of bytes occupied by all files in directory " << path << " is: " << byte << "\n";
    
    return 0;
}
