package collegeProg;

public class IncrementId {
	public static void main(String args[])
    {
        String s="BTBTC19226";
        int t=Integer.parseInt(s.substring(9))+1;
        System.out.println("Output after incrementing : " + s.substring(0,9)+t);
    }
}

/*Output after incrementing : BTBTC19227
*/