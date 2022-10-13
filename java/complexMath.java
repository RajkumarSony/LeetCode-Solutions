import java.util.*;
 class ComplexNumber{
   int real, img;
	
   ComplexNumber(int r, int i){
	this.real = r;
	this.img = i;
   }
	
   public static ComplexNumber sum(ComplexNumber c1, ComplexNumber c2)
   {
        ComplexNumber temp = new ComplexNumber(0, 0);

        temp.real = c1.real + c2.real;
        temp.img = c1.img + c2.img;
        
        return temp;
    }
    public static void main(String args[]) {
          Scanner sc=new Scanner(System.in);
          int a=sc.nextInt();
          int b=sc.nextInt();
          int c=sc.nextInt();
         ComplexNumber c1 = new ComplexNumber(a, b);
          System.out.println(c1.real+" + "+c1.img +"i"); 
         ComplexNumber c2 = new ComplexNumber(c,0);
         ComplexNumber c3 = sum(c1, c2);
         System.out.println(c3.real+" + "+c3.img +"i");
         ComplexNumber c4=sum(c3,c1);
         System.out.println(c4.real+" + "+c4.img+"i");
     }
}
