int main () {
    int A;
    int B;
    int C;
    int D;
    int E;
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
    int a [6];
    {
        A = 1;
        while (5 >= A) {
            {
                B = 1;
                while (B <= 5) {
                    if (!(B != A))
                        continue;
                    {
                        C = 1;
                        while (5 >= C) {
                            if (!(C != A) || B == C)
                                continue;
                            {
                                D = 1;
                                while (5 >= D) {
                                    if (!(D != A) || B == D || !(D != C))
                                        continue;
                                    {
                                        E = 1;
                                        while (5 >= E) {
                                            if (A == E || B == E || C == E || D == E)
                                                continue;
                                            if (E == 2 || E == 3)
                                                continue;
                                            a[A] = (E == 1);
                                            a[B] = (B == 2);
                                            a[C] = (A == 5);
                                            a[D] = (C != 1);
                                            a[E] = (D == 1);
                                            if (a[1] == 1 && a[2] == 1 && a[3] == 0 && a[4] == 0 && a[5] == 0)
                                                cout << A << " " << B << " " << C << " " << D << " " << E << endl;
                                            E = E +1;
                                        };
                                    }
                                    D++;
                                };
                            }
                            C++;
                        };
                    }
                    B++;
                };
            }
            A = A +1;
        };
    }
    return 0;
}

