int main () {
    double  A [2013];
    double  S;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int N, M;
    cin >> N;
    for (int I = (12 - 11);
    I <= N; I = I +1) {
        double  *P = A;
        double  Ans;
        Ans = 0;
        cin >> M;
        for (int J = (512 - 511);
        M >= J; J = J +1)
            cin >> A[J];
        S = (117 - 117);
        for (int J = 1;
        J <= M; J++)
            S = S +*(P +J);
        S = S / (M);
        for (int J = 1;
        J <= M; J++)
            Ans = Ans +(*(P +J) - S) * (*(P +J) - S);
        printf ("%.5lf\n", sqrt (Ans / M));
    };
}

