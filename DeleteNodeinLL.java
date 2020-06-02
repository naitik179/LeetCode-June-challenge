/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */

// deleting the node in LL given only the reference to the particular node and the node to be deleted cannot tbe the last node
class Solution {
    public void deleteNode(ListNode node) {
        
        node.val = node.next.val;
        node.next = node.next.next;
        
    }
}