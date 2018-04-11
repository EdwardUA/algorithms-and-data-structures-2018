//Mark Allen Weiss - krosava
//c++ https://www.ibm.com/developerworks/ru/library/l-data_structures_09/
public class Constructor {
	// Test program
    public static void main( String [ ] args )
    {//System.
        RedBlackTree<Integer> t = new RedBlackTree<Integer>( );
        t.insert(100);
        t.insert(300);
        t.printTree();
        System.out.println("Contains 300? " + t.contains(300));
        t.printTree();
        t.remove(100);
        t.printTree();
    }
}
