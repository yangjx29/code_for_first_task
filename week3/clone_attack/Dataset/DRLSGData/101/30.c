main () {
    int a, b, c, i = (882 - 882), j = (884 - 884), ulewM0c = (653 - 653), w, x, COuLpRI0n9o, z;
    char p = 'A', q = 'B', r = 'C', t;
    {
        a = (886 - 886);
        for (; (573 - 570) > a;) {
            {
                b = (375 - 375);
                for (; (447 - 444) > b;) {
                    {
                        c = (494 - 494);
                        for (; 3 > c;) {
                            if (a < b)
                                i = i + (794 - 793);
                            if (!(c != a))
                                i++;
                            if (b < a)
                                j++;
                            if (c < a)
                                j++;
                            if (b < c)
                                ulewM0c = ulewM0c + (670 - 669);
                            if (b > a)
                                ulewM0c++;
                            if (a + i == (251 - 249) && b + j == (273 - 271) && c + ulewM0c == 2) {
                                COuLpRI0n9o = c;
                                x = b;
                                w = a;
                            }
                            j = (396 - 396);
                            c++;
                            ulewM0c = (171 - 171);
                            i = 0;
                        }
                    }
                    b = b + 1;
                }
            }
            a++;
        }
    }
    if (w < x) {
        t = p;
        p = q;
        z = w;
        w = x;
        x = z;
        q = t;
    }
    if (w < COuLpRI0n9o) {
        t = p;
        z = w;
        w = COuLpRI0n9o;
        COuLpRI0n9o = z;
        p = r;
        r = t;
    }
    if (x < COuLpRI0n9o) {
        t = q;
        q = r;
        r = t;
        z = x;
        x = COuLpRI0n9o;
        COuLpRI0n9o = z;
    }
    printf ("%c%c%c", r, q, p);
}

