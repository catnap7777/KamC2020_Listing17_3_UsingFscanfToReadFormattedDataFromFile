//Listing 17.3 Using fscanf to read formatted data from a disk file; page 427

// NOT WORKING AND CANNOT FIND INPUT FILE

#include <stdio.h>
#include <stdlib.h>

//void clear_kb(void);

int main (void)
{
    FILE *fp;
    float  f1,f2,f3,f4,f5;


    if( (fp = fopen("karenLising17_3.txt","r")) == NULL)
    {
        fprintf(stderr,"Error opening file.\n");
        exit(1);
    }

    fscanf(fp,"%f %f %f %f %f", &f1, &f2, &f3, &f4, &f5);
    printf("The values are: \n%f \n%f \n%f \n%f \n%f\n\n\n",f1,f2,f3,f4,f5);

    fclose(fp);
    return(0);

}
