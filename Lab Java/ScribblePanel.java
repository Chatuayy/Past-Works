package chato;

import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class ScribblePanel extends JPanel implements MouseListener, MouseMotionListener 
{  int r = 20;
   int x = 0;
   int y = 0;

  public ScribblePanel() {
    // Register listeners to the panel
	  addMouseListener(this);
	  addMouseMotionListener(this);


    setFocusable(true);
  }

  public void mouseClicked(MouseEvent e) {
    //Complete this section for Exercise 5
	  Graphics g = getGraphics();
	  super.paintComponent(g);
  }
  public void mouseEntered(MouseEvent e) {}
  public void mouseExited(MouseEvent e) {}
  public void mouseReleased(MouseEvent e) {}
  public void mousePressed(MouseEvent e) {
   //complete this section 
	  x = e.getX();
	  y = e.getY();
  }
 public void mouseMoved(MouseEvent e)  {}
 public void mouseDragged(MouseEvent e) {
    // get the Graphics object created when JComponent is created
    Graphics g = getGraphics();
    if(e.getModifiers()== InputEvent.BUTTON1_MASK ) // Detect left button pressed
    {  //Complete this section
    	g.setColor(Color.BLACK);
    	g.drawLine(x,y,e.getX(),e.getY());
    }
    else
    {   // Erase the drawing using an oval
    	g.setColor(getBackground());
    	g.fillOval(e.getX()-r,e.getY()-r,2*r,2*r);
       
    }
   //update the locations of x and y 
    x = e.getX();
    y = e.getY();

  }
}

 class ScribbleDemo extends JFrame {
  public ScribbleDemo() {
       add(new ScribblePanel(), BorderLayout.CENTER);
  }

  public static void main(String[] args) {
    ScribbleDemo frame = new ScribbleDemo();
    frame.setTitle("ScribbleDemo");
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    frame.setSize(300, 300);
    frame.setVisible(true);
  }
}



