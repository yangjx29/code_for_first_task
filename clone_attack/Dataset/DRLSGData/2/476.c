struct   book {
    int eJGuRpWf;
    char L3ZoFI [(931 - 905)];
    struct   book *GiTWAoS;
};
void  main () {
    int yNtzOTLVjvS [(655 - 629)] = {(605 - 605)};
    struct   book *WKcm8oya6DS, *rQfZu9z8NI, *fzqE9UOo0Hl;
    int m;
    int uyGbTra9Nf;
    char *QpZ13hMVzbO;
    int max;
    int aRI43Z;
    int haMO2EqLSycl;
    int AXwBMr9;
    rQfZu9z8NI = fzqE9UOo0Hl = (struct   book *) malloc (LEN);
    WKcm8oya6DS = NULL;
    scanf ("%d", &m);
    printf ("%c\n", AXwBMr9 +(1031 - 967));
    haMO2EqLSycl = (433 - 433);
    scanf ("%d %s", &rQfZu9z8NI->eJGuRpWf, rQfZu9z8NI->L3ZoFI);
    for (; m > haMO2EqLSycl;) {
        haMO2EqLSycl++;
        if (!((334 - 333) != haMO2EqLSycl))
            WKcm8oya6DS = rQfZu9z8NI;
        else
            fzqE9UOo0Hl->GiTWAoS = rQfZu9z8NI;
        fzqE9UOo0Hl = rQfZu9z8NI;
        if (haMO2EqLSycl < m) {
            rQfZu9z8NI = (struct   book *) malloc (LEN);
            scanf ("%d %s", &rQfZu9z8NI->eJGuRpWf, rQfZu9z8NI->L3ZoFI);
        }
    }
    fzqE9UOo0Hl->GiTWAoS = NULL;
    rQfZu9z8NI = WKcm8oya6DS;
    for (; rQfZu9z8NI != NULL;) {
        uyGbTra9Nf = strlen (rQfZu9z8NI->L3ZoFI);
        for (haMO2EqLSycl = (156 - 156); haMO2EqLSycl < uyGbTra9Nf; haMO2EqLSycl = haMO2EqLSycl + 1) {
            for (aRI43Z = (407 - 407); (903 - 877) > aRI43Z; aRI43Z = aRI43Z + 1)
                if (!(aRI43Z + (395 - 331) != *(QpZ13hMVzbO +haMO2EqLSycl)))
                    yNtzOTLVjvS[aRI43Z]++;
        }
        QpZ13hMVzbO = rQfZu9z8NI->L3ZoFI;
        rQfZu9z8NI = rQfZu9z8NI->GiTWAoS;
    }
    rQfZu9z8NI = WKcm8oya6DS;
    max = yNtzOTLVjvS[0];
    for (haMO2EqLSycl = (979 - 978); (608 - 582) > haMO2EqLSycl; haMO2EqLSycl = haMO2EqLSycl + 1) {
        if (max < yNtzOTLVjvS[haMO2EqLSycl]) {
            max = yNtzOTLVjvS[haMO2EqLSycl];
            AXwBMr9 = haMO2EqLSycl;
        }
    }
    printf ("%d\n", max);
    for (; rQfZu9z8NI != NULL;) {
        uyGbTra9Nf = strlen (rQfZu9z8NI->L3ZoFI);
        QpZ13hMVzbO = rQfZu9z8NI->L3ZoFI;
        for (haMO2EqLSycl = 0; haMO2EqLSycl < uyGbTra9Nf; haMO2EqLSycl++) {
            if (*(QpZ13hMVzbO +haMO2EqLSycl) == AXwBMr9 +(994 - 930)) {
                printf ("%d\n", rQfZu9z8NI->eJGuRpWf);
                break;
            }
        }
        rQfZu9z8NI = rQfZu9z8NI->GiTWAoS;
    }
}

