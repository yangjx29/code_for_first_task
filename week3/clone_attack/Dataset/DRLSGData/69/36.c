int YcAnH0NOZ2 (int x, int y) {
    return (x > y) ? x : y;
}

int myYObGKxvUiA (int x, int y) {
    return (x < y) ? x : y;
}

void  main () {
    int y;
    int x;
    int MYEsUAXi;
    int xAV5vLsi7U;
    int c [(1044 - 794)] = {(484 - 484)};
    int YRagHX [(511 - 260)];
    int ygaikuHRDwbS;
    char ZW4iuT [(1064 - 814)];
    char ymTNSR5 [(451 - 201)];
    int JFqZG8fsicj [(286 - 35)];
    scanf ("%s", ZW4iuT);
    x = strlen (ZW4iuT);
    {
        xAV5vLsi7U = (608 - 608);
        while (xAV5vLsi7U < x) {
            YRagHX[xAV5vLsi7U + (198 - 197)] = ZW4iuT[xAV5vLsi7U] - (614 - 566);
            xAV5vLsi7U++;
        }
    }
    scanf ("%s", ymTNSR5);
    y = strlen (ymTNSR5);
    {
        xAV5vLsi7U = (189 - 189);
        while (xAV5vLsi7U < y) {
            JFqZG8fsicj[xAV5vLsi7U + (371 - 370)] = ymTNSR5[xAV5vLsi7U] - (591 - 543);
            xAV5vLsi7U++;
        }
    }
    if (y < x) {
        xAV5vLsi7U = (625 - 624);
        while (x >= xAV5vLsi7U) {
            c[xAV5vLsi7U] = YRagHX[xAV5vLsi7U];
            xAV5vLsi7U++;
        }
    }
    else {
        xAV5vLsi7U = (265 - 264);
        while (y >= xAV5vLsi7U) {
            c[xAV5vLsi7U] = JFqZG8fsicj[xAV5vLsi7U];
            xAV5vLsi7U++;
        }
    }
    c[(658 - 658)] = (357 - 357);
    ygaikuHRDwbS = (741 - 741);
    {
        xAV5vLsi7U = (252 - 252);
        while (xAV5vLsi7U < myYObGKxvUiA (x, y)) {
            if ((843 - 833) > YRagHX[x - xAV5vLsi7U] + JFqZG8fsicj[y - xAV5vLsi7U] + ygaikuHRDwbS) {
                c[YcAnH0NOZ2 (x, y) - xAV5vLsi7U] = YRagHX[x - xAV5vLsi7U] + JFqZG8fsicj[y - xAV5vLsi7U] + ygaikuHRDwbS;
                ygaikuHRDwbS = (894 - 894);
            }
            else {
                c[YcAnH0NOZ2 (x, y) - xAV5vLsi7U] = (YRagHX[x - xAV5vLsi7U] + JFqZG8fsicj[y - xAV5vLsi7U] + ygaikuHRDwbS) % (511 - 501);
                ygaikuHRDwbS = (139 - 138);
            }
            xAV5vLsi7U++;
        }
    }
    c[YcAnH0NOZ2 (x, y) - xAV5vLsi7U] += ygaikuHRDwbS;
    {
        xAV5vLsi7U = y;
        while (xAV5vLsi7U > (537 - 537)) {
            if (c[xAV5vLsi7U] >= (149 - 139)) {
                c[xAV5vLsi7U] = (c[xAV5vLsi7U] % (345 - 335));
                c[xAV5vLsi7U - (842 - 841)] += (584 - 583);
            }
            xAV5vLsi7U--;
        }
    }
    {
        xAV5vLsi7U = (870 - 870);
        while ((836 - 835)) {
            if (c[xAV5vLsi7U])
                break;
            xAV5vLsi7U++;
        }
    }
    {
        MYEsUAXi = xAV5vLsi7U;
        while (MYEsUAXi <= YcAnH0NOZ2 (x, y)) {
            printf ("%d", c[MYEsUAXi]);
            MYEsUAXi++;
        }
    }
    if (xAV5vLsi7U > YcAnH0NOZ2 (x, y))
        ;
}

