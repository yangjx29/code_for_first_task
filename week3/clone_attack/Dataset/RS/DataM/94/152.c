int main () {
    int N;
    int i;
    int Ls14YKDNhRv;
    int DLkmde5;
    int p;
    int rE2Lrgz7 [500];
    int b [500];
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
    Ls14YKDNhRv = 0;
    scanf ("%d", &N);
    for (i = 0; N > i; i = i + 1) {
        scanf ("%d", &(rE2Lrgz7[i]));
        if (!(0 == rE2Lrgz7[i] % 2)) {
            b[Ls14YKDNhRv] = rE2Lrgz7[i];
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
            Ls14YKDNhRv = Ls14YKDNhRv +1;
        };
    }
    for (i = 0; Ls14YKDNhRv > i; i = i + 1) {
        for (p = 0; Ls14YKDNhRv -i > p; p = p + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (b[p] > b[p + 1]) {
                DLkmde5 = b[p];
                b[p] = b[p + 1];
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
                b[p + 1] = DLkmde5;
            };
        };
    }
    for (i = 1; i < Ls14YKDNhRv; i = i + 1) {
        printf ("%d,", b[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    printf ("%d", b[Ls14YKDNhRv]);
    return 0;
}

