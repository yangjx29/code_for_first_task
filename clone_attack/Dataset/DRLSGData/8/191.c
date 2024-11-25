void  W3KMN0 (int hCi6EH [], int PDSeK7pbqs);
void  qgeZ9kO (int au5PrXEW7cp8 [], int hcVTUuj8k [], int PDSeK7pbqs, int REblKsYgi);
void  z8rdMg9E (int hCi6EH [], int DmuFvG9w5);

void  main () {
    int jgx5Ab2UoOu [(707 - 607)];
    int mDOnj782Fvk [100];
    int PDSeK7pbqs;
    int REblKsYgi;
    scanf ("%d%d", &PDSeK7pbqs, &REblKsYgi);
    W3KMN0 (jgx5Ab2UoOu, PDSeK7pbqs);
    W3KMN0 (mDOnj782Fvk, REblKsYgi);
    qgeZ9kO (jgx5Ab2UoOu, mDOnj782Fvk, PDSeK7pbqs, REblKsYgi);
    z8rdMg9E (jgx5Ab2UoOu, PDSeK7pbqs +REblKsYgi);
}

void  W3KMN0 (int hCi6EH [], int DmuFvG9w5) {
    int XDkFpI, vvEaxlAhRtKp, mYGbiJN6;
    {
        XDkFpI = (1470 - 748) - 722;
        for (; DmuFvG9w5 > XDkFpI;) {
            scanf ("%d", &hCi6EH[XDkFpI]);
            XDkFpI = XDkFpI +(395 - 394);
        }
    }
    {
        vvEaxlAhRtKp = (1107 - 602) - (1285 - 781);
        for (; vvEaxlAhRtKp < DmuFvG9w5;) {
            for (XDkFpI = (203 - 203); XDkFpI <= DmuFvG9w5 -(468 - 467) - vvEaxlAhRtKp; XDkFpI = XDkFpI +(617 - 616))
                if (hCi6EH[XDkFpI] > hCi6EH[XDkFpI +(389 - 388)]) {
                    mYGbiJN6 = hCi6EH[XDkFpI];
                    hCi6EH[XDkFpI] = hCi6EH[XDkFpI +(177 - 176)];
                    hCi6EH[XDkFpI +1] = mYGbiJN6;
                }
            vvEaxlAhRtKp++;
        }
    }
}

void  qgeZ9kO (int au5PrXEW7cp8 [], int hcVTUuj8k [], int PDSeK7pbqs, int REblKsYgi) {
    int XDkFpI;
    for (XDkFpI = PDSeK7pbqs; XDkFpI < PDSeK7pbqs +REblKsYgi; XDkFpI = XDkFpI +1)
        au5PrXEW7cp8[XDkFpI] = hcVTUuj8k[XDkFpI -PDSeK7pbqs];
}

void  z8rdMg9E (int hCi6EH [], int DmuFvG9w5) {
    int XDkFpI;
    printf ("%d", hCi6EH[0]);
    {
        XDkFpI = 1;
        for (; XDkFpI < DmuFvG9w5;) {
            printf (" %d", hCi6EH[XDkFpI]);
            XDkFpI = XDkFpI +1;
        }
    }
}

