
public class ShortcutWay {
   int INF = Integer.MAX_VALUE / 2; // "Beskonechnost'"
   private  int[][] graph; 

private int vNum; // kolichestvo vershin
   int[][] dist = new int [1000][1000]; // dist[i][j] = minimal'noe_rasstojanie(i, j)
   // len peredelovat cherez:  private List<Integer> x = new ArrayList();
   StringBuilder builder = new StringBuilder("Short way:");
     public int[][] getGraph() {
	return graph;
}
public void setGraph(int[][] graph) {
	this.graph = graph;
}
public int getvNum() {
	return vNum;
}
public void setvNum(int vNum) {
	this.vNum = vNum;
}
	/* Algoritm Flojda-Uorshella za O(V^3) */
StringBuilder floydWarshall() {       
	for (int i = 0; i < graph.length; i++) { System.arraycopy(graph[i], 0, dist[i], 0, vNum);}
        for (int k = 0; k < graph.length; k++)
             for (int i = 0; i < graph.length; i++)
               for (int j = 0; j < graph.length; j++)
                   {
            	   dist[i][j] = Math.min(dist[i][j], dist[i][k] + dist[k][j]);
            	   builder.append("["+i+"]"+"["+j+"]"+" ");
            	   builder.append( dist[i][j]);
            	   builder.append("\n");
                   }
        return builder;
        
   }


	}

