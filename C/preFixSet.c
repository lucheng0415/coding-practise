int solution(int A[], int N) {
    int i, j = 0;
    int preFix = 0;
    for(i = 0; i < N; i++)
        for(j = 0; j < N; j++){
            if(A[i] == A[j]) {
                if(j > preFix)
                    preFix = j;
                break;
            }
                

        }
    return preFix;
}
