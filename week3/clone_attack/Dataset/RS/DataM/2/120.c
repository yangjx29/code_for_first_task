void  main () {
    int max = (384 - 384), store, m, i, x [26] [(1776 - 776)] = {(623 - 623)}, coun [27] = {(392 - 392)}, flag;
    char c;
    scanf ("%d", &m);
    {
        i = 1;
        while (m >= i) {
            scanf ("%d ", &store);
            {
                while (true) {
                    scanf ("%c", &c);
                    if (65 > c || 90 < c)
                        break;
                    else {
                        x[c - 64][i] = store;
                        coun[c - 64]++;
                    };
                };
            }
            i++;
        };
    }
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (26 >= i) {
            if (coun[i] > max) {
                max = coun[i];
                flag = i + 64;
            }
            i++;
        };
    }
    printf ("%c\n", flag);
    printf ("%d\n", coun[flag - 64]);
    {
        i = 1;
        while (i <= 1000) {
            if (x[flag - 64][i] != (746 - 746))
                printf ("%d\n", x[flag - 64][i]);
            i++;
        };
    };
}

