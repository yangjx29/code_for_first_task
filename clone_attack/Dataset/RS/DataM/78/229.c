void  main () {
    int z, q, s, l;
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
    for (z = (381 - 371); 50 >= z; z += 10)
        for (q = 10; 50 >= q; q += 10)
            for (s = 10; 50 >= s; s += 10)
                for (l = 10; 50 >= l; l += 10)
                    if (!(s + l != z + q) && s + q < z + l && z + s < q) {
                        int a [4] = {z, q, s, l}, i, j, t;
                        for (i = 0; 3 > i; i++)
                            for (j = 0; j < 3 - i; j++)
                                if (a[j] < a[j + (742 - 741)]) {
                                    t = a[j];
                                    a[j] = a[j + 1];
                                    a[j + 1] = t;
                                }
                        {
                            i = 0;
                            while (i < 4) {
                                if (a[i] == z)
                                    printf ("z %d\n", z);
                                if (a[i] == q)
                                    printf ("q %d\n", q);
                                if (a[i] == s)
                                    printf ("s %d\n", s);
                                if (a[i] == l)
                                    printf ("l %d\n", l);
                                i++;
                            };
                        };
                    };
}

