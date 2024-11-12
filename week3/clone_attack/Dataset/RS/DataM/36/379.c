int main (int argc, char *WBHtLfdkEe []) {
    int hoKhFzZCYpc [(859 - 832)];
    int alpha1 [27];
    int JWkjVFu4DX [27];
    int sTvEr8 [27];
    int AmSXoy;
    int yuGmjaJzQC0;
    int Vt8la76q4T;
    int i;
    int flag;
    char GlrUpMf38GKs [100];
    char str2 [100];
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
    flag = 0;
    {
        i = 800 - 800;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((884 - 858) > i) {
            alpha1[i] = 0;
            hoKhFzZCYpc[i] = 0;
            sTvEr8[i] = 0;
            JWkjVFu4DX[i] = 0;
            i = i + 1;
        };
    }
    scanf ("%s %s", GlrUpMf38GKs, str2);
    AmSXoy = strlen (GlrUpMf38GKs);
    yuGmjaJzQC0 = strlen (str2);
    {
        Vt8la76q4T = 0;
        while (AmSXoy > Vt8la76q4T) {
            {
                i = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (26 > i) {
                    if (!(i != GlrUpMf38GKs[Vt8la76q4T] - 'a'))
                        alpha1[i]++;
                    if (!(i != GlrUpMf38GKs[Vt8la76q4T] - 'A'))
                        hoKhFzZCYpc[i]++;
                    i = i + 1;
                };
            }
            Vt8la76q4T = Vt8la76q4T +1;
        };
    }
    {
        Vt8la76q4T = 0;
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
        while (Vt8la76q4T < yuGmjaJzQC0) {
            {
                i = 0;
                while (i < 26) {
                    if (!(i != str2[Vt8la76q4T] - 'a'))
                        sTvEr8[i]++;
                    if (str2[Vt8la76q4T] - 'A' == i)
                        JWkjVFu4DX[i]++;
                    i = i + 1;
                };
            }
            Vt8la76q4T++;
        };
    }
    {
        i = 0;
        while (i < 26) {
            if (alpha1[i] == sTvEr8[i] && hoKhFzZCYpc[i] == JWkjVFu4DX[i])
                flag = 1;
            else {
                flag = 0;
                break;
            }
            i++;
        };
    }
    if (1 == flag)
        printf ("YES\n");
    else
        ;
    return 0;
}

