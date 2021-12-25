/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
Write an AWT code to accept two values. One for the name and other for no. of times. 
When user click on display button then name should print given no. of times.
*/
package salary;

import java.awt.Button;
import java.awt.Frame;
import java.awt.Label;
import java.awt.TextArea;
import java.awt.TextField;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class pratical_exam implements ActionListener{
    Button S_b1;
    TextField S_t1,S_t2;
    Label S_lb1;
    TextArea S_lb3;
    Frame S_f;
    
    pratical_exam() {
        S_f = new Frame("Print name no. of times");

        S_lb1 = new Label("Enter a name :");
        S_lb1.setBounds(5, 50, 150, 30);
        S_f.add(S_lb1);

        S_t1 = new TextField();
        S_t1.setBounds(200, 50, 150, 30);
        S_f.add(S_t1);
        
        S_lb1 = new Label("Enter a no :");
        S_lb1.setBounds(5, 100, 150, 30);
        S_f.add(S_lb1);

        S_t2 = new TextField();
        S_t2.setBounds(200, 100, 150, 30);
        S_f.add(S_t2);

        S_lb3 = new TextArea(" ");
        S_lb3.setBounds(200, 200, 200, 100);
        S_f.add(S_lb3);

        S_b1 = new Button("Display ");
        S_b1.setBounds(90, 200, 100, 30);
        S_f.add(S_b1);

        S_b1.addActionListener(this);

        S_f.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent we) {
                System.exit(0);
            }
        });

        S_f.setLayout(null);
        S_f.setSize(500, 500);
        S_f.setVisible(true);

    }
    @Override
    public void actionPerformed(ActionEvent e) {

        String S_n= S_t1.getText();
        int S_t=Integer.parseInt(S_t2.getText());
        
        S_lb3.setText("");
            
        String S_op = "";
        for(int S_i = 1; S_i<=S_t; S_i++) {
            S_op += S_i+ " "+S_n+'\n';
        }
        S_lb3.setText(S_op);
            

    }
     public static void main(String args[]) {
        pratical_exam t = new pratical_exam();
     }
}

