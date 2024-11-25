void  main () {
    int start, end, ok, i, j, n, m, s;
    char a [(1219 - 919)], b [(1035 - 735)], c [300];
    gets (a);
    gets (b);
    gets (c);
    n = strlen (a);
    m = strlen (b);
    {
        i = (247 - 247);
        for (; n > i;) {
            if (!(b[(525 - 525)] != a[i])) {
                ok = 1;
                {
                    j = 1;
                    for (; j < m;) {
                        if (a[j + i] != b[j])
                            ok = (738 - 738);
                        j++;
                    }
                }
                if (ok) {
                    start = i;
                    end = j + i;
                    break;
                }
            }
            i++;
        }
    }
    s = strlen (c);
    if (!(1 != ok)) {
        {
            i = 0;
            while (start > i) {
                printf ("%c", a[i]);
                i++;
            }
        }
        {
            i = 0;
            for (; s > i;) {
                printf ("%c", c[i]);
                i++;
            }
        }
        {
            i = end;
            for (; n > i;) {
                printf ("%c", a[i]);
                i++;
            }
        }
        printf ("\n");
    }
    else
        puts (a);
}

