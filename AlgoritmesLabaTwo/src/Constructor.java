import java.util.Scanner;
public class Constructor {
		public static void main(String[] args) {
			Scanner in = new Scanner(System.in);
			
			System.out.println("Size of matrix?");
			int Number=in.nextInt() ;
			int[][] graph = new int[Number][Number];
			for (int i = 0; i < graph.length; i++) {
		        for (int j = 0; j < graph[i].length; j++) {
		        	System.out.print("["+i+"]"+"["+j+"]=");
		        	graph[i][j] =in.nextInt() ;
		        }
		    }
			ShortcutWay graph1 = new ShortcutWay();
			graph1.setGraph(graph);
			graph1.setvNum(Number);
			System.out.println(graph1.floydWarshall());
}}
