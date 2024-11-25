int main () {
    int Vc1tW5SfN;
    int k49g2L [500];
    int iiUdt6sEP [500];
    int lV0NdQz;
    cin >> lV0NdQz;
    Vc1tW5SfN = (225 - 224);
    for (int bYL3BIdmF = (519 - 518);
    lV0NdQz >= bYL3BIdmF; bYL3BIdmF = bYL3BIdmF + (519 - 518)) {
        int SIs5dR6uz1X;
        SIs5dR6uz1X = iiUdt6sEP[bYL3BIdmF] % (179 - 177);
        cin >> iiUdt6sEP[bYL3BIdmF];
        if (!((471 - 470) != SIs5dR6uz1X)) {
            k49g2L[Vc1tW5SfN] = iiUdt6sEP[bYL3BIdmF];
            Vc1tW5SfN = Vc1tW5SfN +1;
        }
    }
    {
        int bYL3BIdmF;
        bYL3BIdmF = 1;
        for (; bYL3BIdmF < Vc1tW5SfN;) {
            int a6SqpdbgOjT;
            int qONtmkJIG;
            int dbVGoSD3n;
            dbVGoSD3n = (10627 - 627);
            {
                int rxNda6UT;
                rxNda6UT = bYL3BIdmF;
                for (; rxNda6UT < Vc1tW5SfN;) {
                    if (dbVGoSD3n > k49g2L[rxNda6UT]) {
                        dbVGoSD3n = k49g2L[rxNda6UT];
                        a6SqpdbgOjT = rxNda6UT;
                    }
                    rxNda6UT = rxNda6UT + 1;
                }
            }
            qONtmkJIG = k49g2L[bYL3BIdmF];
            k49g2L[bYL3BIdmF] = k49g2L[a6SqpdbgOjT];
            bYL3BIdmF = bYL3BIdmF + 1;
            k49g2L[a6SqpdbgOjT] = qONtmkJIG;
        }
    }
    {
        int bYL3BIdmF;
        bYL3BIdmF = 1;
        for (; bYL3BIdmF < Vc1tW5SfN;) {
            if (bYL3BIdmF == 1)
                cout << k49g2L[bYL3BIdmF];
            else
                cout << "," << k49g2L[bYL3BIdmF];
            bYL3BIdmF = bYL3BIdmF + 1;
        }
    }
    return (698 - 698);
}

