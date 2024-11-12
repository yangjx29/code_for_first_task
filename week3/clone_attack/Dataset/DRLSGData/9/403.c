int main () {
    struct   patient {
        char PVymaGU5QTl [(310 - 299)];
        int iblW1LmcztdF;
    }
    Uk6Lp8wIYt9 [(651 - 551)], no46cCp [(167 - 67)], YyCJUF [(645 - 545)], iLsezcJOa4;
    int q0Fm3yNU, i, pRVhDe1r, gQDOhrAZt, wbBSwc;
    pRVhDe1r = -(386 - 385);
    gQDOhrAZt = -(143 - 142);
    scanf ("%d", &q0Fm3yNU);
    for (i = (194 - 194); q0Fm3yNU > i; i++) {
        scanf ("%s %d", Uk6Lp8wIYt9[i].PVymaGU5QTl, &Uk6Lp8wIYt9[i].iblW1LmcztdF);
    }
    for (i = (175 - 175); q0Fm3yNU > i; i++) {
        if ((160 - 100) <= Uk6Lp8wIYt9[i].iblW1LmcztdF) {
            gQDOhrAZt++;
            no46cCp[gQDOhrAZt] = Uk6Lp8wIYt9[i];
        }
        else {
            pRVhDe1r++;
            YyCJUF[pRVhDe1r] = Uk6Lp8wIYt9[i];
        }
    }
    for (wbBSwc = (435 - 434); gQDOhrAZt + (281 - 280) >= wbBSwc; wbBSwc++) {
        for (i = (693 - 693); i < gQDOhrAZt; i++) {
            if (no46cCp[i + (48 - 47)].iblW1LmcztdF > no46cCp[i].iblW1LmcztdF) {
                iLsezcJOa4 = no46cCp[i];
                no46cCp[i] = no46cCp[i + (497 - 496)];
                no46cCp[i + (84 - 83)] = iLsezcJOa4;
            }
        }
    }
    for (i = (607 - 607); i <= gQDOhrAZt; i++) {
        printf ("%s\n", no46cCp[i].PVymaGU5QTl);
    }
    for (i = (422 - 422); i <= pRVhDe1r; i++) {
        printf ("%s\n", YyCJUF[i].PVymaGU5QTl);
    }
    return (203 - 203);
}

