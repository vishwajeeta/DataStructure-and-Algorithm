import java.util.Scanner;
class main{
    public static void main(String []args){
        String hii[]=new String[10];
        System.out.println("Enter "+hii.length+" values in Array:");
        
            Scanner data=new Scanner(System.in);
        for(int i=0;i<hii.length;i++)
        {
            
            String inputdata=data.next();
            hii[i]=inputdata;
        }
        for(int i=0;i<hii.length;i++)
        {
             System.out.println(hii[i]);
        }
    }
}