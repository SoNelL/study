import java.util.StringTokenizer;

class Solution {
    public int[] solution(String today, String[] terms, String[] privacies) {
        StringTokenizer st;
        int[] todayIntArr = new int[3];
        int[][] privaciesIntArr = new int[privacies.length()][3];
        int[] answer = {};
        String[][] privaciesStrArr = new String[privacies.length()][2];
        String[][] termsStrArr = new String[terms.length][2];

        // 입력받은 개인정보수집일자 1차원 문자열 배열을 공백으로 스플릿 하여 개인정보수집일자 2차원 문자열 배열에 저장
        for(int i = 0; i<privacies.length(); i){
            privaciesStrArr[i] = privacies[i].split(" ");
        }

        // 개인정보수집일자 2차원 문자열 배열의 0번 인덱스 값들을 정수로 변환하여 개인정보수집일자 2차원 정수 배열에 삽입
        for(int i = 0; i<privaciesIntArr.length; i++){
            st = new StringTokenizer(privaciesStrArr[i][0],".");
            for(int j = 0; j<privaciesIntArr[].length; j++){
                privaciesIntArr[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        for(int i = 0; i < termsStrArr.length; i++){
            termsStrArr[i] = terms[i].split(" ");
        }

        for(int i = 0; i < privaciesIntArr.length; i++){
            if(privaciesStrArr[i][1].equals(termsStrArr[i][0])){
                privaciesIntArr[i][1]+=Integer.parseInt(termsStrArr[i][1]);
                if(privaciesIntArr[i][1]>12){
                    privaciesIntArr[i][1] -= 12;
                    privaciesIntArr[i][0]++;
                }
            }
        }
        for(int i = 0; i < )

            return answer;
    }
}