import java.lang.*; 
import java.util.Scanner;

public class demoJava {

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		
		// type primitif 
		// entier
		boolean valB; 	// -> 1 octet -> 
						// uniquement de true ou false 
		byte valb; 		// -> 1 octet
		char valC; 		// -> 2 octets 
						// -> table étendue ASCII -> unicode -> \u0000 (hexaddécimal) 
		short valS; 	// -> 2 octets 
		int valI; 		// -> 4 octect 
		long valL; 		// -> 8 octets 
		
		// réel 
		float valF;		// -> 4 octets 
		double valD; 	// -> 8 octets 
	 
		// chaine de caractère 
		String maChaine = "Hello Slo2 "; 
		String Recuperation; 
		
		// objet pour la récuperation clavier 
		Scanner monClavier = new Scanner(System.in); 
		
		// exemple insctrution / déclaration  
		valB = true; 
		valC = 'A'; 
		valC = '\u0061'; 
		
		System.out.print(maChaine);
		System.out.println(" Exemple DEMO ");
		
		//-- lecture clavier --// 
		Recuperation = monClavier.nextLine(); 
		
		
		try 
		{
			valI = System.in.read(); 
		}
		catch (Exception data)
		{
			// message erreur utilsateur 
		}
		finally 
		{
			
		}
		
		
	}

}
