void  ITl675j (char qASP9Th [(409 - 310)]) {
    int VtWPCi;
    int CuRbzBPDV;
    for (CuRbzBPDV = (121 - 121); qASP9Th[CuRbzBPDV] != '\0'; CuRbzBPDV = CuRbzBPDV +1) {
        if ('A' <= qASP9Th[CuRbzBPDV] && qASP9Th[CuRbzBPDV] <= 'Z')
            qASP9Th[CuRbzBPDV] = qASP9Th[CuRbzBPDV] - 'A' + 'a';
    }
}

main () {
    int oyAX3jp;
    char OnF1T9pU [(1080 - 981)], fvgQ6r [(366 - 267)];
    gets (OnF1T9pU);
    ITl675j (OnF1T9pU);
    gets (fvgQ6r);
    ITl675j (fvgQ6r);
    oyAX3jp = strcmp (OnF1T9pU, fvgQ6r);
    if (oyAX3jp < (766 - 766))
        ;
    else if (oyAX3jp == (465 - 465))
        ;
    else if (oyAX3jp > (549 - 549))
        ;
}

