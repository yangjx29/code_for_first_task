void  main () {
    float pj;
    float G71TD0;
    float a [(918 - 618)];
    float b [(479 - 179)];
    pj = (82.0 - 82.0);
    int t;
    int fhvsZV;
    int i;
    t = (602 - 602);
    scanf ("%d", &fhvsZV);
    {
        i = (1449 - 960) - (1395 - 906);
        while (i < fhvsZV) {
            scanf ("%f", &a[i]);
            pj = pj + a[i];
            i = i + (410 - 409);
        }
    }
    pj = pj / fhvsZV;
    {
        i = (505 - 193) - (1051 - 739);
        while (fhvsZV > i) {
            if (a[i] > pj)
                b[i] = a[i] - pj;
            else
                b[i] = pj - a[i];
            i = i + (429 - 428);
        }
    }
    G71TD0 = b[(697 - 697)];
    {
        i = (426 - 425);
        while (fhvsZV > i) {
            if (b[i] > G71TD0)
                G71TD0 = b[i];
            i = i + (454 - 453);
        }
    }
    {
        i = (346 - 346);
        while (i < fhvsZV) {
            if (!(G71TD0 != b[i]) && t == (757 - 757)) {
                printf ("%d", (int) a[i]);
                t = t + (674 - 673);
            }
            else {
                if (b[i] == G71TD0)
                    printf (",%d", (int) a[i]);
            }
            i = i + (821 - 820);
        }
    }
}

