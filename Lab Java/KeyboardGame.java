package chato;

import javax.swing.*;
import java.awt.*;
//import java.awt.Graphics;
import java.awt.event.*;
import java.util.Random;

//Ex2. make the class a subclass of the interface ActionListener
//Ex3. make the class a subclass of the interface KeyListener
public class KeyboardGame extends JPanel implements ActionListener, KeyListener  {


    Timer timer = new Timer(2000, this);
    int score = 0;
    char displayedChar = 'A';
    int counter = 0;
    char response = '?';
    int xloc=75;          //xlocation of the display
    int yloc = 75;        //ylocation of the firstline
    int linespace=75;
    Font myfont = new Font("Sanserif",Font.BOLD,45);

    KeyboardGame() { 
    	addKeyListener(this);
    	setFocusable(true);
    	timer.start();
      


    }

    protected void paintComponent(Graphics g) {
    	g.setFont(myfont);
        super.paintComponent(g);
        displayedChar = getRandomChar();
        g.drawString("Letter:"+displayedChar, 75, 75);
        g.drawString("You Typed:", 75, 150);
        g.setColor(Color.BLUE);
        g.drawString(" "+response, 350, 150);
        g.setColor(Color.BLACK);
        g.drawString("Your Score = "+score, 75, 225);

    }

    //Get a random characters from A to Z
    public char getRandomChar()
    {   Random random = new Random();  
        return (char) (65 + random.nextInt(26));
    }

    public static void main(String[] args) {
        JFrame frame = new JFrame();
        frame.setTitle("KeyboardGame");
        frame.add(new KeyboardGame());
        frame.setSize(500, 300);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }

	@Override
	public void keyPressed(KeyEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void keyReleased(KeyEvent e) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void keyTyped(KeyEvent e) {
		// TODO Auto-generated method stub
		response = e.getKeyChar();
		if (response == displayedChar){
			score++;
			repaint();
		}
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		repaint();
		
	}
    
     //Ex2: add handlers for ActionListener

    //Ex3: add handlers for KeyListener
     


}
