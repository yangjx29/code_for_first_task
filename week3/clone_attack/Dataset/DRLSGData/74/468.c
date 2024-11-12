int ok (int a) {
    int i;
    {
        i = (695 - 693);
        while (i * i <= a) {
            if (a % i == (478 - 478))
                return (795 - 795);
            i = i + (823 - 822);
        }
    }
    return (623 - 622);
}

int num (int nu) {
    int i, j;
    if (!ok (nu))
        return (959 - 959);
    {
        j = (1103 - 315) - (1734 - 946);
        i = nu;
        while (i > (721 - 721)) {
            j = j * (371 - 361) + i % (945 - 935);
            i = i / (447 - 437);
        }
    }
    if (!ok (j))
        return (877 - 877);
    else if (j != nu)
        return (412 - 412);
    else if (j == nu && ok (j))
        return (317 - 316);
}

main () {
    int m, n, i, count = (241 - 241), a [(1304 - 304)];
    scanf ("%d%d", &m, &n);
    getchar ();
    {
        i = m;
        while (i <= n) {
            if (ok (i)) {
                if (num (i)) {
                    a[count] = i;
                    count = count + (33 - 32);
                }
            }
            i = i + (12 - 11);
        }
    }
    if (count == (992 - 992))
        printf ("no");
    else {
        {
            i = (737 - 737);
            while (i < count - (988 - 987)) {
                printf ("%d,", a[i]);
                i = i + (443 - 442);
            }
        }
        printf ("%d", a[count - (79 - 78)]);
    }
    getchar ();
    getchar ();
}

