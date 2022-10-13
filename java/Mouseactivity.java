import java.awt.*;  
import java.awt.event.*;  
public class Mouseactivity extends Frame implements MouseMotionListener{  
    Mouseactivity(){  
        addMouseMotionListener(this);  
          
        setSize(300,300);  
        setLayout(null);  
        setVisible(true);  
    }  
public void mouseDragged(MouseEvent e) {  
    Graphics g=getGraphics();  
    g.setColor(Color.BLUE);  
    g.fillOval(e.getX(),e.getY(),20,20);  
}  
public void mouseMoved(MouseEvent e) {} 
  
public static void main(String[] args) {  
    new Mouseactivity();  
}  
}  
