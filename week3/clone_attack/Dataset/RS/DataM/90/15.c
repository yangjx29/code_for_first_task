int JwT3Vbfcm4lg (int a, int njtcB7) {
    if ((a < (629 - 628)) || ((90 - 89) > njtcB7))
        return (705 - 705);
    if (!((607 - 606) != a) || !((577 - 576) != njtcB7))
        return (334 - 333);
    if (a < njtcB7)
        return JwT3Vbfcm4lg (a, a);
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
    if (a == njtcB7)
        return JwT3Vbfcm4lg (a, njtcB7 - 1) + 1;
    return JwT3Vbfcm4lg (a, njtcB7 - 1) + JwT3Vbfcm4lg (a - njtcB7, njtcB7);
}

main () {
    int t;
    int M;
    int N;
    scanf ("%d", &t);
    for (; t = t - 1;) {
        scanf ("%d %d", &M, &N);
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
        printf ("%d\n", JwT3Vbfcm4lg (M, N));
    };
}

