package collegeProg;

import java.util.*;

public class CountVowels_Consonants_Digits {
	public static void main(String[] args) 
	{
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        System.out.println("Input string is : "+str);
        int v = 0, c = 0, d = 0;
        
        str = str.toLowerCase();

        for(int i = 0;i<str.length();i++) 
        {
            
            char ch = str.charAt(i);
           
            switch (ch)  
            {
            	case 'a':
            		v++;
            		break;
            	case 'e':
            		v++;
            		break;
            	case 'i': 
            		v++;
            		break;
            	case 'o':
            		v++;
            		break;
            	case 'u': 
            		v++;
            		break;
            		
                case '0':
                	d++;
                    break;
                case '1':
                	d++;
                    break;
                case '2':
                	d++;
                    break;
                case '3':
                	d++;
                    break;
                case '4':
                	d++;
                    break;
                case '5':
                	d++;
                    break;
                case '6':d++;
                    break;
                case '7':d++;
                    break;
                case '8':d++;
                    break;
                case '9':d++;
                    break;
                    
                default:
                    c++;
            }

        }
        
        System.out.println("Total count of vowels in the given string is = "+v);
        System.out.println("Total count of consonants in the given string is = "+c);
        System.out.println("Total count of digits in the given string is = "+d);
	}
}


/*
Enter a string: Q6 JAVA PROGRAMMING LAB
Input string is : Q6 JAVA PROGRAMMING LAB
Total count of vowels in the given string is = 6
Total count of consonants in the given string is = 16
Total count of digits in the given string is = 1
*/