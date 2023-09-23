//https://www.codewars.com/kata/585d7d5adb20cf33cb000235
#include <stddef.h>
#include <stdio.h>

float finduniq(const float *nums, size_t n)
{
  int occ=0;
  for(size_t i =0; i <n ; i++){
    occ=0;
    if(i > 0 && *(nums+i-1) == *(nums+i)){
      continue;
    }
      for(size_t j=0; j <n ; j++){
        
        if(*(nums+i) == *(nums+j)){
          occ++;
          
          if(occ > 1)
            break;
        }
      }
      if(occ == 1)
        return *(nums+i);
  }
  return 0.;
}

int main(int argc, char const *argv[])
{
  float nums[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1.5,1,1,1,1,1,1,1,1,1,1,1,1};
  printf("%.2f\n", finduniq(nums, 27));
  return 0;
}