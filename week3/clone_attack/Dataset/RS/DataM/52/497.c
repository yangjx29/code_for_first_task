int main () {
    int KJ6x3c5Ynlm;
    int m;
    int i;
    int sz [100];
    int sy [100];
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
    scanf ("%d %d", &KJ6x3c5Ynlm, &m);
    {
        i = 505 - 505;
        while (KJ6x3c5Ynlm > i) {
            scanf ("%d", &sz[i]);
            i++;
        };
    }
    {
        i = 291 - 291;
        while (KJ6x3c5Ynlm > i) {
            if (m <= i) {
                sy[i] = sz[i - m];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else {
                sy[i] = sz[i + KJ6x3c5Ynlm -m];
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (i = 0; i < KJ6x3c5Ynlm -1; i++) {
        printf ("%d ", sy[i]);
    }
    printf ("%d", sy[KJ6x3c5Ynlm -1]);
    return 0;
}

