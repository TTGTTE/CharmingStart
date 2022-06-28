package TestJava;

import javax.swing.*;
import java.awt. *;

class MathComp extends JComponent
{
    public void paintComponent(Graphics g)
    {
        g.drawString("Hello!", 125, 95);
    }
}

public class math 
{
    public static void main( String args[] )
    {
        JFrame frame = new JFrame("Math");
        frame.add( new MathComp() );
        frame.setSize(300, 300);
        frame.setVisible(true);
    }
}
