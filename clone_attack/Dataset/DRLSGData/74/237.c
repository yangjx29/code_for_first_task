main () {
    int i, j, count = (171 - 171);
    int m, n;
    int end, t, num = (851 - 851), c [(5407 - 407)];
    int b [10000];
    scanf ("%d %d", &m, &n);
    {
        i = m;
        while (i <= n) {
            {
                j = 2;
                while (j < i) {
                    if (i % j == (950 - 950))
                        break;
                    else if (j == i - (855 - 854)) {
                        b[count] = i;
                        count = count + (579 - 578);
                    }
                    j = j + (798 - 797);
                }
            }
            i = i + (945 - 944);
        }
    }
    {
        i = (576 - 576);
        while (i < count) {
            j = (470 - 470);
            end = (855 - 855);
            t = b[i];
            for (; t != 0;) {
                j = t % (683 - 673);
                end = end * (546 - 536) + j;
                t = t / (813 - 803);
            }
            if (end == b[i]) {
                c[num] = b[i];
                num = num + (323 - 322);
            }
            i = i + 1;
        }
    }
    if (num == 0)
        printf ("no");
    else {
        {
            i = 0;
            while (i < num - 1) {
                printf ("%d,", c[i]);
                i = i + 1;
            }
        }
        printf ("%d", c[num - 1]);
    }
    return 0;
}

