//https://www.codewars.com/kata/525f50e3b73515a6db000b83
#include <stdio.h>

char *create_phone_number(char phnum[15], const unsigned char nums[10])
{
    sprintf(phnum, "(%hhu%hhu%hhu) %hhu%hhu%hhu-%hhu%hhu%hhu%hhu", nums[0], nums[1], nums[2], nums[3], nums[4], nums[5], nums[6], nums[7], nums[8], nums[9]);
    return phnum;
}

int main(int argc, char **argv)
{
    const unsigned char nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    char phnum[15];
    char *phone = create_phone_number(phnum, nums);
    printf("%s", phone);
    return 0;
}