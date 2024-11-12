int main () {
    int A;
    int B;
    int C;
    int D;
    int E;
    int word [6];
    {
        A = 169 - 168;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (5 >= A) {
            for (B = 1; B <= 5; B++) {
                if (!(A != B))
                    continue;
                {
                    C = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (5 >= C) {
                        if (C == A || !(B != C))
                            continue;
                        for (D = 1; 5 >= D; D = D +1) {
                            if (!(A != D) || D == B || D == C)
                                continue;
                            for (E = 1; E <= 5; E = E +1) {
                                if (E == A || E == B || E == C || E == D)
                                    continue;
                                word[A] = (E == 1);
                                word[B] = (B == 2);
                                word[C] = (A == 5);
                                word[D] = (C != 1);
                                word[E] = (D == 1);
                                if (word[1] && word[2] && !word[3] && !word[4] && !word[5] && E != 2 && E != 3)
                                    cout << A << " " << B << " " << C << " " << D << " " << E;
                            };
                        }
                        C = C +1;
                    };
                };
            }
            A++;
        };
    }
    return 0;
}

