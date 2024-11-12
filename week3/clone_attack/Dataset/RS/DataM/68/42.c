int ahz4gmV9i80u (int tCmQHKLV) {
    int vzuOq0phoK;
    {
        vzuOq0phoK = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (vzuOq0phoK <= sqrt (tCmQHKLV)) {
            if (!(0 != tCmQHKLV % vzuOq0phoK)) {
                return (0);
                break;
            }
            vzuOq0phoK = vzuOq0phoK + 1;
        };
    }
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
    if (vzuOq0phoK > sqrt (tCmQHKLV))
        return (1);
}

void  main () {
    int qUqutNO;
    int e;
    int ZbwWTQ5zYalu;
    int k;
    int UH1xUctARi3;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int Jpto8c;
    qUqutNO = 6;
    e = 2;
    scanf ("%d", &ZbwWTQ5zYalu);
    for (qUqutNO = 6; qUqutNO <= ZbwWTQ5zYalu; qUqutNO = qUqutNO + 2) {
        for (e = 3; e < qUqutNO; e = e + 2) {
            k = qUqutNO - e;
            UH1xUctARi3 = ahz4gmV9i80u (k);
            Jpto8c = ahz4gmV9i80u (e);
            if (UH1xUctARi3 == 1 && Jpto8c == 1)
                break;
            else
                continue;
        }
        printf ("%d=%d+%d\n", qUqutNO, e, k);
    };
}

