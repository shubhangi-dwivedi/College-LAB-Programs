package collegeProg;

public class CurrentThread2 {
	public static void main(String args[]) {
		
		ChildThread t1=new ChildThread("Instance 1");
		ChildThread t2=new ChildThread("Instance 2");
		ChildThread t3=new ChildThread("Instance 3");
		
		for(int i=5;i>0;i--) {
			System.out.println(Thread.currentThread().getName()+"=\t"+i);
			try {
				Thread.sleep(1000);
			}catch(InterruptedException ex) {
				System.out.println("Main thread interrupted");
			}
		}
		System.out.println("Main thread terminated");
	}
}

/*main=	5
Instance 3:	10
Instance 2:	10
Instance 1:	10
Instance 3:	11
Instance 2:	11
Instance 1:	11
main=	4
Instance 3:	12
Instance 2:	12
Instance 1:	12
Instance 3:	13
Instance 2:	13
Instance 1:	13
main=	3
Instance 3:	14
Instance 2:	14
Instance 1:	14
Instance 3 terminated
Instance 2 terminated
Instance 1 terminated
main=	2
main=	1
Main thread terminated*/


/*Instance 2:	10
main=	5
Instance 1:	10
Instance 3:	10
Instance 2:	11
Instance 1:	11
Instance 3:	11
Instance 2:	12
main=	4
Instance 1:	12
Instance 3:	12
Instance 2:	13
Instance 1:	13
Instance 3:	13
main=	3
Instance 2:	14
Instance 1:	14
Instance 3:	14
Instance 2 terminated
Instance 3 terminated
Instance 1 terminated
main=	2
main=	1
Main thread terminated*/