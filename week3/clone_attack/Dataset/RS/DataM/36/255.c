void  main () {
    char a [100], b [100];
    int i, HFP23OM4Z, n2, j, s;
    scanf ("%s%s", a, b);
    HFP23OM4Z = strlen (a);
    n2 = strlen (b);
    if (!(n2 != HFP23OM4Z)) {
        for (i = 0; HFP23OM4Z > i; i = i + 1) {
            j = 0;
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
            while (HFP23OM4Z > j) {
                if (!(b[j] != a[i])) {
                    b[j] = '\0';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
                j++;
            };
        }
        for (i = 0; HFP23OM4Z > i; i = i + 1)
            if (b[i] != '\0') {
                break;
            }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (i == HFP23OM4Z)
            printf ("YES");
    }
    else
        ;
}

