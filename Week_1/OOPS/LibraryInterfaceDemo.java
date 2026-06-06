interface library{
    void registerAccount();
    void requestBook();
}
class kids implements library{
    int age;
    String book_type;

    @Override
    public void registerAccount() {
        if(age<12){
            System.out.println("Account registered as a kid ");
        }
        else{
            System.out.println("Age must be less than 12 to register as a kid in library ");
        }
    }
    @Override
    public void requestBook() {
        if(book_type.equals("kids")){
            System.out.println("Book Issued successfully, rwturn in 10 days");
        }
        else{
            System.out.println("Book Not Issued, you are only allowed to request kid type books");
        }
    }
}

class Adult implements library{
    int age;
    String book_type;
    
    @Override
    public void registerAccount() {
        if(age>12){
            System.out.println("Account registered as a kid ");
        }
        else{
            System.out.println("Age must be greater than 12 to register as a kid in library ");
        }
    }
    @Override
    public void requestBook() {
        if(book_type.equals("fiction")){
            System.out.println("Book Issued successfully, rwturn in 7 days");
        }
        else{
            System.out.println("Book Not Issued, you are only allowed to request fiction type books");
        }
    }
}

public class LibraryInterfaceDemo {
    public static void main(String[] args) {
        kids kid = new kids();
        kid.age=10;
        kid.registerAccount();

        kid.age=18;
        kid.registerAccount();

        kid.book_type="kids";
        kid.requestBook();

        kid.book_type="fiction";
        kid.requestBook();

        Adult ad= new Adult();
        ad.age=10;
        ad.registerAccount();

        ad.age=18;
        ad.registerAccount();

        ad.book_type="kids";
        ad.requestBook();

        ad.book_type="fiction";
        ad.requestBook();

    }
}
