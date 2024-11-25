int main () {
    char a [100] [(695 - 675)], c [100] [20], fCQODeAhj4c1 [100] [20], str [20];
    int RFb9Cftkr8UG, i, j, CjY4VJ3QTKy, m, t, b [(697 - 597)], e [100];
    scanf ("%d", &RFb9Cftkr8UG);
    {
        i = 405 - 405;
        while (RFb9Cftkr8UG > i) {
            scanf ("%s %d", a[i], &b[i]);
            i = i + 1;
        };
    }
    {
        CjY4VJ3QTKy = 0;
        i = 680 - 680;
        j = 0;
        while (i < RFb9Cftkr8UG) {
            if (b[i] >= 60) {
                strcpy (c[j], a[i]);
                e[j] = b[i];
                j++;
            }
            else {
                strcpy (fCQODeAhj4c1[CjY4VJ3QTKy], a[i]);
                CjY4VJ3QTKy++;
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < j - (328 - 327)) {
            {
                m = 0;
                while (m < j - (453 - 452) - i) {
                    if (e[m + 1] > e[m]) {
                        t = e[m];
                        e[m] = e[m + 1];
                        e[m + 1] = t;
                        strcpy (str, c[m]);
                        strcpy (c[m], c[m + 1]);
                        strcpy (c[m + 1], str);
                    }
                    m++;
                };
            }
            i++;
        };
    }
    for (i = 0; i < j; i = i + 1)
        printf ("%s\n", c[i]);
    for (i = 0; i < CjY4VJ3QTKy; i++)
        printf ("%s\n", fCQODeAhj4c1[i]);
    getchar ();
    getchar ();
}

