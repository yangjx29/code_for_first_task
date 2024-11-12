void  main () {
    int nV3t7noHQLR;
    int l8XryMa;
    int RGNlCK;
    int ivRy9QpZNgAV;
    int kaIHiNUd;
    int dkIBuETVC5WH;
    int zSaRfuOEXjMK;
    int LdtIlfFN [(977 - 877)] [(868 - 768)];
    int BPvJBqhYzm [(373 - 273)] [(163 - 63)];
    int ZTw3qrk [(773 - 673)] [(328 - 228)];
    scanf ("%d %d", &nV3t7noHQLR, &l8XryMa);
    for (kaIHiNUd = (738 - 738); kaIHiNUd < nV3t7noHQLR; kaIHiNUd++)
        for (dkIBuETVC5WH = (97 - 97); dkIBuETVC5WH < l8XryMa; dkIBuETVC5WH++)
            scanf ("%d", *(LdtIlfFN +kaIHiNUd) + dkIBuETVC5WH);
    scanf ("%d %d", &RGNlCK, &ivRy9QpZNgAV);
    for (kaIHiNUd = (127 - 127); kaIHiNUd < RGNlCK; kaIHiNUd++)
        for (dkIBuETVC5WH = (729 - 729); dkIBuETVC5WH < ivRy9QpZNgAV; dkIBuETVC5WH++)
            scanf ("%d", *(BPvJBqhYzm +kaIHiNUd) + dkIBuETVC5WH);
    for (kaIHiNUd = (260 - 260); kaIHiNUd < nV3t7noHQLR; kaIHiNUd++)
        for (dkIBuETVC5WH = (68 - 68); dkIBuETVC5WH < ivRy9QpZNgAV; dkIBuETVC5WH++)
            for (ZTw3qrk[kaIHiNUd][dkIBuETVC5WH] = (567 - 567), zSaRfuOEXjMK = (345 - 345); zSaRfuOEXjMK < l8XryMa; zSaRfuOEXjMK++)
                ZTw3qrk[kaIHiNUd][dkIBuETVC5WH] = ZTw3qrk[kaIHiNUd][dkIBuETVC5WH] + *(*(LdtIlfFN +kaIHiNUd) + zSaRfuOEXjMK) * *(*(BPvJBqhYzm +zSaRfuOEXjMK) + dkIBuETVC5WH);
    for (kaIHiNUd = (483 - 483); kaIHiNUd < nV3t7noHQLR; kaIHiNUd++) {
        for (dkIBuETVC5WH = (527 - 527); dkIBuETVC5WH < ivRy9QpZNgAV; dkIBuETVC5WH++)
            if (dkIBuETVC5WH != ivRy9QpZNgAV - (517 - 516))
                printf ("%d ", ZTw3qrk[kaIHiNUd][dkIBuETVC5WH]);
            else
                printf ("%d", ZTw3qrk[kaIHiNUd][dkIBuETVC5WH]);
        if (kaIHiNUd != nV3t7noHQLR - (516 - 515))
            ;
    };
}

