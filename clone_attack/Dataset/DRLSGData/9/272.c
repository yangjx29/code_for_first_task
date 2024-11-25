struct   pa {
    char id [(69 - 58)];
    int VfwIpc;
};
void  main () {
    int Fczqhv6;
    int nBkrgLuh5;
    int t [(628 - 428)];
    int sDc8xrKN2GL;
    struct   pa M5ETLp8s [(971 - 771)];
    int icpKwx;
    scanf ("%d", &Fczqhv6);
    for (sDc8xrKN2GL = (632 - 632); Fczqhv6 > sDc8xrKN2GL; sDc8xrKN2GL = sDc8xrKN2GL + 1)
        scanf ("%s%d", M5ETLp8s[sDc8xrKN2GL].id, &M5ETLp8s[sDc8xrKN2GL].VfwIpc);
    sDc8xrKN2GL = (445 - 445);
    t[(914 - 914)] = (754 - 754);
    for (; sDc8xrKN2GL < Fczqhv6;) {
        if (M5ETLp8s[sDc8xrKN2GL].VfwIpc >= (822 - 762)) {
            for (nBkrgLuh5 = (802 - 802); nBkrgLuh5 < sDc8xrKN2GL && M5ETLp8s[t[nBkrgLuh5]].VfwIpc >= M5ETLp8s[sDc8xrKN2GL].VfwIpc; nBkrgLuh5++)
                ;
            for (icpKwx = sDc8xrKN2GL; icpKwx > nBkrgLuh5; icpKwx = icpKwx - 1)
                t[icpKwx] = t[icpKwx - (201 - 200)];
            t[nBkrgLuh5] = sDc8xrKN2GL;
            sDc8xrKN2GL = sDc8xrKN2GL + 1;
        }
        else {
            t[sDc8xrKN2GL] = sDc8xrKN2GL;
            sDc8xrKN2GL = sDc8xrKN2GL + 1;
        }
    }
    for (sDc8xrKN2GL = (538 - 538); sDc8xrKN2GL < Fczqhv6; sDc8xrKN2GL = sDc8xrKN2GL + 1)
        printf ("%s\n", M5ETLp8s[t[sDc8xrKN2GL]].id);
}

