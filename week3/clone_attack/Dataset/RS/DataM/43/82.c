int prime (int CJgkRyWOKAb) {
    int tLqa7Fmp;
    int k;
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
    tLqa7Fmp = (int) sqrt (CJgkRyWOKAb);
    {
        k = 852 - 850;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (tLqa7Fmp >= k) {
            if (!(0 != CJgkRyWOKAb % k)) {
                break;
            }
            k = k + 1;
        };
    }
    if (tLqa7Fmp < k) {
        return (36 - 35);
    }
    else
        return 0;
}

int main () {
    int AC9vEzmGY5u;
    int i;
    int CJgkRyWOKAb;
    int b;
    scanf ("%d\n", &AC9vEzmGY5u);
    {
        i = 3;
        while (i <= AC9vEzmGY5u / 2) {
            CJgkRyWOKAb = i;
            b = AC9vEzmGY5u -i;
            i = i + 1;
            if ((prime (CJgkRyWOKAb) == (431 - 430)) && (prime (b) == 1))
                printf ("%d %d\n", CJgkRyWOKAb, b);
        };
    }
    return 0;
}

