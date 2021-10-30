import java.util.Stack;
import java.util.Map;
import java.util.HashMap;

public class Main {
    public static int[] nextGreaterElement(int[] nums1, int[] nums2) {
        int[] result = new int[nums1.length];
        Stack<Integer> stack = new Stack<Integer>();
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();

        for(int i = 0; i < nums2.length; ++i) {
            while(!stack.empty() && nums2[i] > stack.peek()) {
                map.put(stack.pop(), nums2[i]);
            }
            stack.push(nums2[i]);
        }

        for(int i = 0; i < nums1.length; ++i) {
            if(map.containsKey(nums1[i])) {
                result[i] = map.get(nums1[i]);
            } else {
                result[i] = -1;
            }
        }

        return result;
    }
 
    public static void main(String[] args) {
        int[] v1 = {4,1,2};
        int[] v2 = {1,3,4,2};
        int[] v3 = nextGreaterElement(v1,v2);

        for(int e : v3) {
            System.out.print(e + " ");
        }
    }
}
