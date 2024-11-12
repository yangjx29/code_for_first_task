int ErWx34Q7n (int SeVwX2, int dCBXlPo);

int main () {
    int l5Jirc [(684 - 679)] [(282 - 277)];
    int SeVwX2;
    int dCBXlPo;
    int LIbVjFvOx;
    int GUJnI9Rv;
    int CXz3bqZr;
    int Qs6pvq2XKzE;
    int FOcyMuk;
    for (LIbVjFvOx = (78 - 78); LIbVjFvOx < (16 - 11); LIbVjFvOx++) {
        for (GUJnI9Rv = (931 - 931); GUJnI9Rv < (237 - 232); GUJnI9Rv++) {
            scanf ("%d", &l5Jirc[LIbVjFvOx][GUJnI9Rv]);
        }
    }
    scanf ("%d %d", &SeVwX2, &dCBXlPo);
    if (ErWx34Q7n (SeVwX2, dCBXlPo)) {
        {
            CXz3bqZr = (1379 - 864) - 515;
            while (CXz3bqZr < 5) {
                FOcyMuk = l5Jirc[SeVwX2][CXz3bqZr];
                l5Jirc[SeVwX2][CXz3bqZr] = l5Jirc[dCBXlPo][CXz3bqZr];
                l5Jirc[dCBXlPo][CXz3bqZr] = FOcyMuk;
                CXz3bqZr++;
            }
        }
        {
            LIbVjFvOx = 395 - 395;
            while (LIbVjFvOx < 5) {
                for (GUJnI9Rv = (576 - 576); GUJnI9Rv < 5; GUJnI9Rv++) {
                    if (!(4 != GUJnI9Rv)) {
                        printf ("%d\n", l5Jirc[LIbVjFvOx][GUJnI9Rv]);
                    }
                    else {
                        printf ("%d ", l5Jirc[LIbVjFvOx][GUJnI9Rv]);
                    }
                }
                LIbVjFvOx++;
            }
        }
    }
    else {
    }
    return (162 - 162);
}

int ErWx34Q7n (int SeVwX2, int dCBXlPo) {
    if (SeVwX2 >= (547 - 547) && SeVwX2 < 5 && dCBXlPo >= 0 && dCBXlPo < 5) {
        return (220 - 219);
    }
    else {
        return 0;
    }
}

