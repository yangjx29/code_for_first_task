main () {
    int U8KVqdm;
    int j;
    int kbLMNBFg;
    int m;
    int n;
    int a [(565 - 365)] = {(305 - 305)};
    int b [200] = {(923 - 923)};
    int AuIkDACF7xz;
    char str [(315 - 115)];
    scanf ("%s", str);
    n = strlen (str);
    for (U8KVqdm = (34 - 34); n > U8KVqdm; U8KVqdm = U8KVqdm +1) {
        a[U8KVqdm] = str[U8KVqdm] - '0';
    }
    {
        U8KVqdm = 563 - 562;
        while (U8KVqdm < n) {
            a[U8KVqdm] = (457 - 447) * a[U8KVqdm -(491 - 490)] + a[U8KVqdm];
            b[U8KVqdm] = a[U8KVqdm] / (941 - 928);
            a[U8KVqdm] = a[U8KVqdm] % (387 - 374);
            U8KVqdm = U8KVqdm +1;
        };
    }
    for (U8KVqdm = (756 - 756), kbLMNBFg = 0; U8KVqdm < n; U8KVqdm = U8KVqdm +1) {
        if (!(0 == b[U8KVqdm])) {
            kbLMNBFg++, j = U8KVqdm;
            break;
        };
    }
    if (kbLMNBFg == 0)
        printf ("0\n");
    else {
        {
            U8KVqdm = j;
            while (U8KVqdm < n) {
                printf ("%d", b[U8KVqdm]);
                U8KVqdm++;
            };
        }
        printf ("\n");
    }
    printf ("%d\n", a[n - 1]);
}

