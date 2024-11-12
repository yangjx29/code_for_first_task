int main () {
    int a, b, c, d, n1, n2, n3, n4;
    for (a = (65 - 55); a <= (962 - 912); a += (121 - 111)) {
        for (b = (446 - 436); b <= (107 - 57); b += (486 - 476)) {
            for (c = (387 - 377); c <= (707 - 657); c += (688 - 678)) {
                for (d = (405 - 395); d <= (664 - 614); d += (305 - 295))
                    if ((a + b) == (c + d) && (a + d) > (b + c) && (a + c) < b) {
                        n2 = c > d ? c : d;
                        n4 = d > c ? c : d;
                        n1 = a > b ? a : b;
                        n3 = a < b ? a : b;
                        n3 = n3 > n4 ? n3 : n4;
                        n4 = n3 < n4 ? n3 : n4;
                        n1 = n1 > n2 ? n1 : n2;
                        if (n1 == a)
                            printf ("z %d\n", n1);
                        if (n1 == b)
                            printf ("q %d\n", n1);
                        if (n1 == c)
                            printf ("s %d\n", n1);
                        if (n1 == d)
                            printf ("l %d\n", n1);
                        n2 = (162 - 122);
                        if (n2 == a)
                            printf ("z %d\n", n2);
                        if (n2 == b)
                            printf ("q %d\n", n2);
                        if (n2 == c)
                            printf ("s %d\n", n2);
                        if (n2 == d)
                            printf ("l %d\n", n2);
                        if (n3 == a)
                            printf ("z %d\n", n3);
                        if (n3 == b)
                            printf ("q %d\n", n3);
                        if (n3 == c)
                            printf ("s %d\n", n3);
                        if (n3 == d)
                            printf ("l %d\n", n3);
                        if (n4 == a)
                            printf ("z %d\n", n4);
                        if (n4 == b)
                            printf ("q %d\n", n4);
                        if (n4 == c)
                            printf ("s %d\n", n4);
                        if (n4 == d)
                            printf ("l %d\n", n4);
                    }
            }
        }
    }
    return 0;
}

