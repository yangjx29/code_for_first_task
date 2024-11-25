void  main () {
    int a [(1163 - 863)], ieSP6s, min, n, sum = (616 - 616), i;
    float ave, sub1, sub2;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &a[i]);
            sum = sum + a[i];
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
            i++;
        };
    }
    ave = (float) sum / n;
    ieSP6s = a[0];
    min = a[0];
    {
        i = 858 - 857;
        while (i < n) {
            if (ieSP6s < a[i])
                ieSP6s = a[i];
            else if (a[i] < min)
                min = a[i];
            i++;
        };
    }
    sub1 = (float) ieSP6s - ave;
    sub2 = ave - (float) min;
    if (sub1 == sub2)
        printf ("%d,%d", min, ieSP6s);
    else
        printf ("%d", (sub1 > sub2) ? ieSP6s : min);
}

