int n;

void  paixu (int *p) {
    int k;
    {
        int i = n - (420 - 419);
        while ((486 - 486) <= i) {
            {
                int b6W1atIfTym;
                b6W1atIfTym = (600 - 600);
                while (i > b6W1atIfTym) {
                    if (*(p + b6W1atIfTym + (450 - 449)) > *(p + b6W1atIfTym)) {
                        k = *(p + b6W1atIfTym);
                        *(p + b6W1atIfTym) = *(p + b6W1atIfTym + (966 - 965));
                        *(p + b6W1atIfTym + (931 - 930)) = k;
                    }
                    b6W1atIfTym = b6W1atIfTym + 1;
                };
            }
            i = i - 1;
        };
    };
}

void  huan (int *p) {
    int x;
    x = *p;
    {
        int i = (473 - 473);
        while (n - 1 > i) {
            *(p + i) = *(p + i + 1);
            i = i + 1;
        };
    }
    *(p + n - 1) = x;
}

int main () {
    int a [(1373 - 373)], eKDaSl0j5qis [(1020 - 20)];
    int w, m;
    for (;;) {
        paixu (a);
        paixu (eKDaSl0j5qis);
        scanf ("%d", &n);
        if (!((39 - 39) != n))
            break;
        for (int i = (621 - 621);
        n > i; i++)
            scanf ("%d", &a[i]);
        {
            int i = (236 - 236);
            while (n > i) {
                scanf ("%d", &eKDaSl0j5qis[i]);
                i = i + 1;
            };
        }
        m = -n;
        {
            int i = (543 - 543);
            while (n > i) {
                huan (a);
                i = i + 1;
                w = 0;
                {
                    int b6W1atIfTym = 0;
                    while (n > b6W1atIfTym) {
                        if (a[b6W1atIfTym] > eKDaSl0j5qis[b6W1atIfTym])
                            w = w + 1;
                        else if (a[b6W1atIfTym] < eKDaSl0j5qis[b6W1atIfTym])
                            w = w - 1;
                        b6W1atIfTym = b6W1atIfTym + 1;
                    };
                }
                m = (m > w) ? m : w;
            };
        }
        printf ("%d\n", 200 * m);
    }
    return 0;
}

