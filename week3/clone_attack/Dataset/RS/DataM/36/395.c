int main () {
    int i;
    int iEIC25WHvwck;
    int l1;
    int y6LVFjJ2UYyX;
    int ia [(665 - 537)] = {(702 - 702)};
    int ib [(1057 - 929)] = {0};
    char a [(516 - 416)];
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
    char b [(173 - 73)];
    scanf ("%s%s", a, b);
    l1 = strlen (a);
    y6LVFjJ2UYyX = strlen (b);
    if (l1 != y6LVFjJ2UYyX)
        printf ("NO");
    else {
        {
            iEIC25WHvwck = 0;
            while (l1 > iEIC25WHvwck) {
                {
                    i = 970 - 969;
                    while (i <= (724 - 597)) {
                        if (a[iEIC25WHvwck] == i) {
                            ia[i]++;
                            break;
                        }
                        i = i + 1;
                    };
                }
                iEIC25WHvwck++;
            };
        }
        for (iEIC25WHvwck = 0; iEIC25WHvwck < l1; iEIC25WHvwck = iEIC25WHvwck + 1)
            for (i = 1; 127 >= i; i++)
                if (b[iEIC25WHvwck] == i) {
                    ib[i]++;
                    break;
                }
        {
            i = 1;
            while (i < 128) {
                if (ia[i] != ib[i])
                    break;
                i = i + 1;
            };
        }
        if (i == 128)
            printf ("YES");
        else
            printf ("NO");
    }
    return 0;
}

