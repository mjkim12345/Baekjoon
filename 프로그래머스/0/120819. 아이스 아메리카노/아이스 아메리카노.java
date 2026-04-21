class Solution {
    public int[] solution(int money) {
        int[] answer = new int[2];
        int max = money / 5500;
        int rem = money % 5500;
        
        answer[0] = max;
        answer[1] = rem;
        
        return answer;
        
    }
}