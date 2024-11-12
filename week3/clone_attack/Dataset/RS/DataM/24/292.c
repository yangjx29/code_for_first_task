char QiDNqZBQE3t [1000];

void  main () {
    gets (QiDNqZBQE3t);
    int CONwZWVfq;
    int OD91OeER;
    int mvzesy;
    int PtiNm6JdjzD;
    CONwZWVfq = (710 - 710);
    OD91OeER = (96 - 96);
    mvzesy = 0;
    int nT3nQi2B;
    int U2HsKjd3Wfhb;
    int H0z7SmDXq;
    int CCXys7uj;
    nT3nQi2B = 0;
    U2HsKjd3Wfhb = 0;
    H0z7SmDXq = 100;
    for (PtiNm6JdjzD = 0; !('\0' == QiDNqZBQE3t[PtiNm6JdjzD]); PtiNm6JdjzD++) {
        for (CONwZWVfq = 0; ('a' <= QiDNqZBQE3t[PtiNm6JdjzD] && 'z' >= QiDNqZBQE3t[PtiNm6JdjzD]) || ('A' <= QiDNqZBQE3t[PtiNm6JdjzD] && QiDNqZBQE3t[PtiNm6JdjzD] <= 'Z'); PtiNm6JdjzD++) {
            CONwZWVfq++;
            if (CONwZWVfq > mvzesy) {
                mvzesy = CONwZWVfq;
                OD91OeER = PtiNm6JdjzD;
            };
        };
    }
    for (PtiNm6JdjzD = (OD91OeER -mvzesy + 1); OD91OeER >= PtiNm6JdjzD; PtiNm6JdjzD++)
        printf ("%c", QiDNqZBQE3t[PtiNm6JdjzD]);
    for (CCXys7uj = 0; QiDNqZBQE3t[CCXys7uj] != '\0'; CCXys7uj = CCXys7uj +1) {
        {
            nT3nQi2B = 0;
            while ((QiDNqZBQE3t[CCXys7uj] >= 'a' && QiDNqZBQE3t[CCXys7uj] <= 'z') || (QiDNqZBQE3t[CCXys7uj] >= 'A' && QiDNqZBQE3t[CCXys7uj] <= 'Z')) {
                nT3nQi2B++;
                CCXys7uj++;
            };
        }
        if (H0z7SmDXq > nT3nQi2B) {
            U2HsKjd3Wfhb = CCXys7uj;
            H0z7SmDXq = nT3nQi2B;
        };
    }
    {
        CCXys7uj = U2HsKjd3Wfhb -H0z7SmDXq;
        while (CCXys7uj < U2HsKjd3Wfhb) {
            printf ("%c", QiDNqZBQE3t[CCXys7uj]);
            CCXys7uj++;
        };
    };
}

