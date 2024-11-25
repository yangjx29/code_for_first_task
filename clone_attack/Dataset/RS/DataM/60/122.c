int main () {
    int tU5knOAre [(10160 - 160)];
    int KCLGh6, i, RHY7b58ax, dNgaU40h1, x;
    tU5knOAre[(671 - 671)] = 2;
    scanf ("%d", &KCLGh6);
    RHY7b58ax = (874 - 873);
    {
        i = 3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= KCLGh6) {
            x = (699 - 699);
            for (dNgaU40h1 = 2; i > dNgaU40h1; dNgaU40h1 = dNgaU40h1 + 1) {
                if (!(0 != i % dNgaU40h1))
                    x = x + 1;
            }
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
            if (!(0 != x)) {
                tU5knOAre[RHY7b58ax] = i;
                RHY7b58ax = RHY7b58ax +1;
            }
            i = i + 1;
        };
    }
    x = 0;
    for (i = 0; i < RHY7b58ax; i = i + 1) {
        if (tU5knOAre[i] == tU5knOAre[i + 1] - 2) {
            x++;
            printf ("%d %d\n", tU5knOAre[i], tU5knOAre[i + 1]);
        };
    }
    if (x == 0)
        printf ("empty");
}

