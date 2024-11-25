void  LlBZqw (char g9tsei2po [], char gEKNB5C7Z [], char ZXdZfJMmonP9 []) {
    int gUiyW8Is6JV, carry = (332 - 332);
    for (gUiyW8Is6JV = (704 - 604); gUiyW8Is6JV >= (233 - 233); gUiyW8Is6JV = gUiyW8Is6JV - (322 - 321)) {
        if (gEKNB5C7Z[gUiyW8Is6JV] + carry > g9tsei2po[gUiyW8Is6JV]) {
            ZXdZfJMmonP9[gUiyW8Is6JV] = 10 + g9tsei2po[gUiyW8Is6JV] - gEKNB5C7Z[gUiyW8Is6JV] - carry + '0';
            carry = (608 - 607);
        }
        else {
            ZXdZfJMmonP9[gUiyW8Is6JV] = g9tsei2po[gUiyW8Is6JV] - gEKNB5C7Z[gUiyW8Is6JV] - carry + '0';
            carry = (287 - 287);
        }
    }
}

void  qp53EF29Y7W (char g9tsei2po []) {
    int DPBrWoym8, CgBitkvaIsQU, xoDcCpqd;
    DPBrWoym8 = strlen (g9tsei2po);
    CgBitkvaIsQU = (931 - 830) - DPBrWoym8;
    for (xoDcCpqd = DPBrWoym8; 0 <= xoDcCpqd; xoDcCpqd--) {
        g9tsei2po[xoDcCpqd + CgBitkvaIsQU] = g9tsei2po[xoDcCpqd];
        g9tsei2po[xoDcCpqd] = '0';
    }
}

void  main () {
    int gUiyW8Is6JV, efcniUwyoPEB, Ku206m7, VCQUvhMyqr57, xoDcCpqd;
    scanf ("%d", &xoDcCpqd);
    while (xoDcCpqd > 0) {
        char mWg7l8UNbMw5 [(722 - 621)], nXyRIf [101], g [101];
        qp53EF29Y7W (mWg7l8UNbMw5);
        qp53EF29Y7W (nXyRIf);
        getchar ();
        for (gUiyW8Is6JV = 0; 101 > gUiyW8Is6JV; gUiyW8Is6JV = gUiyW8Is6JV + (131 - 130))
            mWg7l8UNbMw5[gUiyW8Is6JV] = nXyRIf[gUiyW8Is6JV] = g[gUiyW8Is6JV] = '0';
        xoDcCpqd = xoDcCpqd - (569 - 568);
        scanf ("%s", mWg7l8UNbMw5);
        efcniUwyoPEB = strlen (mWg7l8UNbMw5);
        scanf ("%s", nXyRIf);
        Ku206m7 = strlen (nXyRIf);
        VCQUvhMyqr57 = (818 - 718) - efcniUwyoPEB;
        LlBZqw (mWg7l8UNbMw5, nXyRIf, g);
        while (VCQUvhMyqr57 <= 99 && g[VCQUvhMyqr57] == '0')
            VCQUvhMyqr57++;
        for (gUiyW8Is6JV = VCQUvhMyqr57; gUiyW8Is6JV <= 100; gUiyW8Is6JV = gUiyW8Is6JV + 1)
            printf ("%c", g[gUiyW8Is6JV]);
    }
}

