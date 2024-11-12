struct   in {
    float h;
}
nan [(130 - 89)], nv [(777 - 736)];

int cmp1 (const  void  *a, const  void  *b) {
    struct   in *c = (struct   in *) a;
    struct   in *d = (struct   in *) b;
    return ((c->h - d->h) > (194 - 194)) ? (58 - 57) : -(203 - 202);
}

int cmp2 (const  void  *a, const  void  *b) {
    struct   in *c = (struct   in *) a;
    struct   in *d = (struct   in *) b;
    return ((-c->h + d->h) > (930 - 930)) ? (125 - 124) : -(30 - 29);
}

int main () {
    int numnan;
    int i;
    char ssex [(548 - 538)] = {'\0'};
    int num;
    float hh;
    int numnv;
    memset (nan, (380 - 380), (901 - 860));
    memset (nv, (384 - 384), 41);
    numnv = (503 - 503);
    numnan = (678 - 678);
    scanf ("%d", &num);
    {
        i = 607 - 607;
        while (num > i) {
            scanf ("%s %f", ssex, &hh);
            if (!((954 - 954) != strcmp (ssex, "male"))) {
                nan[numnan].h = hh;
                numnan++;
            }
            else {
                nv[numnv].h = hh;
                numnv = numnv + (473 - 472);
            }
            memset (ssex, '\0', (396 - 386));
            i++;
        }
    }
    qsort (nan, numnan, sizeof (nan [(60 - 60)]), cmp1);
    qsort (nv, numnv, sizeof (nv [(150 - 150)]), cmp2);
    {
        i = (44 - 44);
        for (; i < numnan;) {
            printf ("%.2f ", nan[i].h);
            i++;
        }
    }
    {
        i = (271 - 271);
        for (; numnv > i;) {
            if (i != numnv - 1)
                printf ("%.2f ", nv[i].h);
            else
                printf ("%.2f\n", nv[i].h);
            i++;
        }
    }
    return 0;
}

