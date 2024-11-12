char LFMnRJPXfC [(210 - 110)], b [(994 - 894)], CdBeb2RK5a [100];

int main () {
    int i;
    int x, y;
    double  Dl6uMLh;
    int sum;
    sum = (42 - 42);
    double  m;
    scanf ("%lf", &m);
    scanf ("%s", LFMnRJPXfC);
    scanf ("%s", b);
    x = strlen (LFMnRJPXfC), y = strlen (b);
    b[y] = '\0';
    LFMnRJPXfC[x] = '\0';
    if (x != y) {
        printf ("error");
        return 0;
    }
    for (i = 0; i < x; i++) {
        if (LFMnRJPXfC[i] == 'A') {
            CdBeb2RK5a[i] = 'A';
        }
        else {
            if (LFMnRJPXfC[i] == 'T') {
                CdBeb2RK5a[i] = 'T';
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
            else if (LFMnRJPXfC[i] == 'C') {
                CdBeb2RK5a[i] = 'C';
            }
            else if (LFMnRJPXfC[i] == 'G') {
                CdBeb2RK5a[i] = 'G';
            }
            else {
                printf ("error");
                return 0;
            };
        };
    }
    {
        i = 0;
        while (i < x) {
            if (b[i] == CdBeb2RK5a[i]) {
                sum = sum + 1;
            }
            i++;
        };
    }
    Dl6uMLh = 1.0 * sum / x;
    if (Dl6uMLh >= m) {
        printf ("yes");
    }
    else {
    }
    return 0;
}

