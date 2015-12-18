import java.applet.Applet;
import java.awt.Graphics;

class helloWorld extends Applet {
    public void paint(Graphics g) {
        g.drawString("Hello world!", 50, 25);
    }
}
/*<applet code="helloworld",width="500",height="500">
</applet>
*/