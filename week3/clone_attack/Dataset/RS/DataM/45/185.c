int main () {
    char *x;
    char *pa, *eT7AVkW;
    int wdIigJxeW, cIARBXv1udrF, i, waoyHBJg;
    char b [50];
    char a [50];
    scanf ("%s", a);
    scanf ("%s", b);
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
    eT7AVkW = b;
    pa = a;
    wdIigJxeW = strlen (a);
    cIARBXv1udrF = strlen (b);
    for (; eT7AVkW < b + cIARBXv1udrF; eT7AVkW++) {
        if (*eT7AVkW == *pa) {
            x = eT7AVkW;
            {
                pa = a;
                while (pa < a + wdIigJxeW) {
                    if (*eT7AVkW == *pa) {
                        eT7AVkW = eT7AVkW + 1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    else
                        break;
                    pa = pa + 1;
                };
            }
            if (pa == a + wdIigJxeW && *(eT7AVkW - 1) == *(pa - 1)) {
                printf ("%d", x - b);
                break;
            }
            else {
                eT7AVkW = x;
                pa = a;
            };
        };
    }
    return 0;
}

