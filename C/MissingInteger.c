int solution(int A[], int N) {
    int i = 0;
    int *ptr = (int *)malloc(1000000 * sizeof(int));
    for(i = 0; i < (N); i++){
        if(A[i] > 0)
            *(ptr + A[i]) = 0xdead;
    }
    for(i = 1; i < (1000001); i++){
        if(*(ptr + i) != 0xdead)
            return i;
    }
    return 0;
}
