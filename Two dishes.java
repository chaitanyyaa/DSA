/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
// fruit = A  vegetable = B  fishes = c    Guest = N

class Codechef
{
  public static void main (String[] args) throws java.lang.Exception
  {
    int a,b,c,n,t;
    Scanner sc = new Scanner(System.in);
    t = sc.nextInt();
    for(int i=0; i<t; i++){
        n = sc.nextInt();
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        if((a+c)>=b){
            if(b>=n){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
        else{
             if((a+c)>=n){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
  }
}
