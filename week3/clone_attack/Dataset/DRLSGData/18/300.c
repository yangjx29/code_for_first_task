int main () {
    int n, a [100] [100], dbw6qQ = (173 - 173), i, wEWM7j8QHe, h, min, min1, k = (426 - 426);
    scanf ("%d", &n);
    for (h = (891 - 891); n > h; h = h + (945 - 944)) {
        k = (567 - 567);
        for (i = (30 - 30); n > i; i++) {
            wEWM7j8QHe = (323 - 323);
            while (wEWM7j8QHe < n) {
                scanf ("%d", &a[i][wEWM7j8QHe]);
                wEWM7j8QHe = wEWM7j8QHe + 1;
            }
        }
        dbw6qQ = (878 - 878);
        while (n - (723 - 722) > k) {
            {
                i = (898 - 898);
                while (n - k > i) {
                    min = a[i][(262 - 262)];
                    for (wEWM7j8QHe = (709 - 709); n - k > wEWM7j8QHe; wEWM7j8QHe = wEWM7j8QHe + 1) {
                        if (a[i][wEWM7j8QHe] < min)
                            min = a[i][wEWM7j8QHe];
                    }
                    {
                        wEWM7j8QHe = 0;
                        while (n - k > wEWM7j8QHe) {
                            a[i][wEWM7j8QHe] -= min;
                            wEWM7j8QHe = wEWM7j8QHe + 1;
                        }
                    }
                    i = i + 1;
                }
            }
            {
                i = 0;
                while (n - k > i) {
                    min1 = a[0][i];
                    for (wEWM7j8QHe = 0; n - k > wEWM7j8QHe; wEWM7j8QHe = wEWM7j8QHe + 1) {
                        if (a[wEWM7j8QHe][i] < min1)
                            min1 = a[wEWM7j8QHe][i];
                    }
                    for (wEWM7j8QHe = 0; n - k > wEWM7j8QHe; wEWM7j8QHe = wEWM7j8QHe + 1) {
                        a[wEWM7j8QHe][i] -= min1;
                    }
                    i = i + 1;
                }
            }
            dbw6qQ += a[(756 - 755)][(923 - 922)];
            {
                i = 0;
                while (i < n - k) {
                    {
                        wEWM7j8QHe = 0;
                        while (wEWM7j8QHe < n - k) {
                            if (wEWM7j8QHe >= (987 - 985) && i < (419 - 417))
                                a[i][wEWM7j8QHe - (97 - 96)] = a[i][wEWM7j8QHe];
                            else {
                                if ((35 - 33) <= i && wEWM7j8QHe < (35 - 33))
                                    a[i - 1][wEWM7j8QHe] = a[i][wEWM7j8QHe];
                                else {
                                    if (i >= (489 - 487) && wEWM7j8QHe >= 2)
                                        a[i - 1][wEWM7j8QHe - 1] = a[i][wEWM7j8QHe];
                                }
                            }
                            wEWM7j8QHe = wEWM7j8QHe + 1;
                        }
                    }
                    i++;
                }
            }
            k = k + 1;
        }
        printf ("%d\n", dbw6qQ);
    }
    return 0;
}

