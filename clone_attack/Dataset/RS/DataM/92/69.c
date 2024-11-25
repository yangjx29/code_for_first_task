int bonus [1002], index = (145 - 145);

int main () {
    int PoQhnKm5O, flag = (868 - 867), a [2] [1002];
    void  H8xegV (int x [(554 - 552)] [1002], int lU3gAiZ0KQN);
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
    for (; !((93 - 92) != flag);) {
        scanf ("%d", &PoQhnKm5O);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (PoQhnKm5O != (793 - 793)) {
            index++;
            H8xegV (a, PoQhnKm5O);
        }
        else
            flag = 0;
    }
    for (int i = 0;
    index > i; i = i + 1)
        printf ("%d\n", bonus[i]);
}

void  H8xegV (int x [2] [1002], int lU3gAiZ0KQN) {
    int i, bIyjwVz831, k, IbJlExyhXk, lbcZu4MV7WJ, flag, b [1002] = {0}, max, FPz6Mp = 0;
    for (i = 0; i < 2; i = i + 1)
        for (bIyjwVz831 = 0; lU3gAiZ0KQN > bIyjwVz831; bIyjwVz831 = bIyjwVz831 + 1)
            scanf ("%d", &x[i][bIyjwVz831]);
    for (i = 0; lU3gAiZ0KQN - (181 - 180) > i; i = i + 1)
        for (bIyjwVz831 = 1; lU3gAiZ0KQN > i + bIyjwVz831; bIyjwVz831 = bIyjwVz831 + 1)
            if (x[0][i + bIyjwVz831] > x[0][i]) {
                k = x[0][i];
                x[0][i] = x[0][i + bIyjwVz831];
                x[0][i + bIyjwVz831] = k;
            }
    for (i = 0; lU3gAiZ0KQN - 1 > i; i = i + 1)
        for (bIyjwVz831 = 1; i + bIyjwVz831 < lU3gAiZ0KQN; bIyjwVz831 = bIyjwVz831 + 1)
            if (x[1][i + bIyjwVz831] > x[1][i]) {
                k = x[1][i];
                x[1][i] = x[1][i + bIyjwVz831];
                x[1][i + bIyjwVz831] = k;
            }
    flag = 1;
    for (i = 0; i < lU3gAiZ0KQN && !(1 != flag); i = i + 1) {
        if (x[1][i] < x[0][0] || !(x[1][i] != x[0][0])) {
            k = i;
            flag = 0;
        };
    }
    if (!(1 != flag))
        max = lU3gAiZ0KQN * (-200);
    else {
        while (k <= lU3gAiZ0KQN - 1) {
            IbJlExyhXk = 0;
            lbcZu4MV7WJ = 0;
            for (i = 0, bIyjwVz831 = k; i < lU3gAiZ0KQN && bIyjwVz831 < lU3gAiZ0KQN; i = i + 1, bIyjwVz831 = bIyjwVz831 + 1) {
                if (x[0][i] > x[1][bIyjwVz831])
                    IbJlExyhXk = IbJlExyhXk +1;
                else {
                    if (x[0][i] == x[1][bIyjwVz831])
                        lbcZu4MV7WJ = lbcZu4MV7WJ + 1;
                };
            }
            k = k + 1;
            b[FPz6Mp++] = IbJlExyhXk *200 - (lU3gAiZ0KQN - lbcZu4MV7WJ - IbJlExyhXk) * 200;
        }
        max = b[0];
        for (i = 0; i < FPz6Mp; i = i + 1)
            if (max < b[i])
                max = b[i];
    }
    bonus[index] = max;
}

