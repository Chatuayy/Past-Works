package chato;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.text.DecimalFormat;
public class BMICalculator extends JFrame  {
	
	JPanel p1 = new JPanel();
	JPanel p2 = new JPanel();
	JPanel p3 = new JPanel();
	
	JTextField heightTF = new JTextField();
	JTextField weightTF = new JTextField();
	JLabel resultLB = new JLabel("BMI =  ");
    JLabel heightLB = new JLabel("Your height (cm) :");
    JLabel weightLB =new JLabel("Your weight (kg) :");
	JButton computeBT = new JButton("Compute BMI");
	double bmi = 0.00;
    
	public BMICalculator(String title){
		super(title);
           //set layout of the frame
		JFrame frame = new JFrame();
		frame.setLayout(new BorderLayout());

           //set layout of p1
		p1.setLayout(new GridLayout());
		

           //set layout of p2
		p2.setLayout(new GridLayout(2,2));

		
		p3.setLayout(new GridLayout(2,1));

          //add components to p1
		p1.add(new JLabel("Enter your information"));
	 
		
		//add components to p2
		p2.add(heightLB);
		p2.add(heightTF);
		p2.add(weightLB);
		p2.add(weightTF);
 
		 

		//add components to p3
		p3.add(computeBT);
		p3.add(resultLB);


           //add components to the frame
		add(p1,BorderLayout.NORTH);
		add(p2,BorderLayout.CENTER);
		add(p3,BorderLayout.SOUTH);
 
		

//Ex2. register the computeBT with the an object of type ActionInterpretor()		
		computeBT.addActionListener(new ActionInterpretor());
 
		
		setSize(400, 200);
		setVisible(true);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	 


        public static void main(String [] args){
            new BMICalculator("BMI Calculator");
        }

        double findBMI(double h, double w)
        {  return w/(h*h); 
        }


        class ActionInterpretor implements ActionListener
        {  public void actionPerformed(ActionEvent e) { 
        	double w = Double.parseDouble(weightTF.getText());
        	double h = Double.parseDouble(heightTF.getText())/100;
        	bmi = findBMI(h,w);

           //Complete this section for Problem 2
        	if (e.getSource() == computeBT);
        	{
        		resultLB.setText("BMI =" +bmi);
        	}

               
	    }
        }
}