import java.applet.*;
import java.awt.*;

public class AppletHello extends Applet{
	public void paint(Graphics g){
		g.drawString("Hello World\n",20,20);
	}
}
/*
<html>
<applet code="AppletHello.java" width="1000" height="30">
</applet>
</html>
*/
