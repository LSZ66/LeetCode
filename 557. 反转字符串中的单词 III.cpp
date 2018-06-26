class Solution {
    public String reverseWords(String s) {
        StringBuilder sb = new StringBuilder();
        String[] word = s.split(" ");
        for (int i = 0; i < word.length; i++) {
            sb.append(reverse(word[i]));
            if (i != word.length - 1)
                sb.append(' ');
        }
        return sb.toString();
    }

    private String reverse(String s) {
        char[] word = s.toCharArray();
        int len = word.length;
        for (int i = 0; i < len / 2; i++) {
            char t = word[i];
            word[i] = word[len - i - 1];
            word[len - i - 1] = t;
        }
        return new String(word);
    }
}