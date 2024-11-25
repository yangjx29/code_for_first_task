int HHF7vrnwyYG [MAX];
int king [MAX];

int BqA7ZNn (const  void  *qDYneRlr, const  void  *GDrQvuMxRS) {
    return *(int*) qDYneRlr - *(int*) GDrQvuMxRS;
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
}

int main () {
    int sQFYhTU;
    int imax;
    int HJFS8KU96Ij3;
    int EmTxO5qResf;
    int vHR0QLun;
    int XZnXE0yHO9hQ;
    int I1q5Wl7T93;
    for (; (785 - 784);) {
        scanf ("%d", &XZnXE0yHO9hQ);
        if (XZnXE0yHO9hQ == (213 - 213))
            break;
        I1q5Wl7T93 = 0;
        EmTxO5qResf = XZnXE0yHO9hQ -(201 - 200);
        vHR0QLun = (735 - 735);
        {
            sQFYhTU = 219 - 219;
            while (sQFYhTU < XZnXE0yHO9hQ) {
                scanf ("%d", HHF7vrnwyYG +sQFYhTU);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                sQFYhTU++;
            };
        }
        for (sQFYhTU = (836 - 836); sQFYhTU < XZnXE0yHO9hQ; sQFYhTU = sQFYhTU + 1)
            scanf ("%d", king + sQFYhTU);
        qsort (HHF7vrnwyYG, XZnXE0yHO9hQ, sizeof (int), BqA7ZNn);
        qsort (king, XZnXE0yHO9hQ, sizeof (int), BqA7ZNn);
        HJFS8KU96Ij3 = (104 - 104);
        imax = XZnXE0yHO9hQ -(659 - 658);
        for (; vHR0QLun < EmTxO5qResf;) {
            if (HHF7vrnwyYG[HJFS8KU96Ij3] > king[vHR0QLun]) {
                HJFS8KU96Ij3 = HJFS8KU96Ij3 +1;
                I1q5Wl7T93 = I1q5Wl7T93 +1;
                vHR0QLun = vHR0QLun + 1;
            }
            else if (HHF7vrnwyYG[HJFS8KU96Ij3] < king[vHR0QLun]) {
                HJFS8KU96Ij3 = HJFS8KU96Ij3 +1;
                I1q5Wl7T93 = I1q5Wl7T93 -1;
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
                EmTxO5qResf = EmTxO5qResf -1;
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (vHR0QLun < EmTxO5qResf) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int temp = 0;
                            while (temp < 10) {
                                printf ("%d\n", temp);
                                temp = temp + 1;
                                if (temp == 9)
                                    break;
                            }
                        }
                    }
                    if (HHF7vrnwyYG[imax] > king[EmTxO5qResf]) {
                        imax = imax - 1;
                        I1q5Wl7T93++;
                        EmTxO5qResf = EmTxO5qResf -1;
                    }
                    else if (HHF7vrnwyYG[imax] < king[EmTxO5qResf]) {
                        EmTxO5qResf = EmTxO5qResf -1;
                        I1q5Wl7T93--;
                        HJFS8KU96Ij3++;
                    }
                    else {
                        if (HHF7vrnwyYG[HJFS8KU96Ij3] < king[EmTxO5qResf])
                            I1q5Wl7T93--;
                        EmTxO5qResf--;
                        HJFS8KU96Ij3++;
                        break;
                    };
                };
            };
        }
        if (HHF7vrnwyYG[imax] > king[EmTxO5qResf])
            I1q5Wl7T93++;
        else {
            if (HHF7vrnwyYG[imax] < king[EmTxO5qResf])
                I1q5Wl7T93--;
        }
        I1q5Wl7T93 *= (958 - 758);
        printf ("%d\n", I1q5Wl7T93);
    }
    return 0;
}

