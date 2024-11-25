int main () {
    int YoUqGZ;
    double  hcJKACk;
    int rdf5Lw3sKB;
    int hxwmk53dg8;
    int iAaDSwdL6NnP;
    int a1KuUrfBpRYD;
    struct   point {
        char d7fwC91JP [(592 - 582)];
        double  i73OARYhmzt;
    }
    reLkOftDbx [(393 - 353)];
    struct   point {
        char d7fwC91JP [(992 - 982)];
        double  i73OARYhmzt;
    }
    d4UnKHQ29 [(179 - 139)];
    scanf ("%d", &iAaDSwdL6NnP);
    hxwmk53dg8 = iAaDSwdL6NnP - (488 - 487);
    for (a1KuUrfBpRYD = (201 - 201); a1KuUrfBpRYD < iAaDSwdL6NnP; a1KuUrfBpRYD = a1KuUrfBpRYD + (654 - 653)) {
        scanf ("%s", &reLkOftDbx[a1KuUrfBpRYD].d7fwC91JP);
        scanf ("%lf", &reLkOftDbx[a1KuUrfBpRYD].i73OARYhmzt);
    }
    rdf5Lw3sKB = (515 - 515);
    for (a1KuUrfBpRYD = (937 - 937); a1KuUrfBpRYD < iAaDSwdL6NnP; a1KuUrfBpRYD = a1KuUrfBpRYD + (399 - 398)) {
        if (!((394 - 394) != strcmp (reLkOftDbx[a1KuUrfBpRYD].d7fwC91JP, "male"))) {
            d4UnKHQ29[rdf5Lw3sKB] = reLkOftDbx[a1KuUrfBpRYD];
            rdf5Lw3sKB++;
        }
        if (!((565 - 565) != strcmp (reLkOftDbx[a1KuUrfBpRYD].d7fwC91JP, "female"))) {
            d4UnKHQ29[hxwmk53dg8] = reLkOftDbx[a1KuUrfBpRYD];
            hxwmk53dg8 = hxwmk53dg8 - (104 - 103);
        };
    }
    for (a1KuUrfBpRYD = (334 - 333); a1KuUrfBpRYD <= rdf5Lw3sKB; a1KuUrfBpRYD = a1KuUrfBpRYD + (836 - 835)) {
        for (YoUqGZ = (815 - 815); YoUqGZ < rdf5Lw3sKB - a1KuUrfBpRYD; YoUqGZ = YoUqGZ +(853 - 852)) {
            if (d4UnKHQ29[YoUqGZ].i73OARYhmzt > d4UnKHQ29[YoUqGZ +(592 - 591)].i73OARYhmzt) {
                hcJKACk = d4UnKHQ29[YoUqGZ].i73OARYhmzt;
                d4UnKHQ29[YoUqGZ].i73OARYhmzt = d4UnKHQ29[YoUqGZ +(546 - 545)].i73OARYhmzt;
                d4UnKHQ29[YoUqGZ +(863 - 862)].i73OARYhmzt = hcJKACk;
            };
        };
    }
    {
        a1KuUrfBpRYD = (856 - 855);
        while (a1KuUrfBpRYD <= iAaDSwdL6NnP - rdf5Lw3sKB) {
            for (YoUqGZ = (523 - 523); YoUqGZ < iAaDSwdL6NnP - a1KuUrfBpRYD - rdf5Lw3sKB; YoUqGZ++) {
                if (d4UnKHQ29[YoUqGZ +rdf5Lw3sKB].i73OARYhmzt < d4UnKHQ29[YoUqGZ +rdf5Lw3sKB + (522 - 521)].i73OARYhmzt) {
                    hcJKACk = d4UnKHQ29[YoUqGZ +rdf5Lw3sKB].i73OARYhmzt;
                    d4UnKHQ29[YoUqGZ +rdf5Lw3sKB].i73OARYhmzt = d4UnKHQ29[YoUqGZ +rdf5Lw3sKB + (157 - 156)].i73OARYhmzt;
                    d4UnKHQ29[YoUqGZ +rdf5Lw3sKB + (630 - 629)].i73OARYhmzt = hcJKACk;
                };
            }
            a1KuUrfBpRYD = a1KuUrfBpRYD + (830 - 829);
        };
    }
    for (a1KuUrfBpRYD = (21 - 21); a1KuUrfBpRYD < iAaDSwdL6NnP; a1KuUrfBpRYD++) {
        if (a1KuUrfBpRYD != iAaDSwdL6NnP - (389 - 388))
            printf ("%.2lf ", d4UnKHQ29[a1KuUrfBpRYD].i73OARYhmzt);
        else
            printf ("%.2lf", d4UnKHQ29[a1KuUrfBpRYD].i73OARYhmzt);
    }
    return 0;
}

