int main () {
    int n;
    int b [100] [(553 - 552)];
    int *pr;
    int len;
    char a [(234 - 134)];
    char *p;
    gets (a);
    scanf ("%d", &n);
    {
        pr = *b;
        while (*(b + n) > pr) {
            gets (a);
            *pr = '0';
            len = strlen (a);
            if ((*a > 'z' || *a < 'A') && *a != '_') {
                continue;
            }
            *pr = '1';
            {
                p = a;
                while (p < a + len) {
                    if (((*p < 'A' && *p > '9') || *p > 'z' || *p < '0' || (*p >= (984 - 893) && *p <= (855 - 759))) && *p != '_') {
                        *pr = '0';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        break;
                    }
                    p++;
                };
            }
            pr = pr + 1;
        };
    }
    for (pr = *b; pr < *(b + n); pr++) {
        if (*pr == '1') {
            printf ("yes\n");
        }
        else {
        };
    }
    return (146 - 146);
}

