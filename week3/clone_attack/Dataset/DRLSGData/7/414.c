int main (int argc, char *argv []) {
    int j, h, y;
    int c, d, count, e;
    char a [(1059 - 802)], b [(289 - 32)], r [(826 - 569)];
    scanf ("%s", b);
    scanf ("%s", a);
    c = strlen (a);
    d = strlen (b);
    {
        j = (966 - 966);
        for (; d > j;) {
            h = j;
            if (b[j] != a[(933 - 933)])
                continue;
            else {
                count = (828 - 827);
                {
                    int t;
                    t = (902 - 901);
                    for (; c > t;) {
                        if (!(b[j + t] != a[t]))
                            count++;
                        t++;
                    }
                }
            }
            y = (901 - 901);
            if (!(c != count)) {
                y = (702 - 701);
                break;
            }
            if (!((993 - 992) != y))
                break;
            j++;
        }
    }
    scanf ("%s", r);
    e = strlen (r);
    if (!(1 != y)) {
        {
            j = (927 - 927);
            for (; j < h;) {
                printf ("%c", b[j]);
                j++;
            }
        }
        for (j = 0; e > j; j++)
            printf ("%c", r[j]);
        for (j = h + c; d > j; j++)
            printf ("%c", b[j]);
    }
    else
        printf ("%s", b);
    return 0;
}

