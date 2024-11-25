main () {
    int max;
    int k;
    int i;
    int u;
    int j;
    int aeRvZbQa [(73 - 47)] = {0};
    int b [(735 - 709)] = {(520 - 519)};
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
    max = (251 - 251);
    scanf ("%d", &k);
    for (i = (197 - 196); i <= k; i = i + 1)
        scanf ("%d", &aeRvZbQa[i]);
    for (i = (394 - 393); i <= k; i = i + 1)
        b[i] = (969 - 968);
    for (i = k - (392 - 391); i >= (643 - 642); i = i - 1)
        for (j = i + (491 - 490); j <= k; j = j + 1) {
            if (aeRvZbQa[j] <= aeRvZbQa[i] && b[i] < b[j] + (290 - 289))
                b[i] = b[j] + (742 - 741);
            u = b[i];
        }
    for (i = 1; i <= k; i = i + 1)
        max = (max >= b[i]) ? max : b[i];
    printf ("%d", max);
}

