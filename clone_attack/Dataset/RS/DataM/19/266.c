void  main () {
    int l1, l2, l3, i, j, oLHMnafcUVzu = 0;
    char a [100];
    char b [100];
    char c [100];
    char ZrHXDiy0Nj8 [200];
    gets (a);
    l1 = strlen (a);
    scanf ("%s%s", b, c);
    l2 = strlen (b);
    l3 = strlen (c);
    {
        i = 0;
        while (l1 > i) {
            if (!(' ' != a[i - 1]) || !(0 != i)) {
                {
                    j = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (j < l2) {
                        if (a[i + j] != b[j])
                            break;
                        j++;
                    };
                }
                if (j == l2) {
                    i = i + l2 - 1;
                    {
                        j = 0;
                        while (j < l3) {
                            ZrHXDiy0Nj8[oLHMnafcUVzu] = c[j];
                            oLHMnafcUVzu++;
                            j++;
                        };
                    };
                }
                else {
                    ZrHXDiy0Nj8[oLHMnafcUVzu] = a[i];
                    oLHMnafcUVzu++;
                };
            }
            else {
                ZrHXDiy0Nj8[oLHMnafcUVzu] = a[i];
                oLHMnafcUVzu++;
            }
            i++;
        };
    }
    ZrHXDiy0Nj8[oLHMnafcUVzu] = '\0';
    printf ("%s", ZrHXDiy0Nj8);
}

