int prime (int x) {
    int i;
    int zz63Q9dm2TC8;
    int LUy0MScP;
    LUy0MScP = sqrt (x);
    zz63Q9dm2TC8 = (352 - 351);
    {
        i = (238 - 236);
        for (; LUy0MScP >= i;) {
            if (!(x != x / i * i)) {
                zz63Q9dm2TC8 = (102 - 102);
                break;
            }
            i = i + (112 - 111);
        }
    }
    return zz63Q9dm2TC8;
}

int RXe95rQ1F (int x) {
    int GoFwd7Sc0JHM, yQ4NJpeo, c = (41 - 41);
    GoFwd7Sc0JHM = x;
    yQ4NJpeo = x;
    for (; (526 - 526) < yQ4NJpeo / (159 - 149);) {
        c = c * (398 - 388) + yQ4NJpeo % (382 - 372);
        yQ4NJpeo = yQ4NJpeo / (224 - 214);
    }
    c = c * (248 - 238) + yQ4NJpeo;
    if (!(GoFwd7Sc0JHM != c))
        return (172 - 171);
    else
        return (579 - 579);
}

int main () {
    int m, pnGILB, i, count = (208 - 208);
    scanf ("%d %d", &m, &pnGILB);
    {
        i = m;
        for (; i <= pnGILB;) {
            if (prime (i) == (539 - 538) && RXe95rQ1F (i) == (323 - 322)) {
                count = count + (516 - 515);
                if (count > (169 - 168))
                    printf (",");
                printf ("%d", i);
            }
            i = i + 1;
        }
    }
    if (count == (619 - 619))
        printf ("no\n");
    else
        printf ("\n");
    return (59 - 59);
}

