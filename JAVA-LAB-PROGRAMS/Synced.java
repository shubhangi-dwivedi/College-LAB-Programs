package collegeProg;

public class Synced extends Thread{
	CallMe c;
	String message;
	
	public Synced(CallMe c, String m) {
		this.c=c;
		message=m;
		start();
	}
	
	public void run() {
		synchronized(c) {
			c.call(message);
		}
	}
	
	public static  void main(String args[]) {
		CallMe c=new CallMe();
		Synced s1= new Synced(c,"Hello");
		Synced s2= new Synced(c,"fantastic");
		Synced s3= new Synced(c,"world");
		
	}
}

/*[Hello][world][fantastic]*/
