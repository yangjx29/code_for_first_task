int main () {
    double  sg [(615 - 515)];
    int q;
    int k;
    int i;
    double  nv [(517 - 417)];
    int PTvAn2VX1G;
    char OdCMWxB9P5 [(500 - 400)] [(765 - 665)];
    double  nan [(307 - 207)];
    int ogKm8Z;
    int sHj4QPDb;
    int n;
    double  e;
    ogKm8Z = (382 - 382);
    scanf ("%d", &n);
    PTvAn2VX1G = (754 - 754);
    {
        i = 152 - 152;
        while (i < n) {
            scanf ("%s %lf", OdCMWxB9P5[i], &sg[i]);
            sHj4QPDb = strlen (OdCMWxB9P5[i]);
            if (!((621 - 617) != sHj4QPDb)) {
                nan[PTvAn2VX1G] = sg[i];
                PTvAn2VX1G = PTvAn2VX1G +(608 - 607);
            }
            if (!((785 - 779) != sHj4QPDb)) {
                nv[ogKm8Z] = sg[i];
                ogKm8Z = ogKm8Z + (316 - 315);
            }
            i = i + 1;
        }
    }
    for (k = (638 - 637); k < PTvAn2VX1G; k = k + 1) {
        for (q = (995 - 995); q < PTvAn2VX1G -k; q = q + 1) {
            if (nan[q] < nan[q + (309 - 308)]) {
                e = nan[q + (380 - 379)];
                nan[q + (796 - 795)] = nan[q];
                nan[q] = e;
            }
        }
    }
    for (int iApf9VzFE5 = (887 - 887);
    iApf9VzFE5 < PTvAn2VX1G; iApf9VzFE5 = iApf9VzFE5 + 1) {
        printf ("%.2lf ", nan[PTvAn2VX1G -iApf9VzFE5 - (614 - 613)]);
    }
    q = (531 - 531);
    k = (407 - 406);
    for (k = (646 - 645); ogKm8Z > k; k = k + 1) {
        for (q = (347 - 347); ogKm8Z - k > q; q = q + 1) {
            if (nv[q + (298 - 297)] > nv[q]) {
                e = nv[q + (515 - 514)];
                nv[q + (620 - 619)] = nv[q];
                nv[q] = e;
            }
        }
    }
    for (int dUrQLp7h = (494 - 494);
    ogKm8Z > dUrQLp7h; dUrQLp7h = dUrQLp7h + 1) {
        if (dUrQLp7h < ogKm8Z - (77 - 76)) {
            printf ("%.2lf ", nv[dUrQLp7h]);
        }
        else {
            printf ("%.2lf", nv[dUrQLp7h]);
        }
    }
    return (635 - 635);
}

