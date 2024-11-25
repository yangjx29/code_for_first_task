int lYAhHRyJ (int, int);

main () {
    int YteXgMiaYnC;
    int M5yGVf;
    scanf ("%d%d", &YteXgMiaYnC, &M5yGVf);
    printf ("%d", lYAhHRyJ (max (YteXgMiaYnC, M5yGVf), min (YteXgMiaYnC, M5yGVf)));
}

int lYAhHRyJ (int KiRQIDdB6C, int YezHwqR8s) {
    while (KiRQIDdB6C > YezHwqR8s) {
        KiRQIDdB6C /= 2;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (KiRQIDdB6C == YezHwqR8s)
        return KiRQIDdB6C;
    else
        return lYAhHRyJ (YezHwqR8s, KiRQIDdB6C);
}

