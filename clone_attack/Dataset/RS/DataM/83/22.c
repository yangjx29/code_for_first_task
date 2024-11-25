void  main () {
    int n, i, j, vHehp9U, d;
    float sum, GPA;
    int a [100], REy36Bw [100];
    float c [100];
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    d = 0;
    sum = 0;
    for (j = 0; n > j; j++)
        scanf ("%d", &REy36Bw[j]);
    for (vHehp9U = 0; n > vHehp9U; vHehp9U++) {
        if (90 <= REy36Bw[vHehp9U])
            c[vHehp9U] = 4;
        if (REy36Bw[vHehp9U] < 90 && REy36Bw[vHehp9U] > 84)
            c[vHehp9U] = 3.7;
        if (85 > REy36Bw[vHehp9U] && REy36Bw[vHehp9U] > 81)
            c[vHehp9U] = 3.3;
        if (82 > REy36Bw[vHehp9U] && 77 < REy36Bw[vHehp9U])
            c[vHehp9U] = 3.0;
        if (78 > REy36Bw[vHehp9U] && 74 < REy36Bw[vHehp9U])
            c[vHehp9U] = 2.7;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (75 > REy36Bw[vHehp9U] && REy36Bw[vHehp9U] > 71)
            c[vHehp9U] = 2.3;
        if (72 > REy36Bw[vHehp9U] && REy36Bw[vHehp9U] > 67)
            c[vHehp9U] = 2.0;
        if (REy36Bw[vHehp9U] < 68 && REy36Bw[vHehp9U] > (554 - 491))
            c[vHehp9U] = 1.5;
        if (REy36Bw[vHehp9U] < 64 && REy36Bw[vHehp9U] > 59)
            c[vHehp9U] = 1.0;
        if (REy36Bw[vHehp9U] < 60)
            c[vHehp9U] = 0;
    }
    for (vHehp9U = 0; vHehp9U < n; vHehp9U++) {
        sum = sum + a[vHehp9U] * c[vHehp9U];
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
        d = d + a[vHehp9U];
    }
    GPA = sum / d;
    printf ("%.2f", GPA);
}

