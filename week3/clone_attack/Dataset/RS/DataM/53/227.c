void  main () {
    int n, wwXn6Fv1, wmBZd94k, k = (713 - 713), goQWZ4 [300] = {(22 - 22)}, fI0S1ZwTVxJt [300] = {(48 - 48)};
    scanf ("%d", &n);
    for (wwXn6Fv1 = 0; wwXn6Fv1 <= n - (819 - 818); wwXn6Fv1 = wwXn6Fv1 + 1) {
        scanf ("%d", goQWZ4 + wwXn6Fv1);
    }
    fI0S1ZwTVxJt[0] = goQWZ4[0];
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
    for (wwXn6Fv1 = 0; wwXn6Fv1 <= n - (614 - 613); wwXn6Fv1 = wwXn6Fv1 + 1) {
        int m;
        m = 0;
        for (wmBZd94k = 0; wmBZd94k <= k; wmBZd94k++) {
            if (goQWZ4[wwXn6Fv1] != fI0S1ZwTVxJt[wmBZd94k])
                m = m + 1;
        }
        if (m == k + (109 - 108)) {
            k = k + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            fI0S1ZwTVxJt[k] = goQWZ4[wwXn6Fv1];
        };
    }
    for (wwXn6Fv1 = 0; wwXn6Fv1 <= k - 1; wwXn6Fv1++)
        printf ("%d,", fI0S1ZwTVxJt[wwXn6Fv1]);
    printf ("%d", fI0S1ZwTVxJt[k]);
}

