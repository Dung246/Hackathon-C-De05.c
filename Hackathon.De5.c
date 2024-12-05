#include<stdio.h>
#include<math.h>
              
			
  int main() {

    int arr[100];
    int size =0;
    int choice=0;
    int found=0;
    int element;
      while (choice != 9) {
       printf("\n MENU \n");
	   printf(" 1.Nhap so phan tu can nhap va gia tri cua cac phan tu : \n");
	   printf(" 2.In ra gia tri cac phan tu theo dang : \n");
	   printf(" 3. Dem so luong cac so hoan hao trong mang \n");
	   printf(" 4.Tim gia tri nho thu hai trong mang (Khong sap xep) \n");
	   printf(" 5.Them mot phan tu vao vi tri dau tien  trong mang : \n");
	   printf(" 6.Xoa mot phan tu trong mang : \n");
	   printf(" 7.Sap xep mang theo thu tu giam dan \n");
	   printf(" 8.Tim kiem phan tu va in ra vi tri cua phan tu do nguoi dung nhap vao : \n");
	   printf(" 9.Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho so le dung truoc, so chan dung sau\n");
	   printf(" 10. Dao nguoc toan bo phan tu co trong\n ");       
	   printf(" 11.Thoat \n");
	   printf("Choice : \n");
	   scanf("%d",&choice) ;
	   
	     if( choice ==1) {
		    printf("Nhap so phan tu can nhap : ");
		    scanf("%d",&size);
		   if(size >100) {
		  	printf("Loi. Da vuot qua kich thuoc cho phep \n");		  	 	
		  }else{
		  	  printf("Moi ban nhap gia tri phan tu : \n");
		  	   for(int i=0;i<size;i++){
		  	   scanf("%d",&arr[i]);
		  }
	      }
		  	   
		  }else if(choice == 2){
              printf("Phan tu cua mang dang quan ly : \n");
			   for(int i=0;i<size;i++){
			  	printf("arr[%d] \n",arr[i]);
			   }		  	
			   
		  }else if(choice ==3){
		  	int sum =0;
   	        for(int i =1;i <= sqrt(n);i++)
   	         if(n %i ==0) {
   	        	sum +=i;
   	        	if(i !=n/i){
   	  		    sum += n/i;
	    } 
	   }
     
     if( sum -n==n){
     	return 1;
	 }
	  return 0; 
		  	  int n=1000;
		  	  for(int i=1;i<=n;i++){
		  	   if(is_perfect(i)){
		  	  	printf("%d",i);
				}
			}
		    return 0;
			  
			  
		  }else if(choice ==4){
		  	 int max1,max2,n;
		  	 for(int i=0;i<n;i++)max1=fmax(max1,arr[i]);
                for(int i=0;i<n;i++)if(arr[i]>max2&&arr[i]<max1)max2=arr[i];
                printf("Phan tu lon thu 2 trong mang: %d\n",max2);
                break;
		        		 
		  }else if(choice ==5){
		  	 if(size>= 100) {
		  	 	printf("mang da day \n");
		    }else{
		     	printf("Moi ban nhap vao mot so nguyen to : ");
		     	scanf("%d",&element);
		     	 arr[size++]=element;
		     	 printf("Vi tri dau tien duoc them vao : \n");
			 }
			 
		  }else if(choice==6){
			 if (size ==0) {
			 	printf("Mang rong \n");
			}else {
			  int index;
			  printf("Chi so cua phan tu can xoa :",size-1);
			  scanf("%d",&index);
			   if(index < 0 || index >= size){
			   	 printf("Khong hop le");
			  }else{
			   	 for(int i=index;i < size -1;i++){
			   	 	arr[i]=arr[i+1];
			    }
			       size--;
			       printf("Da xoa phan tu\n");
			   }	
			 }
			 
		  }else if(choice ==7){
		  	for(int i=0;i<size-1;i++){
		  	 for(int j =i+1;j< size;j++){
		  	 	if(arr[i]>arr[j]){
		  	 		int temp=arr[i];
		  	 		arr[i]=arr[j];
		  	 		arr[j]= temp;
				}
			 }
			}
			printf("Mang duoc sap xep theo thu tu tang dan ");
			
		  }else if(choice ==8){
		  	 printf("Moi ban nhap phan tu can tim ");
		  	 scanf("%d",&element);
		  	  for(int i=0;i<size;i++){
		  	  	if(arr[i] == element){
		  	  		printf("Phan tu duoc tim thay tai %d \n",i);
		  	  		found=1;
		  	  		break;
			     }
				}
				if(!found) {
					printf("Phan tu khong duoc tim thay \n");
				}
	      }else if(choice==9){
		  
		  }else if(choice ==10){
		  	
		  }else if(choice ==11) {
		  	 printf("Thoat chuong trinh\n");
		  }else{
		  	 printf("Khong hop le.Xin vui long thu lai \n");
		  }
	     }
	     return 0;
  }


