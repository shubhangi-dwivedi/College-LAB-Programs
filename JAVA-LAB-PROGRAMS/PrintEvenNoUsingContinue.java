package collegeProg;

import java.util.Scanner;

public class PrintEvenNoUsingContinue {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter lower limit = ");
		int n1=sc.nextInt();
		System.out.print("Enter upper limit = ");
		int n2=sc.nextInt();
		
		while(n1<=n2) {
			if((n1%2)!=0) {
				n1++;
				continue;
			}
			System.out.println(n1);
			n1++;
		}
	}
}

/*Enter lower limit = 100
Enter upper limit = 200
100
102
104
106
108
110
112
114
116
118
120
122
124
126
128
130
132
134
136
138
140
142
144
146
148
150
152
154
156
158
160
162
164
166
168
170
172
174
176
178
180
182
184
186
188
190
192
194
196
198
200
*/