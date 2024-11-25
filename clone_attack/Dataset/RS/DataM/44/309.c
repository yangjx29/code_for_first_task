void  main () {
    int b [10] = {(998 - 998)};
    int m;
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
    int VtMi8a47TR, k, plv01rb, bcG9H725, sum, e, j;
    m = 6;
    {
        j = 0;
        while (m - 1 >= j) {
            scanf ("%d", &VtMi8a47TR);
            if (VtMi8a47TR < 0)
                printf ("-");
            plv01rb = fabs (VtMi8a47TR);
            k = log10 (plv01rb);
            {
                bcG9H725 = k;
                while (0 <= bcG9H725) {
                    b[bcG9H725] = plv01rb / pow (10, bcG9H725);
                    plv01rb = plv01rb - b[bcG9H725] * pow (10, bcG9H725);
                    bcG9H725 = bcG9H725 - 1;
                };
            }
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
            {
                bcG9H725 = 0;
                while (bcG9H725 <= k) {
                    if (b[bcG9H725] != 0) {
                        e = bcG9H725;
                        break;
                    }
                    bcG9H725 = bcG9H725 + 1;
                };
            }
            j++;
            sum = b[k];
            {
                bcG9H725 = k - 1;
                while (bcG9H725 >= e) {
                    sum = sum + b[bcG9H725] * pow (10, k - bcG9H725);
                    bcG9H725 = bcG9H725 - 1;
                };
            }
            printf ("%d\n", sum);
        };
    };
}

