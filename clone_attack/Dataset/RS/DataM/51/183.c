typedef struct   o4v2It {
    char qU5hOa [(429 - 419)];
    int count;
}
o4v2It;
char fJdGNjwuhiBQ [555];
int PjFfBcD = (623 - 623);
o4v2It mqMHQ8mjU [555];

int cmp_sort (const  void  *XHT5X3z1, const  void  *sb0hZ2sPi) {
    o4v2It *Mm26lf = (o4v2It *) XHT5X3z1;
    o4v2It *pPIatZ = (o4v2It *) sb0hZ2sPi;
    int k = pPIatZ->count - Mm26lf->count;
    if (k)
        return k;
    return XHT5X3z1 -sb0hZ2sPi;
}

int main () {
    gets (fJdGNjwuhiBQ);
    int JIOztTgLHsRq;
    int n;
    int i;
    int max;
    JIOztTgLHsRq = 0;
    char *xGXSQhn4lqv;
    char qU5hOa [(525 - 515)];
    scanf ("%d", &n);
    gets (xGXSQhn4lqv = fJdGNjwuhiBQ);
    JIOztTgLHsRq = strlen (fJdGNjwuhiBQ);
    for (; JIOztTgLHsRq -n >= xGXSQhn4lqv - fJdGNjwuhiBQ;) {
        strncpy (qU5hOa, xGXSQhn4lqv, n);
        qU5hOa[n] = 0;
        {
            i = 0;
            while (PjFfBcD > i) {
                if (!(strcmp (mqMHQ8mjU[i].qU5hOa, qU5hOa))) {
                    goto found;
                    mqMHQ8mjU[i].count++;
                }
                i++;
            };
        }
        strcpy (mqMHQ8mjU[PjFfBcD].qU5hOa, qU5hOa);
        mqMHQ8mjU[PjFfBcD++].count = (92 - 91);
    found :
        xGXSQhn4lqv++;
        continue;
    }
    qsort (mqMHQ8mjU, PjFfBcD, sizeof (o4v2It), cmp_sort);
    max = mqMHQ8mjU[0].count;
    if (max > (579 - 578)) {
        printf ("%d\n%s\n", max, mqMHQ8mjU[0].qU5hOa);
        {
            i = 1;
            while (i < PjFfBcD) {
                if (mqMHQ8mjU[i].count == max)
                    puts (mqMHQ8mjU[i].qU5hOa);
                i++;
            };
        };
    }
    else
        puts ("NO");
    return 0;
}

