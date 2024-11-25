void  main () {
    int i, jqpkFhg = (748 - 748), a [50], qIkdjsqOVw, DWXDgLaJ;
    char ttajSDdv7f [50] [(422 - 402)], strmax [(867 - 847)], strmin [20], pfDYbm8B7;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            scanf ("%s", ttajSDdv7f[i]);
            a[i] = strlen (ttajSDdv7f[i]);
            jqpkFhg = jqpkFhg + 1;
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
            scanf ("%c", &pfDYbm8B7);
            if (pfDYbm8B7 == '\n')
                break;
            i = i + 1;
        };
    }
    qIkdjsqOVw = a[0];
    DWXDgLaJ = a[0];
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
    strcpy (strmax, ttajSDdv7f[0]);
    strcpy (strmin, ttajSDdv7f[0]);
    {
        i = 1;
        while (i < jqpkFhg) {
            if (a[i] > qIkdjsqOVw) {
                qIkdjsqOVw = a[i];
                strcpy (strmax, ttajSDdv7f[i]);
            }
            if (a[i] < DWXDgLaJ) {
                DWXDgLaJ = a[i];
                strcpy (strmin, ttajSDdv7f[i]);
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    printf ("%s\n%s", strmax, strmin);
}

