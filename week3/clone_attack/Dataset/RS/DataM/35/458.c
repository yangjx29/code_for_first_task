int GXbUTCwsHamh (int O9H2Wj4Nl [] [(256 - 248)], int h, int JQKOncCqJp) {
    int k;
    int i;
    k = (480 - 480);
    {
        i = 245 - 244;
        while (i < JQKOncCqJp) {
            if (O9H2Wj4Nl[h][i] > O9H2Wj4Nl[h][k])
                k = i;
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
            i = i + 1;
        };
    }
    return O9H2Wj4Nl[h][k];
}

int minl (int O9H2Wj4Nl [] [(892 - 884)], int h, int JQKOncCqJp) {
    int k;
    int i;
    k = (32 - 32);
    {
        i = 1;
        while (i < h) {
            if (O9H2Wj4Nl[i][JQKOncCqJp] < O9H2Wj4Nl[k][JQKOncCqJp])
                k = i;
            i = i + 1;
        };
    }
    return O9H2Wj4Nl[k][JQKOncCqJp];
}

int main () {
    int h, JQKOncCqJp;
    int tip;
    int O9H2Wj4Nl [(676 - 668)] [(683 - 675)];
    int i;
    int DHi64t9M;
    int HNJuZzgtX;
    int b;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    };
    tip = 0;
    scanf ("%d,%d", &h, &JQKOncCqJp);
    for (i = 0; i < h; i = i + 1) {
        DHi64t9M = 0;
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
        while (DHi64t9M < JQKOncCqJp) {
            scanf ("%d", &O9H2Wj4Nl[i][DHi64t9M]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            DHi64t9M = DHi64t9M +1;
        };
    }
    {
        i = 0;
        while (i < h) {
            {
                DHi64t9M = 0;
                while (DHi64t9M < JQKOncCqJp) {
                    if (!(minl (O9H2Wj4Nl, h, DHi64t9M) != O9H2Wj4Nl[i][DHi64t9M]) && O9H2Wj4Nl[i][DHi64t9M] == GXbUTCwsHamh (O9H2Wj4Nl, i, JQKOncCqJp)) {
                        tip = 1;
                        HNJuZzgtX = i;
                        b = DHi64t9M;
                    }
                    DHi64t9M = DHi64t9M +1;
                };
            }
            i = i + 1;
        };
    }
    if (tip == 0)
        printf ("No");
    else
        printf ("%d+%d", HNJuZzgtX, b);
}

