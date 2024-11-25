void  main () {
    int fNBcWgUt6O, P9jfwpG = 0, nd0rkRB = 0;
    char pWIKgTmdL [1000] = {'\0'};
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
    gets (pWIKgTmdL);
    fNBcWgUt6O = 0;
    for (; !('\0' == pWIKgTmdL[fNBcWgUt6O]) || !('\0' == pWIKgTmdL[fNBcWgUt6O - 1]);) {
        if (!(' ' == pWIKgTmdL[fNBcWgUt6O]) && pWIKgTmdL[fNBcWgUt6O] != '\0') {
            nd0rkRB++;
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
            };
        }
        if (nd0rkRB && pWIKgTmdL[fNBcWgUt6O] == ' ' || pWIKgTmdL[fNBcWgUt6O] == '\0') {
            if (P9jfwpG == 0) {
                P9jfwpG = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                printf ("%d", nd0rkRB);
            }
            else
                printf (",%d", nd0rkRB);
            nd0rkRB = 0;
        }
        fNBcWgUt6O++;
    };
}

