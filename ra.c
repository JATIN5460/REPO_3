#include <stdio.h>

int main()
{
    int a = 10;
    float b = 3.14;
    double c = 2.71828;
    
    // Open the file in write mode
    FILE *fp = fopen("data.txt", "w");
    
    // Write the constants to the file
    fwrite(&a, sizeof(int), 1, fp);
    fwrite(&b, sizeof(float), 1, fp);
    fwrite(&c, sizeof(double), 1, fp);
    
    // Close the file
    fclose(fp);
    
    // Open the file in read mode
    fp = fopen("data.txt", "r");
    
    // Read the constants from the file
    int read_a;
    float read_b;
    double read_c;
    fread(&read_a, sizeof(int), 1, fp);
    fread(&read_b, sizeof(float), 1, fp);
    fread(&read_c, sizeof(double), 1, fp);
    
    // Close the file
    fclose(fp);
    
    // Print the retrieved constants
    printf("a = %d\nb = %f\nc = %lf\n", read_a, read_b, read_c);
    return 0;
}
