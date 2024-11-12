void  main () {
    int i, n;
    int WEhCcLlVRW8 [100];
    int bQaJhKLkb [4] = {0};
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1)
        scanf ("%d", &WEhCcLlVRW8[i]);
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
    for (i = 0; i < n; i++) {
        if (18 >= WEhCcLlVRW8[i])
            bQaJhKLkb[0]++;
        else {
            if (WEhCcLlVRW8[i] >= 19 && WEhCcLlVRW8[i] <= 35)
                bQaJhKLkb[1]++;
            else if (WEhCcLlVRW8[i] > 35 && WEhCcLlVRW8[i] <= 60)
                bQaJhKLkb[2]++;
            else if (WEhCcLlVRW8[i] > 60)
                bQaJhKLkb[3]++;
        };
    }
    printf ("1-18: %.2f%%\n", (float) 100 * bQaJhKLkb[0] / n);
    printf ("19-35: %.2f%%\n", (float) 100 * bQaJhKLkb[1] / n);
    printf ("36-60: %.2f%%\n", (float) 100 * bQaJhKLkb[2] / n);
    printf ("60??: %.2f%%\n", (float) 100 * bQaJhKLkb[3] / n);
}

