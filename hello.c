// //Q: 5,3,1 (Reverse output)
// #include<stdio.h>
// int main(){
//   int i;

//   for (i = 5; i>=1;i=i-2){
//     printf("%d\t",i);
//   }
//     return 0;
// }
// //output: 5 , 3, 2, 1

// //Q:20,17,14,....11 (sum)
// #include<stdio.h>
// int main(){
//   int i;
//   int sum = 0;
//   for (i = 20; i>=10;i=i-3){
//     sum = sum + i;
    
//   }
//     printf("%d",sum);
//     return 0;
// }


// // //Q: ৩০ থেকে ৫ এর মধ্যে ৩ এবং ৫ দ্বারা বিভাজ্য সংখ্যাগুলো মানের অধঃক্রমানুসারে সাজাও(বড় থেকে ছোট)
 
// // //sorting: ascending,descending

// #include<stdio.h>
// int main(){
//   int i;
 
//   for (i = 30; i>=5;i--){
    
//     if(i%3==0 && i%5==0){

//     printf("%d\t",i);
    
//     }
//   }
//     return 0;
// }
// //output: 30 , 15

// // Arithmetic series (সমান্তর ধারা নির্ণয়):
// // Host by Mustafa Rahman

// #include <stdio.h>
// int main() {
//    int n, d, i, current_term;

//    printf("Enter the number of terms in the series: ");
//    scanf("%d", &n);

//    printf("Enter the common difference: ");
//    scanf("%d", &d);

//    current_term = 0;
//    printf("The arithmetic series is: ");

//    for (i = 1; i <= n; i++) {
//       printf("%d ", current_term);
//       current_term += d;
//    }

//    return 0;
// }

// // Geometric series (গুনোত্তর ধারা নির্ণয়):
// //  Host by Mustafa Rahman
// #include <stdio.h>

// int main()
// {
//    int n, r, i, current_term;

//    printf("Enter the number of terms in the series: ");
//    scanf("%d", &n);

//    printf("Enter the common ratio: ");
//    scanf("%d", &r);

//    current_term = 1;
//    printf("The geometric series is: ");

//    for (i = 1; i <= n; i++)
//    {
//       printf("%d ", current_term);
//       current_term *= r;
//    }

//    return 0;
// }
