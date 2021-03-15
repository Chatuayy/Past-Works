package chato;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.Random;
public class CatchFlashingBall extends JPanel {
    int xcenter=100;
    int ycenter= 100;
    int radius= 10;
    int number=0;
    Catcher mouseListener = new Catcher();
    Timer timer = new Timer(1000, new TimerListener() );
    CatchFlashingBall()
    {   //Ex.5 complete this section
    	addMouseListener(mouseListener);
    	timer.start();

    }
    public void paintComponent(Graphics g)
    {   //Ex4.
    	super.paintComponent(g);
    	setBackground(Color.BLACK);
    	g.setColor(Color.YELLOW);
    	g.fillOval(xcenter-radius, ycenter-radius, 2*radius, 2*radius);
    }

    //inner classes:TimerListener and Catcher
    class TimerListener implements ActionListener
    { public void actionPerformed(ActionEvent e)
        {  Random rand = new Random();
           //Ex4. Update the new random location of the ball using int rand.nextInt(int max) and update the image
        xcenter = rand.nextInt(getWidth());
        ycenter = rand.nextInt(getHeight());
        repaint();
          
      }
    }

    class Catcher implements MouseListener
    {
      double calculateDistance(int x1, int y1, int x2, int y2){
         return Math.sqrt(Math.pow(x1-x2, 2)+Math.pow(y1-y2, 2));
      }

	@Override
	public void mouseClicked(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void mouseEntered(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void mouseExited(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void mousePressed(MouseEvent e) {
		// TODO Auto-generated method stub
		if (calculateDistance(xcenter,ycenter,e.getX(),e.getY())<radius){
			timer.stop();
		}
		
	}

	@Override
	public void mouseReleased(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}
      
     //Ex5:  override the methods for MouseListener in here

    }
    public static void main(String [] args){
     JFrame frame = new JFrame("Catching a Flashing Ball");
     frame.add(new CatchFlashingBall());
     frame.setSize(600,400);
     frame.setVisible(true);
     frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
 }
}
