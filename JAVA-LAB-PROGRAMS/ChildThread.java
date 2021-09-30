package collegeProg;

public class ChildThread extends Thread {
	public ChildThread(String name) {
		super(name);
		start();
	}
	
	@Override
	public void run() {
		for(int i=10;i<15;i++) {
			try {
				System.out.println(this.getName()+":\t"+i);
				Thread.sleep(500);
			}catch(InterruptedException ex) {
				System.out.println(this.getName()+" Interrupted");
			}
		}
		System.out.println(this.getName()+" terminated");
	}
}
