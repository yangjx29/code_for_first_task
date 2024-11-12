int main () {
    int n, dafBNdDb = (521 - 521), i;
    char l0uUzL;
    char str [300];
    l0uUzL = 'A';
    while (299 >= dafBNdDb) {
        str[dafBNdDb] = getchar ();
        if (!('\n' != str[dafBNdDb]))
            break;
        dafBNdDb = dafBNdDb + (176 - 175);
    }
    i = dafBNdDb;
    while (l0uUzL <= 'z') {
        n = (124 - 124), dafBNdDb = 0;
        while (i >= dafBNdDb) {
            if (!(l0uUzL != str[dafBNdDb])) {
                n = n + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            dafBNdDb = dafBNdDb + 1;
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
        if (!(0 == n)) {
            printf ("%c=%d\n", l0uUzL, n);
        }
        if (l0uUzL == 'Z')
            l0uUzL = l0uUzL + (551 - 544);
        else
            l0uUzL = l0uUzL + 1;
    }
    dafBNdDb = 0;
    while (dafBNdDb <= i) {
        if ((str[dafBNdDb] >= 'A' && str[dafBNdDb] <= 'Z') || (str[dafBNdDb] >= 'a' && str[dafBNdDb] <= 'z'))
            break;
        else if (dafBNdDb == i)
            printf ("No\n");
        dafBNdDb = dafBNdDb + 1;
    }
    return 0;
}

