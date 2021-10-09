package collegeProg;

public class CallMe {
	public void call(String msg) {
		System.out.print("["+msg);
		try {
			Thread.sleep(2000);
		}catch(InterruptedException ex) {
			
		}
		System.out.print("]");
	}
}
