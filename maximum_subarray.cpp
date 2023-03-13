#include<stdio.h>
int main()
{
     int arr[1000]={2, -1, 3, -4, 1, -2, -1, 5, -4}, len=9;
     int cur_max, tmp_max, strt_idx, sub_arr_idx;
     cur_max = arr[0];
     for(strt_idx = 0; strt_idx < len; strt_idx++)
     {
	  tmp_max=0;
	  for(sub_arr_idx = strt_idx; sub_arr_idx < len; sub_arr_idx++)
	  {
	       tmp_max +=arr[sub_arr_idx];
	       if(tmp_max > cur_max)
		         cur_max = tmp_max;
	  }
     }
     printf("%d",cur_max);
     return 0;
}
