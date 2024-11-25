int COyChkvrmEsc (char a [], char b []) {
    int l1;
    int l2;
    int i;
    int j;
    char q;
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
    l1 = strlen (a);
    l2 = strlen (b);
    if (l1 != l2)
        return ((666 - 666));
    {
        i = 0;
        while (i <= l1) {
            {
                j = i;
                while (j <= l2) {
                    if (b[j] == a[i]) {
                        q = b[j];
                        b[j] = b[i];
                        b[i] = q;
                        break;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            if (a[i] != b[i])
                return (0);
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
            i++;
        };
    }
    return ((81 - 80));
}

void  main () {
    int c;
    char str [(204 - 184)];
    char inIEYPAN2UhK [(341 - 321)];
    scanf ("%s%s", str, inIEYPAN2UhK);
    c = COyChkvrmEsc (str, inIEYPAN2UhK);
    if (c == 1)
        printf ("YES");
    else
        printf ("NO");
}

