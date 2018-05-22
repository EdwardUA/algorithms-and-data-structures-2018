import javax.swing.*;
import java.awt.*;

public class Fract extends JPanel {

    public void paintComponent(Graphics g){
        Graphics2D g2d = (Graphics2D) g;
        g.setColor(Color.RED);
        g2d.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);   //�����������
        DrCirc(400, 300, 200, g);           //����� � ������ ��������
        
    }

    public void DrCirc(double x, double y, int size, Graphics g) {
        int N =3, c = 2, rad = 0, den = 0;
        //����� ��������� (N+1) ����������
        //����� ���������� ����� ����� ������ size/c
        if (size > 0) {
            rad = Math.round(size/c);       //��������� ������
            den = Math.round(size*(c-1)+3);
            g.setColor(Color.BLUE);
            DrCirc(x, y, rad, g);           //����������� ���������� 
            for(int i = 0; i < N; i++){     //��� ��������� ����������
            	DrCirc(x - Math.round(den*Math.sin(2*Math.PI/N*i)), y + Math.round(den*Math.cos(2*Math.PI/N*i)), rad, g);
            }
            g.drawOval((int)x-size, (int)y-size, 2*size, 2*size);
            g.setColor(Color.RED);
            
        }
    }}
