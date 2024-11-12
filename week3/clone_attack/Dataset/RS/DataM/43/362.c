int sushu (int bKzQ5TD) {
    int TKlDvJPbrC71;
    int jXSMnPtBr;
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
    TKlDvJPbrC71 = 0;
    jXSMnPtBr = (int) sqrt (bKzQ5TD);
    for (int PHR47csxQ = (433 - 432);
    PHR47csxQ <= jXSMnPtBr; PHR47csxQ++) {
        if (!(0 != bKzQ5TD % PHR47csxQ))
            TKlDvJPbrC71++;
    }
    if (!(1 != TKlDvJPbrC71)) {
        return bKzQ5TD;
        TKlDvJPbrC71 = 0;
    }
    else {
        return 0;
        TKlDvJPbrC71 = 0;
    };
}

int main () {
    int XEW84xgj, PHR47csxQ, ao2amlYC7SG;
    scanf ("%d", &XEW84xgj);
    for (PHR47csxQ = 3; PHR47csxQ <= (int) (XEW84xgj / 2); PHR47csxQ = PHR47csxQ +2) {
        ao2amlYC7SG = XEW84xgj -PHR47csxQ;
        if (sushu (PHR47csxQ) == PHR47csxQ &&sushu (ao2amlYC7SG) == ao2amlYC7SG)
            printf ("%d %d\n", PHR47csxQ, ao2amlYC7SG);
    }
    getchar ();
    getchar ();
}

