//created by- Siddharth Saurabh (https://github.com/siddhartthecoder)
import java.util.*;
class evenodd {
 public static void main(String args[]) throws Exception {
  Scanner sc = new Scanner(System.in);
  System.out.println("Enter your number:");
  int n = sc.nextInt();
  if(n%2==0)
    System.out.println(n+" is even");
  else
    System.out.println(n+" is odd");
 }
}
