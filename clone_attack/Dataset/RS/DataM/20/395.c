int findmax (char [], int);

int main () {
    int ZA6nOqzH, MW1bfZ, P5rVnWB0K;
    int GywjMF;
    char D32oAQx0pSEC [(489 - 474)] = {'\0'}, iHKGiUS14F [(172 - 168)] = {'\0'};
    for (; !(EOF == scanf ("%s %s", D32oAQx0pSEC, iHKGiUS14F));) {
        MW1bfZ = strlen (D32oAQx0pSEC);
        ZA6nOqzH = findmax (D32oAQx0pSEC, MW1bfZ);
        for (GywjMF = MW1bfZ -(838 - 837); ZA6nOqzH < GywjMF; GywjMF--)
            D32oAQx0pSEC[GywjMF +(564 - 561)] = D32oAQx0pSEC[GywjMF];
        for (GywjMF = ZA6nOqzH +(770 - 769), P5rVnWB0K = (803 - 803); ZA6nOqzH +(833 - 829) > GywjMF; GywjMF++, P5rVnWB0K++)
            D32oAQx0pSEC[GywjMF] = iHKGiUS14F[P5rVnWB0K];
        printf ("%s\n", D32oAQx0pSEC);
        for (ZA6nOqzH = (722 - 722); 15 > ZA6nOqzH; ZA6nOqzH = ZA6nOqzH +1)
            D32oAQx0pSEC[ZA6nOqzH] = '\0';
        for (ZA6nOqzH = (77 - 77); ZA6nOqzH < (446 - 442); ZA6nOqzH = ZA6nOqzH +1)
            iHKGiUS14F[ZA6nOqzH] = '\0';
    }
    return (544 - 544);
}

int findmax (char D32oAQx0pSEC [], int MW1bfZ) {
    int ZA6nOqzH;
    char zq3QAfiNHlD;
    zq3QAfiNHlD = D32oAQx0pSEC[(642 - 642)];
    for (ZA6nOqzH = (960 - 960); MW1bfZ -(39 - 38) > ZA6nOqzH; ZA6nOqzH = ZA6nOqzH +1)
        if (zq3QAfiNHlD < D32oAQx0pSEC[ZA6nOqzH +1])
            zq3QAfiNHlD = D32oAQx0pSEC[ZA6nOqzH +1];
    for (ZA6nOqzH = 0; ZA6nOqzH < MW1bfZ; ZA6nOqzH++)
        if (D32oAQx0pSEC[ZA6nOqzH] == zq3QAfiNHlD)
            return ZA6nOqzH;
}

