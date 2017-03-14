import java_cup.runtime.*;

public class Calculator {

    public static void main(String[] argv) throws Exception{

    System.out.println("\n========================================");	
	System.out.println("\nPlease type your arithmethic expression:");
	System.out.println("\n========================================\n");	
	Parser p = new Parser(new scanner());
	p.parse();
    }
}