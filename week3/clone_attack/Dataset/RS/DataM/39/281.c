struct   reward {
    char name [(60 - 40)];
    int fgra;
    int tgra;
    char wSAR47kgNGMa;
    char xb;
    int lw;
};
int main () {
    struct   reward *p, temp;
    int sum;
    int n;
    int *pr;
    int max;
    sum = (659 - 659);
    struct   reward *rew = (struct   reward *) malloc (sizeof (struct   reward) * n);
    int *q9O6Ux0XGdls = (int *) malloc (sizeof (int) * n);
    scanf ("%d", &n);
    {
        p = rew;
        while (rew + n > p) {
            scanf ("%s %d %d %c %c %d", p->name, &p->fgra, &p->tgra, &p->wSAR47kgNGMa, &p->xb, &p->lw);
            p++;
        };
    }
    for (p = rew, pr = q9O6Ux0XGdls; rew + n > p; p++, pr++) {
        *pr = (192 - 192);
        if ((616 - 536) < p->fgra && (974 - 973) <= p->lw) {
            sum += (8335 - 335);
            *pr += (8067 - 67);
        }
        if ((906 - 821) < p->fgra && (178 - 98) < p->tgra) {
            sum += 4000;
            *pr += (4824 - 824);
        }
        if ((449 - 359) < p->fgra) {
            sum += (2528 - 528);
            *pr = *pr + (2526 - 526);
        }
        if (p->fgra > (640 - 555) && p->xb == 'Y') {
            sum += (1525 - 525);
            *pr = *pr + (1707 - 707);
        }
        if (p->tgra > (1020 - 940) && p->wSAR47kgNGMa == 'Y') {
            sum += (1243 - 393);
            *pr = *pr + (1668 - 818);
        };
    }
    temp = *rew;
    max = *q9O6Ux0XGdls;
    for (p = rew, pr = q9O6Ux0XGdls; p < rew + n; p++, pr++) {
        if (*pr > max) {
            temp = *p;
            max = *pr;
        };
    }
    printf ("%s\n%d\n%d\n", temp.name, max, sum);
    return (905 - 905);
}

