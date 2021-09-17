#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int i , k,ip[4] ,posit[4],j, subnet[4];
  char check ;

//================  Input Check =============================
  do {
    check = 'T';                        //  set it to  True so we can prove it wrong later
    printf("Ip address :");           //  Let the user know what he is giving as input
    for (i = 0; i <= 3; i++) {            //  A for loop of 4 repetitions , from 0 to 3 , in order to use the counter var as a position indicator
      scanf("%d",&ip[i]);                 //  Input of the ip  , with i as the indicator

      if (ip[i] >225 || ip[i]<1) {         // An if statement that checks if the every part of the ip is inside the bounds
        check = 'F';                       // Setting the 'check' variable to false , since it has pass through the condition
      }

    if (ip[0] >223 || ip[0]<1) {         // An if statement that checks if the first part of the ip is inside the bounds
      check = 'F';                       // Setting the 'check' variable to false , since it has pass through the condition
      }
    }

    if (check == 'F') {                  //Checks if the 'check' variable is set to True or False ,in which case , responds aproprietly
      printf("Ip Rejected\n");
    }else if(check == 'T'){
      printf("Ip Accepted\n");
    }else{
      printf("I seriously can't even start to understand how you got this output \n");
    }
  } while(check != 'T');               //  The end of the do-while , it checks if the 'Check' variable is set to True as is the default

  do {
    check = 'T';                        //  set it to  True so we can prove it wrong later
    printf("Subnet Mask :");           //  Let the user know what he is giving as input
    for (i = 0; i <= 3; i++) {            //  A for loop of 4 repetitions , from 0 to 3 , in order to use the counter var as a position indicator
      scanf("%d",&subnet[i]);                 //  Input of the subnet  , with i as the indicator
      if (subnet[i] >256 || subnet[i]<0) {         // An if statement that checks if the every part of the subnet is inside the bounds
        check = 'F';                       // Setting the 'check' variable to false , since it has pass through the condition
      }
      for (j = 0; j <= 8; j++) {
        if (subnet[i] == 256 - pow(2,j)) {
          check = 'T';
          break;
        }else{
          check = 'F';
        }
      }
    }
    if (subnet[0] >256 || subnet[0]<0) {         // An if statement that checks if the first part of the subnet is inside the bounds
      check = 'F';                       // Setting the 'check' variable to false , since it has pass through the condition
      }

    if (check == 'F') {                  //Checks if the 'check' variable is set to True or False ,in which case , responds aproprietly
      printf("Subnet Mask Rejected\n");
    }else if(check == 'T'){
      printf("Subnet Mask Accepted\n");
    }else{
      printf("I seriously can't even start to comprehend how you got this output \n");
    }
  } while(check != 'T');               //  The end of the do-while , it checks if the 'Check' variable is set to True as is the default
  //================  Input Check =============================


//================ Input Calculations =======================

  if (((subnet[0]!=0 && subnet[1]!=0 && subnet[2]!=0 && subnet[3]==0)&&(ip[1]>=192))) {
    /* code */printf("Class C\n");
  }else{
    printf("Something else\n", );
  }

printf("==============EXIT CONDITION ==============\n");

printf("Ip address: ");
for (i = 0; i <= 3; i++) {
  printf("%d ",ip[i]);
}
printf("\n");

printf("Subnet mask: ");
for (i = 0; i <= 3; i++) {
  printf("%d ",subnet[i]);
}
printf("\n");

  system("PAUSE");
  return 0;
}
