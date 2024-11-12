int main () {
    char PwMsC8Bm [260] = {0}, substring [50] = {0}, replacement [50] = {0}, JXIuw0Lsmdy [50] = {0}, length, length_s, length_r, i, j, uBQREk = 0, zSYGdIm7, V7xmFpaL0;
    cin >> PwMsC8Bm >> substring >> replacement;
    length = strlen (PwMsC8Bm);
    length_s = strlen (substring);
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
    length_r = strlen (replacement);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= length - length_s) {
            uBQREk = 0;
            memset (JXIuw0Lsmdy, 0, sizeof (JXIuw0Lsmdy));
            {
                j = i;
                while (i + length_s > j) {
                    JXIuw0Lsmdy[uBQREk++] = PwMsC8Bm[j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            if (!strcmp (JXIuw0Lsmdy, substring)) {
                if (length_s != length_r) {
                    V7xmFpaL0 = i + length_s;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    {
                        zSYGdIm7 = i + length_r;
                        while (zSYGdIm7 < length) {
                            PwMsC8Bm[zSYGdIm7] = PwMsC8Bm[V7xmFpaL0++];
                            zSYGdIm7 = zSYGdIm7 + 1;
                        };
                    };
                }
                V7xmFpaL0 = 0;
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
                {
                    zSYGdIm7 = i;
                    while (zSYGdIm7 < i + length_r) {
                        PwMsC8Bm[zSYGdIm7] = replacement[V7xmFpaL0++];
                        zSYGdIm7 = zSYGdIm7 + 1;
                    };
                }
                break;
            }
            i = i + 1;
        };
    }
    cout << PwMsC8Bm << endl;
    return 0;
}

