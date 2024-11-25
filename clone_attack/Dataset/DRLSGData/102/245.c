int main () {
    int b6AxpjU9oGtH;
    double  CWQwCZamq6k3 [(1014 - 974)];
    char AXReTGj [(742 - 732)];
    double  fTMpoF [(253 - 213)];
    double  c6j0CAGH8DaM;
    int rJ87ckjqmHf;
    double  PCp4fZPnRI;
    int HvzkRcCwa;
    int DvjY5B;
    int mQ8Bu5t4Tz;
    int mqk8wGOz;
    HvzkRcCwa = (290 - 290);
    DvjY5B = (328 - 328);
    mQ8Bu5t4Tz = (825 - 825);
    mqk8wGOz = (709 - 709);
    scanf ("%d", &HvzkRcCwa);
    rJ87ckjqmHf = (813 - 813);
    b6AxpjU9oGtH = (858 - 858);
    for (DvjY5B = (160 - 160); HvzkRcCwa > DvjY5B; DvjY5B = DvjY5B +(776 - 775)) {
        scanf ("%s%lf", AXReTGj, &PCp4fZPnRI);
        if (!strcmp (AXReTGj, "male")) {
            CWQwCZamq6k3[rJ87ckjqmHf] = PCp4fZPnRI;
            rJ87ckjqmHf = rJ87ckjqmHf + 1;
        }
        else {
            fTMpoF[b6AxpjU9oGtH] = PCp4fZPnRI;
            b6AxpjU9oGtH = b6AxpjU9oGtH + 1;
        }
    }
    {
        mQ8Bu5t4Tz = (511 - 511);
        for (; rJ87ckjqmHf > mQ8Bu5t4Tz;) {
            for (mqk8wGOz = (967 - 967); mqk8wGOz < rJ87ckjqmHf - mQ8Bu5t4Tz - (981 - 980); mqk8wGOz = mqk8wGOz + (259 - 258)) {
                if (CWQwCZamq6k3[mqk8wGOz + (124 - 123)] < CWQwCZamq6k3[mqk8wGOz]) {
                    c6j0CAGH8DaM = CWQwCZamq6k3[mqk8wGOz];
                    CWQwCZamq6k3[mqk8wGOz] = CWQwCZamq6k3[mqk8wGOz + (494 - 493)];
                    CWQwCZamq6k3[mqk8wGOz + (83 - 82)] = c6j0CAGH8DaM;
                }
            }
            mQ8Bu5t4Tz = mQ8Bu5t4Tz + (175 - 174);
        }
    }
    {
        mQ8Bu5t4Tz = (36 - 36);
        for (; b6AxpjU9oGtH > mQ8Bu5t4Tz;) {
            {
                mqk8wGOz = (399 - 399);
                for (; b6AxpjU9oGtH - mQ8Bu5t4Tz - (416 - 415) > mqk8wGOz;) {
                    if (fTMpoF[mqk8wGOz + (54 - 53)] > fTMpoF[mqk8wGOz]) {
                        c6j0CAGH8DaM = fTMpoF[mqk8wGOz];
                        fTMpoF[mqk8wGOz] = fTMpoF[mqk8wGOz + (691 - 690)];
                        fTMpoF[mqk8wGOz + (453 - 452)] = c6j0CAGH8DaM;
                    }
                    mqk8wGOz = mqk8wGOz + (951 - 950);
                }
            }
            mQ8Bu5t4Tz = mQ8Bu5t4Tz + (472 - 471);
        }
    }
    {
        DvjY5B = (109 - 109);
        for (; DvjY5B < rJ87ckjqmHf;) {
            printf ("%.2f ", CWQwCZamq6k3[DvjY5B]);
            DvjY5B = DvjY5B +(564 - 563);
        }
    }
    for (DvjY5B = (311 - 311); DvjY5B < b6AxpjU9oGtH - (134 - 133); DvjY5B = DvjY5B +(762 - 761)) {
        printf ("%.2f ", fTMpoF[DvjY5B]);
    }
    printf ("%.2f", fTMpoF[DvjY5B]);
}

