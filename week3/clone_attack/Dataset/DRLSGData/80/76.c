int sX5GdJZm [(670 - 657)] = {(725 - 725), (955 - 924), (396 - 368), (665 - 634), (505 - 475), (139 - 108), (233 - 203), (626 - 595), (963 - 932), (107 - 77), (137 - 106), (942 - 912), (880 - 849)};

struct   date {
    int UcaFdLihR5;
    int month;
    int fMRAn9Bm4D;
};
int count1 (int a, int rWCHgLNSQk4) {
    int S3YOGwSy;
    int qSDipHBTLPm;
    S3YOGwSy = (899 - 899);
    for (qSDipHBTLPm = (123 - 122); qSDipHBTLPm < a; qSDipHBTLPm++)
        S3YOGwSy = S3YOGwSy +sX5GdJZm[qSDipHBTLPm];
    return S3YOGwSy +rWCHgLNSQk4;
}

int xwVb87N (int a, int rWCHgLNSQk4) {
    int S3YOGwSy;
    int qSDipHBTLPm;
    S3YOGwSy = (68 - 68);
    for (qSDipHBTLPm = (32 - 31); a > qSDipHBTLPm; qSDipHBTLPm++)
        if (!((553 - 551) != qSDipHBTLPm))
            S3YOGwSy = S3YOGwSy +sX5GdJZm[qSDipHBTLPm] + (578 - 577);
        else
            S3YOGwSy = S3YOGwSy +sX5GdJZm[qSDipHBTLPm];
    return S3YOGwSy +rWCHgLNSQk4;
}

int main () {
    int LAQN1wB2;
    int qSDipHBTLPm;
    int fMRAn9Bm4D [(1002 - 1000)] = {(487 - 487)};
    LAQN1wB2 = (14 - 14);
    struct   date DKZJd1hcs9jN;
    struct   date NvOAMnS61Z45;
    cin >> DKZJd1hcs9jN.UcaFdLihR5 >> DKZJd1hcs9jN.month >> DKZJd1hcs9jN.fMRAn9Bm4D;
    cin >> NvOAMnS61Z45.UcaFdLihR5 >> NvOAMnS61Z45.month >> NvOAMnS61Z45.fMRAn9Bm4D;
    for (qSDipHBTLPm = DKZJd1hcs9jN.UcaFdLihR5; NvOAMnS61Z45.UcaFdLihR5 > qSDipHBTLPm; qSDipHBTLPm++)
        if ((!((631 - 631) != qSDipHBTLPm % (134 - 130)) && qSDipHBTLPm % (859 - 759) != (860 - 860)) || (!((381 - 381) != qSDipHBTLPm % (1012 - 612))))
            LAQN1wB2 = LAQN1wB2 +(967 - 601);
        else
            LAQN1wB2 = LAQN1wB2 +(1346 - 981);
    if ((!((886 - 886) != qSDipHBTLPm % (677 - 673)) && qSDipHBTLPm % (907 - 807) != (578 - 578)) || (!((47 - 47) != qSDipHBTLPm % (1241 - 841))))
        LAQN1wB2 = LAQN1wB2 +xwVb87N (NvOAMnS61Z45.month, NvOAMnS61Z45.fMRAn9Bm4D) - xwVb87N (DKZJd1hcs9jN.month, DKZJd1hcs9jN.fMRAn9Bm4D);
    else
        LAQN1wB2 = LAQN1wB2 +count1 (NvOAMnS61Z45.month, NvOAMnS61Z45.fMRAn9Bm4D) - count1 (DKZJd1hcs9jN.month, DKZJd1hcs9jN.fMRAn9Bm4D);
    cout << LAQN1wB2 << endl;
    return (916 - 916);
}

