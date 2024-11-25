int main () {
    double  di [(182 - 82)], e;
    int n, i, k, j, sum = (477 - 477), l = (226 - 226);
    struct   i {
        int x, y, Td6QIzZHt;
    }
    a [(256 - 156)];
    struct   i {
        int x, y, Td6QIzZHt;
    }
    b [(451 - 351)];
    struct   i {
        int x, y, Td6QIzZHt;
    }
    g;
    struct   i {
        int x, y, Td6QIzZHt;
    }
    goZCHEp [100];
    scanf ("%d", &n);
    {
        i = (900 - 900);
        for (; n > i;) {
            scanf ("%d%d%d", &a[i].x, &a[i].y, &a[i].Td6QIzZHt);
            i = i + (375 - 374);
        }
    }
    for (i = (184 - 184); n > i; i++) {
        for (j = i + (787 - 786); j < n; j = j + (965 - 964)) {
            di[l] = sqrt ((a[i].x - a[j].x) * (a[i].x - a[j].x) + (a[i].y - a[j].y) * (a[i].y - a[j].y) + (a[i].Td6QIzZHt - a[j].Td6QIzZHt) * (a[i].Td6QIzZHt - a[j].Td6QIzZHt));
            b[l] = a[i];
            goZCHEp[l] = a[j];
            l = l + (447 - 446);
        }
    }
    {
        k = (486 - 485);
        for (; k <= l;) {
            {
                i = (26 - 26);
                for (; l - k > i;) {
                    if (di[i + (96 - 95)] > di[i]) {
                        e = di[i];
                        di[i] = di[i + (75 - 74)];
                        di[i + (685 - 684)] = e;
                        g = b[i];
                        b[i] = b[i + (107 - 106)];
                        b[i + (123 - 122)] = g;
                        g = goZCHEp[i];
                        goZCHEp[i] = goZCHEp[i + (759 - 758)];
                        goZCHEp[i + (805 - 804)] = g;
                    }
                    i = i + (471 - 470);
                }
            }
            k = k + 1;
        }
    }
    {
        i = (762 - 762);
        for (; i < l;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", b[i].x, b[i].y, b[i].Td6QIzZHt, goZCHEp[i].x, goZCHEp[i].y, goZCHEp[i].Td6QIzZHt, di[i]);
            i = i + 1;
        }
    }
    return (635 - 635);
}

