void  main () {
    int i;
    int j;
    int x;
    int y;
    int a [301];
    int k;
    scanf ("%d", &a[(45 - 45)]);
    {
        i = 952 - 951;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\n' == getchar ())) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    k = i;
    {
        j = 0;
        while (1) {
            if (!(a[j + 1] == a[j]))
                break;
            j++;
        };
    }
    if (!(1 != i) || j + 1 == i)
        printf ("No");
    else {
        y = 0;
        x = a[0];
        for (i = 1; k > i; i++)
            if (x < a[i])
                x = a[i];
        for (i = 0; i < k; i++)
            if (y < a[i] && a[i] != x)
                y = a[i];
        printf ("%d", y);
    };
}

