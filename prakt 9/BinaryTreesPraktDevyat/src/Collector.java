//import java.awt.List; //or will be list error
import java.util.List;//https://stackoverflow.com/questions/19330731/tree-implementation-in-java-root-parents-and-children?utm_medium=organic&utm_source=google_rich_qa&utm_campaign=google_rich_qa
import java.util.ArrayList;

public class Collector {
	public static void main(String [] args)
	{
		MyTreeNode<String> root = new MyTreeNode<>("Root");

		MyTreeNode<String> child1 = new MyTreeNode<>("Child1");
		child1.addChild("Grandchild1");
		child1.addChild("Grandchild2");

		MyTreeNode<String> child2 = new MyTreeNode<>("Child2");
		child2.addChild("Grandchild3");

		root.addChild(child1);
		root.addChild(child2);
		root.addChild("Child3");

		/*root.addChildren(Arrays.asList(
		        new MyTreeNode<>("Child4"),
		        new MyTreeNode<>("Child5"),
		        new MyTreeNode<>("Child6")
		));*/

		for(MyTreeNode node : root.getChildren()) {
		    System.out.println(node.getData());
		}
		
	}
}
//import java.util.List;

