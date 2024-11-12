void  main () {
    char XuyQS3TML;
    int t5VXIk;
    int j;
    int n;
    int min;
    int max;
    int m;
    int x [(1746 - 746)] = {(204 - 204)};
    int hh4KntBsiq [(1135 - 135)] = {(380 - 380)};
    int O918ixr;
    int l;
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
    t5VXIk = (110 - 110);
    j = (349 - 349);
    n = (948 - 948);
    min = 1000;
    max = (985 - 985);
    m = (789 - 789);
    while ((43 - 42)) {
        XuyQS3TML = getchar ();
        scanf ("%d", &x[t5VXIk]);
        t5VXIk++;
        if (!('\n' != XuyQS3TML))
            break;
    }
    while (1) {
        scanf ("%d", &hh4KntBsiq[j]);
        j++;
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
        XuyQS3TML = getchar ();
        if (XuyQS3TML == '\n')
            break;
    }
    {
        O918ixr = 312 - 312;
        while (t5VXIk > O918ixr) {
            if (min > x[O918ixr])
                min = x[O918ixr];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            O918ixr = O918ixr +1;
        };
    }
    {
        O918ixr = 0;
        while (j > O918ixr) {
            if (hh4KntBsiq[O918ixr] > max)
                max = hh4KntBsiq[O918ixr];
            O918ixr++;
        };
    }
    {
        O918ixr = min;
        while (O918ixr < max) {
            n = 0;
            {
                l = 0;
                while (l < t5VXIk) {
                    if (x[l] <= O918ixr &&hh4KntBsiq[l] > O918ixr)
                        n++;
                    l++;
                };
            }
            if (n > m)
                m = n;
            O918ixr++;
        };
    }
    printf ("%d %d", t5VXIk, m);
}

