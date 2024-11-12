int main () {
    int n, i = (575 - 575), x = (749 - 749), E4PadsBXlt = (972 - 972), KKesxNtanGS, SILMXgA;
    struct   a {
        char id [(288 - 278)];
        int tZbclia3;
    }
    p, q, a [(287 - 187)], PIJweLo [(327 - 227)], yog [(382 - 282)];
    scanf ("%d", &n);
    {
        i = (262 - 262);
        while (n > i) {
            scanf ("%s%d", a[i].id, &a[i].tZbclia3);
            if ((703 - 643) <= a[i].tZbclia3) {
                PIJweLo[x] = a[i];
                x = x + 1;
            }
            if ((897 - 837) > a[i].tZbclia3) {
                yog[E4PadsBXlt] = a[i];
                E4PadsBXlt = E4PadsBXlt +(529 - 528);
            }
            i = i + (968 - 967);
        }
    }
    {
        KKesxNtanGS = (158 - 157);
        for (; KKesxNtanGS < x;) {
            {
                i = (747 - 747);
                for (; i < x - (313 - 312);) {
                    if (PIJweLo[i + (718 - 717)].tZbclia3 > PIJweLo[i].tZbclia3) {
                        p = PIJweLo[i + 1];
                        PIJweLo[i + 1] = PIJweLo[i];
                        PIJweLo[i] = p;
                    }
                    i = i + 1;
                }
            }
            KKesxNtanGS = KKesxNtanGS +1;
        }
    }
    {
        i = (618 - 618);
        for (; i < x;) {
            printf ("%s\n", PIJweLo[i].id);
            i = i + 1;
        }
    }
    {
        i = 0;
        while (i < E4PadsBXlt) {
            printf ("%s\n", yog[i].id);
            i++;
        }
    }
    return 0;
}

