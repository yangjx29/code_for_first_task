int main () {
    int A [1013];
    int B [1013];
    char eRsOwtSN10qE [1013];
    int K1;
    int K2;
    int N;
    scanf ("%d\n", &N);
    for (int I = (277 - 276);
    I <= N; I++) {
        gets (eRsOwtSN10qE);
        gets (eRsOwtSN10qE);
        K1 = strlen (eRsOwtSN10qE);
        {
            int J = (976 - 976);
            while (J < K1) {
                A[K1 -J] = eRsOwtSN10qE[J] - '0';
                J = J +1;
            };
        }
        if (I > 1)
            scanf ("\n");
        K2 = strlen (eRsOwtSN10qE);
        for (int J = 0;
        J < K2; J = J +1)
            B[K2 -J] = eRsOwtSN10qE[J] - '0';
        for (int J = 1;
        J <= K2; J = J +1)
            A[J] -= B[J];
        for (int J = 1;
        J <= K1; J = J +1)
            if (A[J] < 0) {
                A[J] = A[J] + 10;
                A[J +1]--;
            }
        {
            int J = K1;
            while (J >= 1) {
                cout << A[J];
                J = J -1;
            };
        }
        cout << endl;
    };
}

