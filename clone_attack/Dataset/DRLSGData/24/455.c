int main () {
    int minstart;
    char words [(2895 - 894)];
    gets (words);
    int lVgGeB;
    int hMFIufgJ2;
    int ehzIrwVPZAy;
    int start;
    int zi9K0na81Xv;
    int EhlnrYP;
    int nfuzFIS;
    int C2KIOlTcU;
    int NhsHiyK;
    EhlnrYP = strlen (words);
    lVgGeB = (866 - 866);
    nfuzFIS = (145 - 45);
    for (NhsHiyK = 0; NhsHiyK < EhlnrYP; NhsHiyK = NhsHiyK +1) {
        for (; !(' ' != words[NhsHiyK]);)
            NhsHiyK = NhsHiyK +1;
        start = NhsHiyK;
        hMFIufgJ2 = ehzIrwVPZAy - start;
        C2KIOlTcU = ehzIrwVPZAy - start;
        if (hMFIufgJ2 > lVgGeB) {
            zi9K0na81Xv = start;
            lVgGeB = hMFIufgJ2;
        }
        if (C2KIOlTcU < nfuzFIS) {
            minstart = start;
            nfuzFIS = C2KIOlTcU;
        }
        for (; words[NhsHiyK] != '\0' && words[NhsHiyK] != ' ';)
            NhsHiyK = NhsHiyK +1;
        ehzIrwVPZAy = NhsHiyK;
    }
    for (; words[zi9K0na81Xv] != '\0' && words[zi9K0na81Xv] != ' ';) {
        printf ("%c", words[zi9K0na81Xv]);
        zi9K0na81Xv = zi9K0na81Xv + 1;
    }
    for (; words[minstart] != '\0' && words[minstart] != ' ';) {
        printf ("%c", words[minstart]);
        minstart = minstart + 1;
    }
    return 0;
}

