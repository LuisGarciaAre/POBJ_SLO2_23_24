
import java.lang.*;
import java.util.Scanner;


public class Demo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		//type primitif
		
		boolean valB;	 //-> 1 octet
						 // uniquement des true ou false
		byte valb;		 //-> 1 octet
		char valC;		 //-> 2 octets
						 // table ASCII étendue -> unicode -> \u0061 (les "x" correspondent à des valeurs) en héxadécimal
		short valS;		 //-> 2 octets
		int valI;   	 //-> 4 octets
		long valL;		 //-> 8 octets
		
		//réel
		float valF;		 //-> 4 octets
		double valD;	 //-> 8 octets
		
		//chaine de charactère
		String maChaine = "Hello Slo2";
		String Recuperation;
		
		//objet pour recuperer clavier
		Scanner monClavier = new Scanner(System.in);
		
		
		valB = true;
		valC = 'A';
		valC = '\u0061';
		
		System.out.println(maChaine);
		System.out.println("Exemple démo");
		
		//-- Lecture clavier --//
		Recuperation = monClavier.nextLine();
		
		try
		{
		valI = System.in.read();
		}
		catch(Exception data)
		{
			//message d'erreur à l'utilisateur
		}
		finally
		{
		
		}
		
	}

}
