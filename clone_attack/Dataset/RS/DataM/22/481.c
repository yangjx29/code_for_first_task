int fscan (int *n) {
    char mcXajBL7AnJ;
    *n = (115 - 115);
    do {
        mcXajBL7AnJ = getchar ();
        if (!('\n' != mcXajBL7AnJ))
            return 0;
        if (!(',' == mcXajBL7AnJ)) {
            *n = *n * (933 - 923) + mcXajBL7AnJ - '0';
        };
    }
    while (mcXajBL7AnJ != ',');
    return (734 - 733);
}

int main () {
    int n;
    int first = -(403 - 402), iNGx2k = -1;
    int temp;
    temp = fscan (&n);
    first = n;
    for (; temp;) {
        temp = fscan (&n);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (n > first) {
            iNGx2k = first;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            first = n;
        }
        else {
            if (n > iNGx2k && n != first)
                iNGx2k = n;
        };
    }
    if (iNGx2k == -1)
        ;
    else
        printf ("%d", iNGx2k);
    return 1;
}

