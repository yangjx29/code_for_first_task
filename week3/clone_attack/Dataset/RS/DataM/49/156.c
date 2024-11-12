int print (char CxaSdsiyGq [], int i, int Uo2nCiP) {
    int t, I = i, gt6b3xXhnYI = Uo2nCiP;
    for (; CxaSdsiyGq[i] == CxaSdsiyGq[Uo2nCiP] && i <= Uo2nCiP;) {
        Uo2nCiP = Uo2nCiP -1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i++;
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
    if (i > Uo2nCiP) {
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
        {
            t = I;
            while (t <= gt6b3xXhnYI) {
                printf ("%c", CxaSdsiyGq[t]);
                t++;
            };
        };
    }
    return 0;
}

void  main () {
    int i, Uo2nCiP, TzJ7xgeh6;
    char CxaSdsiyGq [501];
    gets (CxaSdsiyGq);
    TzJ7xgeh6 = strlen (CxaSdsiyGq);
    {
        i = 1;
        while (i < TzJ7xgeh6) {
            {
                Uo2nCiP = i;
                while (Uo2nCiP < TzJ7xgeh6) {
                    print (CxaSdsiyGq, Uo2nCiP -i, Uo2nCiP);
                    Uo2nCiP = Uo2nCiP +1;
                };
            }
            i++;
        };
    };
}

