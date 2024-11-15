//349 -  Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

// Example 1:

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]
// Example 2:

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
// Explanation: [4,9] is also accepted.

import java.util.ArrayList;
import java.util.Arrays;

class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        //int MAX_LENGTH = Math.max(nums1.length, nums2.length);
        //int[] result = new int[MAX_LENGTH];
        ArrayList<Integer> result = new ArrayList<>();
        int contador = 0;
 
        for(int i= 0; i < nums1.length; i++){
            for(int j = 0; j< nums2.length; j++){
                if(nums1[i] == nums2[j] && !result.contains(nums1[i])){
                    
                    result.add(nums1[i]);
                    contador++;
                    System.out.println(nums1[i] + " " + contador);
                }
            }
        }
        
        //System.out.println(ArrayList.toString(result));
        int[] array = new int[result.size()];
        for (int i = 0; i < result.size(); i++) {
            array[i] = result.get(i).intValue(); // Convertir Integer a int
        }
        return array;
    }
}