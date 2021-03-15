package chato;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
        
public class KeyBoardEventDemo extends JPanel implements KeyListener{
    
   String message = " "; 
   KeyBoardEventDemo()
   {   //register the source and the listener
	   addKeyListener(this);
        

       setFocusable(true);
   }
   public void paintComponent(Graphics g){
        super.paintComponent(g);
        Font myfont = new Font("SansSerif", Font.BOLD,40);
        g.setFont(myfont);
        //Complete this section
        g.drawString(message, 0, 100);


   }
    public void keyTyped(KeyEvent ke) {  
         //Complete this section 
    	message = message+ke.getKeyChar();
    	repaint();
    }

 
    public void keyPressed(KeyEvent ke) { }
    
    public void keyReleased(KeyEvent ke) { }
    
    public static void main(String [] args){
        JFrame frame = new JFrame("Keyboard Demo");
        frame.add(new KeyBoardEventDemo());
        frame.setSize(1000,500);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }
    
}