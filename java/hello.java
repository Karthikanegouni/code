import java.util.Scanner; // import the Scanner class 

class hello{
  public static void main(String[] args) {
    Scanner myObj = new Scanner(System.in);
    String userName;
    System.out.println("karthik");
    // Enter username and press Enter
    System.out.println("Enter username"); 
    userName = myObj.nextLine();   
       
    System.out.println("Username is: " + userName);        
  }
}

