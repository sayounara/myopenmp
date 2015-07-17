#include <stdio.h>
#include <omp.h>

//int main()
//{
//  int idx = 100;
//  int main_var = 2120;
//
//  #pragma omp parallel for private(idx) lastprivate(main_var)
//  for (idx = 0; idx < 12; ++idx)
//  {
//    main_var = idx * idx;
//    printf("In thread %d idx = %d main_var = %d\n",
//      omp_get_thread_num(), idx, main_var);
//  }
//  printf("Back in main thread with main_var = %d\n", main_var);
//}
