package chato;



import java.awt.Color;
import java.awt.Graphics;
import javax.swing.JPanel;
import javax.swing.*;

public class Efan extends JPanel{
   public void paintComponent(Graphics g){

       //Exercise 1: Fan's frame
	   g.setColor(Color.GRAY);
	   g.fillOval(295, 95, 210, 210);
	   g.setColor(Color.WHITE);
	   g.fillOval(300, 100, 200, 200);

       
        
       //Exercise 2: Blades
	   g.setColor(Color.ORANGE);
	   g.fillArc(310, 110, 180, 180, 0, 36);
	   g.fillArc(310, 110, 180, 180, 72, 36);
	   g.fillArc(310, 110, 180, 180, 144, 36);
	   g.fillArc(310, 110, 180, 180, 216, 36);
	   g.fillArc(310, 110, 180, 180, 288, 36);
	   




       
       //Exercise 3: Fan's neck
	   g.setColor(Color.GRAY);
	   g.fillRect(380, 300, 45, 150);





       //Exercise 4:Fan's control panel
	   g.setColor(Color.BLUE);
	   int [] x = {300, 350, 450,500};
	   int [] y = {550, 450, 450,550};
	   g.fillPolygon(x, y, 4);
	   

       
      
       
       //Exercise 5:   Fan's speed buttons
	   g.setColor(Color.RED);
	   g.fillRoundRect(360, 500, 17, 20, 20, 20);
	   g.fillRoundRect(380, 500, 17, 20, 20, 20);
	   g.fillRoundRect(400, 500, 17, 20, 20, 20);
	   g.fillRoundRect(420, 500, 17, 20, 20, 20);






       //Exercise 5: Fan's speed text
	   g.setColor(Color.WHITE);
	   g.drawString("0", 366, 514);
	   g.drawString("1", 386, 514);
	   g.drawString("2", 406, 514);
	   g.drawString("3", 426, 514);


        
        
        
   }
 
   public static void main(String [] args)
   {   JFrame frame = new JFrame("My Drawing Fan");
       frame.add(new Efan());
       frame.setSize(800, 800);
       frame.setVisible(true);
       frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
   }
}
