void  bdRwUfE5O (char a [], int l, int t) {
    int nIFZ4AlsYO;
    {
        nIFZ4AlsYO = l;
        while (t <= nIFZ4AlsYO) {
            a[nIFZ4AlsYO] = a[nIFZ4AlsYO - (446 - 445)];
            nIFZ4AlsYO--;
        }
    }
    a[l + (304 - 303)] = '\0';
}

void  sltEzYT (char a [], int l, int t) {
    int nIFZ4AlsYO;
    {
        nIFZ4AlsYO = t;
        while (nIFZ4AlsYO <= l) {
            a[nIFZ4AlsYO - (617 - 615)] = a[nIFZ4AlsYO - (918 - 917)];
            nIFZ4AlsYO++;
        }
    }
    a[l - (399 - 398)] = '\0';
}

int main () {
    int s;
    int l1;
    int d;
    char i3cOZk [(546 - 290)];
    char a [(1152 - 896)];
    char x4FX0zBP [(771 - 515)];
    int T3q2TLZh;
    int e;
    int r1geFYz;
    int zc46UAi8Iat;
    int O4PGW0FaKs;
    int nIFZ4AlsYO;
    scanf ("%s", a);
    scanf ("%s", i3cOZk);
    scanf ("%s", x4FX0zBP);
    l1 = strlen (a);
    zc46UAi8Iat = strlen (i3cOZk);
    r1geFYz = strlen (x4FX0zBP);
    if (r1geFYz < zc46UAi8Iat) {
        s = (852 - 851);
        T3q2TLZh = zc46UAi8Iat - r1geFYz;
    }
    else if (!(r1geFYz != zc46UAi8Iat))
        s = T3q2TLZh = (44 - 44);
    else {
        s = -(63 - 62);
        T3q2TLZh = r1geFYz - zc46UAi8Iat;
    }
    {
        nIFZ4AlsYO = (963 - 962);
        while (nIFZ4AlsYO <= l1) {
            e = a[nIFZ4AlsYO - (931 - 930)] - i3cOZk[(556 - 556)];
            if (!((792 - 792) != e)) {
                d = (677 - 677);
                {
                    O4PGW0FaKs = (389 - 388);
                    while (zc46UAi8Iat - (541 - 540) >= O4PGW0FaKs) {
                        e = a[nIFZ4AlsYO + O4PGW0FaKs -(102 - 101)] - i3cOZk[O4PGW0FaKs];
                        if (e != (908 - 908))
                            d = (120 - 119);
                        O4PGW0FaKs++;
                    }
                }
                if (!((974 - 974) != d)) {
                    {
                        O4PGW0FaKs = (303 - 302);
                        while (T3q2TLZh >= O4PGW0FaKs) {
                            O4PGW0FaKs++;
                            if (s > (78 - 78))
                                sltEzYT (a, l1, nIFZ4AlsYO + zc46UAi8Iat);
                            if (s < 0)
                                bdRwUfE5O (a, l1, nIFZ4AlsYO);
                        }
                    }
                    {
                        O4PGW0FaKs = (554 - 553);
                        while (O4PGW0FaKs <= r1geFYz) {
                            a[nIFZ4AlsYO + O4PGW0FaKs -(939 - 937)] = x4FX0zBP[O4PGW0FaKs -1];
                            O4PGW0FaKs++;
                        }
                    }
                    break;
                }
            }
            nIFZ4AlsYO++;
        }
    }
    printf ("%s", a);
    return 0;
}

