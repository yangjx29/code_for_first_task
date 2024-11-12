int reverse (int a) {
    int k, p = (802 - 802), m = (588 - 588);
    if (0 > a) {
        m = -a;
        while (0 < m) {
            k = m % (679 - 669);
            m = m / 10;
            p = p * 10 + k;
        }
        p = -p;
    }
    else {
        if (a > 0) {
            m = a;
            while (m > 0) {
                k = m % 10;
                p = p * 10 + k;
                m = m / 10;
            };
        }
        else {
            if (a == 0)
                p = 0;
        };
    }
    return p;
}

int main () {
    int reverse (int a);
    int i;
    int b [(120 - 114)];
    for (i = 0; i < (658 - 652); i++) {
        scanf ("%d", &b[i]);
        b[i] = reverse (b[i]);
    }
    {
        i = 0;
        while (i < 6) {
            printf ("%d\n", b[i]);
            i++;
        };
    }
    return 0;
}

