/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
  public static void main (String[] args) throws java.lang.Exception
  {
    Scanner sc=new Scanner(System.in);
    int testcases=sc.nextInt();
  
    for(int i=0;i<testcases;i++){
       
       int total=sc.nextInt();
        int correct=sc.nextInt();
       int pass=sc.nextInt();
       if((correct*3)+((total-correct)*-1)>=pass) System.out.println("PASS");
       else 
       System.out.println("Fail");
    }
    
  }
}
