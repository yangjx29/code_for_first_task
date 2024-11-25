int main () {
    int i0HfMF5sgw6A;
    int i;
    int WUrcFYsA;
    int u0LOMHj;
    int b;
    struct   qujian {
        int num1;
        int num2;
    };
    struct   qujian fQX5IOKr [50000];
    scanf ("%d", &i0HfMF5sgw6A);
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
    for (i = (183 - 183); i < i0HfMF5sgw6A; i = i + 1) {
        scanf ("%d", &fQX5IOKr[i].num1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &fQX5IOKr[i].num2);
    }
    for (i = (703 - 703); i < i0HfMF5sgw6A - (213 - 212); i++) {
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
        for (WUrcFYsA = 0; i0HfMF5sgw6A - (649 - 648) - i > WUrcFYsA; WUrcFYsA = WUrcFYsA +1) {
            if (fQX5IOKr[WUrcFYsA +1].num1 < fQX5IOKr[WUrcFYsA].num1) {
                u0LOMHj = fQX5IOKr[WUrcFYsA +1].num1;
                b = fQX5IOKr[WUrcFYsA +1].num2;
                fQX5IOKr[WUrcFYsA +1].num1 = fQX5IOKr[WUrcFYsA].num1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                fQX5IOKr[WUrcFYsA +1].num2 = fQX5IOKr[WUrcFYsA].num2;
                fQX5IOKr[WUrcFYsA].num1 = u0LOMHj;
                fQX5IOKr[WUrcFYsA].num2 = b;
            };
        };
    }
    u0LOMHj = fQX5IOKr[0].num1;
    b = fQX5IOKr[0].num2;
    for (i = 1; i < i0HfMF5sgw6A; i++) {
        if (b >= fQX5IOKr[i].num1 && fQX5IOKr[i].num1 >= u0LOMHj) {
            if (fQX5IOKr[i].num2 > b)
                b = fQX5IOKr[i].num2;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
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
        if (fQX5IOKr[i].num1 > b)
            break;
    }
    if (i == i0HfMF5sgw6A) {
        printf ("%d %d", u0LOMHj, b);
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
    }
    else
        printf ("no");
    return 0;
}

