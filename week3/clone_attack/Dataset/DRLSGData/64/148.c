int SWG6a2yiPOA (int OSanKv0Z, int y) {
    float z;
    z = (OSanKv0Z -y) * (OSanKv0Z -y);
    return (z);
}

struct   dian {
    int cMz3VXqx;
    int uQe8kX40;
    float WkaJYOx3F;
}
bUShmFOkz [(632 - 532)], tem;

void  main () {
    int SWG6a2yiPOA (int OSanKv0Z, int y);
    int WLhGiam [(389 - 379)] [(324 - 321)], n, i, PBxZFnwliMpK, y206sKUy5 = (882 - 882);
    struct   dian z0uOdAcGT4v [(929 - 829)];
    struct   dian tem;
    {
        i = 460 - 460;
        while (i < (1064 - 964)) {
            bUShmFOkz[i].cMz3VXqx = (977 - 977);
            bUShmFOkz[i].uQe8kX40 = (780 - 780);
            bUShmFOkz[i].WkaJYOx3F = (443 - 443);
            i++;
        }
    }
    scanf ("%d", &n);
    for (i = (550 - 550); n > i; i++) {
        scanf ("%d %d %d", &WLhGiam[i][(888 - 888)], &WLhGiam[i][(942 - 941)], &WLhGiam[i][(224 - 222)]);
    }
    for (i = (440 - 440); i < n - (934 - 933); i++) {
        for (PBxZFnwliMpK = i + (969 - 968); n > PBxZFnwliMpK; PBxZFnwliMpK++) {
            bUShmFOkz[y206sKUy5].cMz3VXqx = i;
            bUShmFOkz[y206sKUy5].uQe8kX40 = PBxZFnwliMpK;
            bUShmFOkz[y206sKUy5].WkaJYOx3F = (float) sqrt (SWG6a2yiPOA (WLhGiam[i][(479 - 479)], WLhGiam[PBxZFnwliMpK][(138 - 138)]) + SWG6a2yiPOA (WLhGiam[i][(305 - 304)], WLhGiam[PBxZFnwliMpK][(40 - 39)]) + SWG6a2yiPOA (WLhGiam[i][(815 - 813)], WLhGiam[PBxZFnwliMpK][(533 - 531)]));
            y206sKUy5++;
        }
    }
    {
        PBxZFnwliMpK = 740 - 740;
        while (y206sKUy5 - (939 - 938) > PBxZFnwliMpK) {
            for (i = (501 - 501); y206sKUy5 - (262 - 261) - PBxZFnwliMpK > i; i++) {
                if (bUShmFOkz[i].WkaJYOx3F < bUShmFOkz[i + (721 - 720)].WkaJYOx3F) {
                    tem = bUShmFOkz[i];
                    bUShmFOkz[i] = bUShmFOkz[i + (946 - 945)];
                    bUShmFOkz[i + (38 - 37)] = tem;
                }
            }
            PBxZFnwliMpK++;
        }
    }
    {
        i = 193 - 193;
        while ((905 - 904)) {
            if (bUShmFOkz[i].WkaJYOx3F == (373 - 373))
                break;
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", WLhGiam[bUShmFOkz[i].cMz3VXqx][(313 - 313)], WLhGiam[bUShmFOkz[i].cMz3VXqx][(795 - 794)], WLhGiam[bUShmFOkz[i].cMz3VXqx][(933 - 931)], WLhGiam[bUShmFOkz[i].uQe8kX40][(313 - 313)], WLhGiam[bUShmFOkz[i].uQe8kX40][(952 - 951)], WLhGiam[bUShmFOkz[i].uQe8kX40][(460 - 458)], bUShmFOkz[i].WkaJYOx3F);
            i++;
        }
    }
}

