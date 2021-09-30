package collegeProg;

public class CurrentThread {
	public static void main(String args[]) {
		Thread t=Thread.currentThread();
		System.out.println("Before Change");
		System.out.println(t);
		t.setName("My Thread");
		t.setPriority(7);
		System.out.println("After Change");
		System.out.println(t);
		for(int i=5;i>0;i--) {
			System.out.println(t.getName()+"=\t"+i);
			try {
				Thread.sleep(1000);
			}catch(InterruptedException ex) {
				System.out.println("Main thread interrupted");
			}
		}
	}
}

/*Before Change
Thread[main,5,main]
After Change
Thread[My Thread,7,main]
My Thread=	5
My Thread=	4
My Thread=	3
My Thread=	2
My Thread=	1
*/