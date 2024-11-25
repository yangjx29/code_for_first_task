main () {
    char a [1001];
    int sum;
    int l;
    int O4W8GSsPNR;
    sum = 1;
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
    scanf ("%s", a);
    l = strlen (a);
    a[l] = ' ';
    {
        O4W8GSsPNR = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l > O4W8GSsPNR) {
            if ('z' >= a[O4W8GSsPNR] && 'a' <= a[O4W8GSsPNR])
                a[O4W8GSsPNR] = a[O4W8GSsPNR] - 'a' + 'A';
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
            O4W8GSsPNR = O4W8GSsPNR +1;
        };
    }
    {
        O4W8GSsPNR = 0;
        while (O4W8GSsPNR < l) {
            if (a[O4W8GSsPNR] == a[O4W8GSsPNR +1])
                sum = sum + 1;
            else {
                printf ("(%c,%d)", a[O4W8GSsPNR], sum);
                sum = 1;
            }
            O4W8GSsPNR = O4W8GSsPNR +1;
        };
    }
    getchar ();
    getchar ();
}

