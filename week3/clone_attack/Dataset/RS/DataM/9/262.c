void  main () {
    struct   patient {
        char id [20];
        int YXIjTHn;
    }
    pLZeT3zuK92 [(968 - 868)];
    int wKqiLCMcQD, lGZaukq6, b [(440 - 340)], c [(134 - 34)], F1bphtXOcui = (921 - 921), k, mid, p, uP14UtIsO = (544 - 544), ZvLN5VGxl0FM;
    scanf ("%d", &wKqiLCMcQD);
    {
        lGZaukq6 = 223 - 223;
        while (wKqiLCMcQD > lGZaukq6) {
            scanf ("%s %d", pLZeT3zuK92[lGZaukq6].id, &pLZeT3zuK92[lGZaukq6].YXIjTHn);
            lGZaukq6 = lGZaukq6 + 1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (lGZaukq6 = (766 - 766); wKqiLCMcQD > lGZaukq6; lGZaukq6 = lGZaukq6 + 1) {
        if ((693 - 633) <= pLZeT3zuK92[lGZaukq6].YXIjTHn) {
            b[F1bphtXOcui++] = lGZaukq6;
        }
        else
            c[uP14UtIsO++] = lGZaukq6;
    }
    for (lGZaukq6 = 0; F1bphtXOcui > lGZaukq6; lGZaukq6 = lGZaukq6 + 1) {
        ZvLN5VGxl0FM = lGZaukq6;
        for (k = lGZaukq6; k < F1bphtXOcui; k = k + 1) {
            if (pLZeT3zuK92[b[ZvLN5VGxl0FM]].YXIjTHn < pLZeT3zuK92[b[k]].YXIjTHn)
                ZvLN5VGxl0FM = k;
        }
        mid = b[ZvLN5VGxl0FM];
        for (k = ZvLN5VGxl0FM; k > lGZaukq6; k = k - 1)
            b[k] = b[k - 1];
        b[lGZaukq6] = mid;
    }
    for (lGZaukq6 = 0; lGZaukq6 < F1bphtXOcui; lGZaukq6 = lGZaukq6 + 1)
        printf ("%s\n", pLZeT3zuK92[b[lGZaukq6]].id);
    for (lGZaukq6 = 0; lGZaukq6 < uP14UtIsO; lGZaukq6++)
        printf ("%s\n", pLZeT3zuK92[c[lGZaukq6]].id);
}

