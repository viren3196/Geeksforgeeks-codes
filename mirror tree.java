/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


// FUNCTION CODE
/* A Binary Tree node
class Node
{
    int data;
    Node left, right;
   Node(int item)    
   {
        data = item;
        left = right = null;
    }
} */
class GfG
{
    void mirror(Node node)
    {
        if(node==null)
            return;
	    Node temp = node.left;
	    node.left = node.right;
	    node.right = temp;
	    mirror(node.left);
	    mirror(node.right);
    }
}
