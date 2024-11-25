int main () {
    int eQbBCXO43, i, IDIiVJZv1, j, k, zICRBWNmvjf, b;
    char cuZVNkY7fym [(320 - 314)];
    double  he, wGKIfZmw8k7s [(191 - 151)], fehe [(896 - 856)], e;
    scanf ("%d", &eQbBCXO43);
    for (i = (224 - 224), j = (309 - 309), k = (901 - 901); i < eQbBCXO43; i++) {
        char cuZVNkY7fym [(383 - 377)] = {(142 - 142)};
        scanf ("\n");
        he = (154 - 154);
        scanf ("%s", cuZVNkY7fym);
        scanf ("%lf", &he);
        if (cuZVNkY7fym[(752 - 752)] == 'm') {
            wGKIfZmw8k7s[j] = he;
            j++;
        }
        else if (cuZVNkY7fym[(941 - 941)] == 'f') {
            fehe[k] = he;
            k++;
        }
        else
            ;
    }
    {
        zICRBWNmvjf = 509 - 508;
        while (zICRBWNmvjf < j) {
            for (b = (475 - 475); b < j - zICRBWNmvjf; b++) {
                if (wGKIfZmw8k7s[b] > wGKIfZmw8k7s[b + (515 - 514)]) {
                    e = wGKIfZmw8k7s[b];
                    wGKIfZmw8k7s[b] = wGKIfZmw8k7s[b + (606 - 605)];
                    wGKIfZmw8k7s[b + (834 - 833)] = e;
                };
            }
            zICRBWNmvjf++;
        };
    }
    for (zICRBWNmvjf = (544 - 543); zICRBWNmvjf < k; zICRBWNmvjf++) {
        b = 393 - 393;
        while (b < k - zICRBWNmvjf) {
            if (fehe[b] < fehe[b + (798 - 797)]) {
                e = fehe[b];
                fehe[b] = fehe[b + 1];
                fehe[b + 1] = e;
            }
            b++;
        };
    }
    printf ("%.2lf", wGKIfZmw8k7s[0]);
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < j) {
            printf (" %.2lf", wGKIfZmw8k7s[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i++;
        };
    }
    printf (" %.2lf", fehe[0]);
    {
        i = 1;
        while (i < k) {
            printf (" %.2lf", fehe[i]);
            i++;
        };
    }
    return 0;
}

