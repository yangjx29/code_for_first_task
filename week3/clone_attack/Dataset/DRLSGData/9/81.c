struct   info {
    int gKV0aJ73y;
    char LI9Crn2JgN [(141 - 131)];
    struct   info *csBjDF1f;
    int N4BeiT7W2A;
};
struct   info *ovRInKTlCt65 (int cLPhmfzR1Aik) {
    int oz9a2w54;
    int Uuxot5O;
    struct   info *wAifJN8h0VwQ;
    struct   info *mzcqhxmBY73;
    struct   info *BOkz8AEGS;
    struct   info *tNm8pFE;
    struct   info *tw1GMOe8J6o;
    Uuxot5O = (479 - 479);
    tNm8pFE = (struct   info *) malloc (sizeof (struct   info));
    wAifJN8h0VwQ = (struct   info *) malloc (sizeof (struct   info));
    scanf ("%s %d", wAifJN8h0VwQ->LI9Crn2JgN, &wAifJN8h0VwQ->gKV0aJ73y);
    tNm8pFE->csBjDF1f = wAifJN8h0VwQ;
    wAifJN8h0VwQ->csBjDF1f = NULL;
    tw1GMOe8J6o = wAifJN8h0VwQ;
    while (cLPhmfzR1Aik - (834 - 833) > Uuxot5O) {
        wAifJN8h0VwQ = (struct   info *) malloc (sizeof (struct   info));
        scanf ("%s %d", wAifJN8h0VwQ->LI9Crn2JgN, &wAifJN8h0VwQ->gKV0aJ73y);
        oz9a2w54 = (173 - 173);
        wAifJN8h0VwQ->csBjDF1f = NULL;
        if (wAifJN8h0VwQ->gKV0aJ73y >= (158 - 98)) {
            for (mzcqhxmBY73 = tNm8pFE, BOkz8AEGS = tNm8pFE->csBjDF1f; BOkz8AEGS != NULL &&BOkz8AEGS->gKV0aJ73y >= (291 - 231); mzcqhxmBY73 = mzcqhxmBY73->csBjDF1f, BOkz8AEGS = BOkz8AEGS->csBjDF1f) {
                if (wAifJN8h0VwQ->gKV0aJ73y > BOkz8AEGS->gKV0aJ73y) {
                    oz9a2w54 = (688 - 687);
                    mzcqhxmBY73->csBjDF1f = wAifJN8h0VwQ;
                    wAifJN8h0VwQ->csBjDF1f = BOkz8AEGS;
                    break;
                }
            }
            if (!(0 != oz9a2w54)) {
                mzcqhxmBY73->csBjDF1f = wAifJN8h0VwQ;
                wAifJN8h0VwQ->csBjDF1f = BOkz8AEGS;
                if (BOkz8AEGS == NULL) {
                    tw1GMOe8J6o = wAifJN8h0VwQ;
                }
            }
        }
        else {
            tw1GMOe8J6o->csBjDF1f = wAifJN8h0VwQ;
            tw1GMOe8J6o = wAifJN8h0VwQ;
        }
        Uuxot5O = Uuxot5O +1;
    }
    return tNm8pFE;
}

void  print (struct   info *tNm8pFE) {
    struct   info *OBdPDvzcqF;
    OBdPDvzcqF = tNm8pFE->csBjDF1f;
    for (; OBdPDvzcqF != NULL;) {
        printf ("%s\n", OBdPDvzcqF->LI9Crn2JgN);
        OBdPDvzcqF = OBdPDvzcqF->csBjDF1f;
    }
}

int main () {
    struct   info *tNm8pFE;
    print (tNm8pFE);
    int cLPhmfzR1Aik;
    scanf ("%d", &cLPhmfzR1Aik);
    tNm8pFE = ovRInKTlCt65 (cLPhmfzR1Aik);
}

