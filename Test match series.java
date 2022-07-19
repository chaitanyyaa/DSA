/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
   public static void main (String[] args) throws java.lang.Exception
   {
      // your code goes here
      Scanner scan = new Scanner(System.in);
      int t = scan.nextInt();
      while(t-->0){
          int draw=0;
          int windi=0;
          int winen=0;
          for(int i=0;i<5;i++){
              int j = scan.nextInt();
              if(j==0){
                  draw++;
              }
              if(j==1){
                  windi++;
              }
              if(j==2){
                  winen++;
              }
          }
          if(windi>winen){
              System.out.println("INDIA");
          }
          else{
              if(winen==0||winen==windi){
                  System.out.println("DRAW");
              }
              else{
                  System.out.println("ENGLAND");
              }
          }
          
      }
   }
}
