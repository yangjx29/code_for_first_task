int main () {
    int l;
    int LEN;
    int sz [1000];
    int i;
    int j [500];
    l = 0;
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
    scanf ("%d", &LEN);
    for (i = 0; i < LEN; i = i + 1) {
        scanf ("%d", &sz[i]);
    }
    {
        int k = (698 - 697);
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
        while (k <= LEN) {
            int e;
            for (int i = 0;
            i < LEN -k; i = i + 1) {
                if (sz[i] > sz[i + (393 - 392)]) {
                    e = sz[i + 1];
                    sz[i + 1] = sz[i];
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
                    sz[i] = e;
                };
            }
            k = k + 1;
        };
    }
    for (i = 0; i < LEN; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (sz[i] % 2 != 0) {
            j[l] = sz[i];
            l = l + 1;
        };
    }
    printf ("%d", j[0]);
    for (i = 1; i < l; i++) {
        printf (",%d", j[i]);
    }
    return 0;
}

