class Solution{
    public boolean containsDuplicate(int[] nums){
        // create a hashSet to store elements from the array
        HashSet<Integer> seenNumbers= new HashSet<>();

        // iterate through each element in the array
        for(int num:nums){
            // check if the element is already in the HashSet
            if(seenNumbers.contains(num)){
                return true; //Duplicate found
            }
            // add the element to the HashSet
            seenNumbers.add(num);
        }
        return false; // No duplicate found
    }
}