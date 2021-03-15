package chato;

import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

//Edit the class definition according to Ex2a, Ex3a, and Ex.5a
public class MoveMessagePanel extends JPanel implements ActionListener, ItemListener, MouseMotionListener {
    //properties
   JPanel ColorPanel = new JPanel();
   JPanel MessagePanel = new JPanel();
   JPanel directionPanel = new JPanel(); 
   JLabel colorLB = new JLabel("Background Color");
   JRadioButton whiteBT = new JRadioButton("white");
   JRadioButton blackBT = new JRadioButton("black");
   JLabel messageLB = new JLabel("Message to be displayed");
   JTextField blankTF = new JTextField(40);
   JButton leftBT = new JButton("Left");
   JButton rightBT = new JButton("Right");
   Color textcolor;
   JButton upBT = new JButton("Up");
   JButton downBT = new JButton("Down");
   JRadioButton mouseRB= new JRadioButton("Use Mouse"); 
   String message = " ";
   int x = getX(); //location of x in the display
   int y = 100;        //location of y in the display
   
   public MoveMessagePanel(String s)
   {  
    // Execise1
       //create a frame with title
	   JFrame frame = new JFrame(s);
      

     //set Layout of the frame
      setLayout(new BorderLayout());
      frame.add(this,BorderLayout.CENTER);
     //add Panels to the frame to appropriate locations
      frame.add(MessagePanel,BorderLayout.NORTH);
      frame.add(ColorPanel,BorderLayout.WEST);
      frame.add(directionPanel,BorderLayout.SOUTH);
      frame.add(mouseRB, BorderLayout.EAST);

     //set Layout to the Color Panel and add components to it
      ColorPanel.setLayout(new GridLayout(3,1));
      ColorPanel.add(colorLB);
      ColorPanel.add(whiteBT);
      ColorPanel.add(blackBT);
    
     //set Layout to the MessagePanel and add Components to it
      setLayout(new FlowLayout());
      MessagePanel.add(messageLB);
      MessagePanel.add(blankTF);
      
      
     //set Layout to the DirectionPanel and add components to it
      setLayout(new FlowLayout());
      directionPanel.add(leftBT);
      directionPanel.add(rightBT);
      directionPanel.add(upBT);
      directionPanel.add(downBT);
      
      
     
     //Exercise 2b Register the textfield with itself which acts as the ActionListener using an appropriate method.  
      blankTF.addActionListener(this);

 
    //Exercise 3b Register the  black and white  ratio buttons with itself which acts as the ItemListener using an appropriate method.  
      whiteBT.addItemListener(this);
      blackBT.addItemListener(this);

    //Exercise 4a Register the direction buttons with itself which acts as the ActionListener using an appropriate method.
     leftBT.addActionListener(this);
     rightBT.addActionListener(this);
     upBT.addActionListener(this);
     downBT.addActionListener(this);
     
     
    //Exercise 5a Register the display panel (itself) with itself which acts as the MouseMotionListener using an appropriate method.  
    this.addMouseMotionListener(this);
     
     frame.setVisible(true);
     frame.setSize(800, 300);
     frame.setDefaultCloseOperation( JFrame.EXIT_ON_CLOSE );
   }

   public static void main(String [] args)
   {  new MoveMessagePanel("Event Demo");
   }

    protected void paintComponent(Graphics g)
  { 
    super.paintComponent(g); 		//clear the Panel
    Font myfont = new Font("SansSerif", Font.BOLD,40);
    g.setFont(myfont);			//setFont
    g.setColor(textcolor); 		//Set the color of the graphic
    g.drawString(message, x, y);  	//drawString of the input message at the x and y location
  }
   //Ex2c. and Ex4b. Override an abstract method of ActionListener 


	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		if (e.getSource() == blankTF){
			message = e.getActionCommand();
			repaint();
	}
		else if (e.getSource() == leftBT){
			x -= 10;
			repaint();
	}
		else if (e.getSource() == rightBT){
			x += 10;
			repaint();
		}
		else if (e.getSource() == upBT){
			y -= 10;
			repaint();
		}
		else if (e.getSource() == downBT){
			y += 10;
			repaint();
		}
	}
  
   //Ex3c. Override an abstract method of ItemListener 
	@Override
	public void itemStateChanged(ItemEvent e){
		if (e.getSource() == whiteBT){
			this.setBackground(Color.WHITE);
			textcolor = Color.BLACK;
			blackBT.setSelected(false);
		}else if (e.getSource()==blackBT){
			this.setBackground(Color.BLACK);
			textcolor = Color.WHITE;
			whiteBT.setSelected(false);
		}
	}
		



   //Ex5b. Override an abstract method of MouseMotionListener 
	public void mouseDragged(MouseEvent e) {
		if(mouseRB.isSelected()){
		x = e.getX();
		y = e.getY();
		repaint();
		}
	}
	


	public void mouseMoved(MouseEvent e) {
		// TODO Auto-generated method stub
	}
}