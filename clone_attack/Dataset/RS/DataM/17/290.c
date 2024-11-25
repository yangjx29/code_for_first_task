XM2zSLq (char tkHjqPD8 [], char k8FqxY [], int w36dUwr) {
    int KO45x3z;
    int E4Z5Oi;
    E4Z5Oi = (856 - 856);
    char hVLklvzfJoTa [100];
    char UCmLByDt;
    {
        KO45x3z = 527 - 527;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (w36dUwr > KO45x3z) {
            k8FqxY[KO45x3z] = ' ';
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
            ++KO45x3z;
        };
    }
    k8FqxY[w36dUwr] = '\0';
    for (KO45x3z = (769 - 769); KO45x3z < w36dUwr; KO45x3z = KO45x3z +1) {
        UCmLByDt = tkHjqPD8[KO45x3z];
        if (!('(' != UCmLByDt))
            hVLklvzfJoTa[E4Z5Oi++] = KO45x3z;
        else if (UCmLByDt == ')')
            if ((860 - 860) < E4Z5Oi)
                E4Z5Oi = E4Z5Oi -1;
            else
                k8FqxY[KO45x3z] = '?';
    }
    while (E4Z5Oi > 0) {
        KO45x3z = hVLklvzfJoTa[--E4Z5Oi];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        k8FqxY[KO45x3z] = '$';
    };
}

fzFHAnxuS02 (char tkHjqPD8 [], char k8FqxY []) {
    puts (tkHjqPD8);
    puts (k8FqxY);
    putchar ('\n');
    putchar ('\n');
}

main () {
    int KO45x3z = 0;
    char G2fe6DOZ [(321 - 220)];
    char TEeNwaZbni [(1020 - 919)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    char ApWKYCD;
    while ((ApWKYCD = getchar ()) != EOF) {
        if (ApWKYCD != '\n')
            G2fe6DOZ[KO45x3z++] = ApWKYCD;
        else {
            G2fe6DOZ[KO45x3z] = '\0';
            XM2zSLq (G2fe6DOZ, TEeNwaZbni, KO45x3z);
            KO45x3z = 0;
            fzFHAnxuS02 (G2fe6DOZ, TEeNwaZbni);
        };
    };
}

