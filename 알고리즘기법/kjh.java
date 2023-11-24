// 시작 시간 19:21

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.io.BufferedWriter;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;
import java.util.ArrayList;

public class Sample{

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine()," ");
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int Block = Integer.parseInt(st.nextToken());
        int[][] ground = new int[N][M];
        ArrayList<Integer> groundHeight = new ArrayList<>();

        int[] arr = {};
        for(int n = 0; n < N; n++){
            st = new StringTokenizer(br.readLine()," ");
            for(int m = 0; m < M; m++){
                ground[n][m] = Integer.parseInt(st.nextToken());
                groundHeight.add(ground[n][m]);
            }
        }
    }
}

// 종료 시간 20:15