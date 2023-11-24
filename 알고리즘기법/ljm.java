import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.io.BufferedWriter;
import java.io.OutputStreamWriter;

public class ljm{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int[] alphabet = new int[26];
        int max = -1;
        String word = br.readLine();
        int maxIndex = 0;

        // word의 알파벳들을 alphabet 배열에 저장
        for(int i = 0; i < word.length(); i++){
            if(word.charAt(i)>='a') {
                alphabet[word.charAt(i)-'a']++;
            } else if(word.charAt(i)<'a'){
                alphabet[word.charAt(i)-'A']++;
            }
        }

        for(int i = 0; i < alphabet.length; i++){
            if(alphabet[i] > max) {
                max = alphabet[i];
                maxIndex = i;
            }
        }

        for(int i = 0; i < alphabet.length; i++){
            if(max == alphabet[i] && i != maxIndex){
                bw.write("?");
                break;
            }
            else if(i==alphabet.length-1)
                bw.write(Character.toUpperCase(maxIndex+'A'));
        }

        bw.flush();
    }
}