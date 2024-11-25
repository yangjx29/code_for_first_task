int main () {
    int A [113] [113];
    int B [113] [113];
    int C [113] [113];
    int T;
    int N;
    int M;
    int NN;
    int MM;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> N >> M;
    for (int I = 1;
    N >= I; I++)
        for (int J = 1;
        J <= M; J = J +1)
            cin >> A[I][J];
    cin >> NN >> MM;
    for (int I = 1;
    I <= NN; I++) {
        int J = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (J <= MM) {
            cin >> B[I][J];
            J++;
        };
    }
    for (int I = 1;
    I <= N; I++) {
        int J = 1;
        while (J <= MM) {
            {
                int K = 1;
                while (K <= M) {
                    C[I][J] = C[I][J] + A[I][K] * B[K][J];
                    K++;
                };
            }
            J++;
        };
    }
    for (int I = 1;
    I <= N; I++) {
        for (int J = 1;
        J < MM; J++)
            printf ("%d ", C[I][J]);
        cout << C[I][MM] << endl;
    }
    return 0;
}

