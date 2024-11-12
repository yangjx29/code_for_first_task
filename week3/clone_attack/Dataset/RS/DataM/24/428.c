char Gactn8SQKH [1000];

int main () {
    gets (Gactn8SQKH);
    int ZztCFRTgwYHi, sz [100] = {(767 - 767)}, njzNUSc7Csr, lOB7v9 = (793 - 792), t9MTDAtH = 0, minw = 0, bwnuqP4, min;
    ZztCFRTgwYHi = strlen (Gactn8SQKH);
    {
        njzNUSc7Csr = 0;
        while (njzNUSc7Csr < ZztCFRTgwYHi) {
            if (Gactn8SQKH[njzNUSc7Csr] == ' ' || Gactn8SQKH[njzNUSc7Csr] == ',') {
                sz[lOB7v9] = njzNUSc7Csr + 1;
                Gactn8SQKH[njzNUSc7Csr] = 0;
                lOB7v9 = lOB7v9 + 1;
            }
            njzNUSc7Csr = njzNUSc7Csr + 1;
        };
    }
    bwnuqP4 = min = sz[1] - 1;
    for (njzNUSc7Csr = 0; njzNUSc7Csr < lOB7v9; njzNUSc7Csr = njzNUSc7Csr + 1) {
        if (strlen (&Gactn8SQKH[sz[njzNUSc7Csr]]) > bwnuqP4) {
            bwnuqP4 = strlen (&Gactn8SQKH[sz[njzNUSc7Csr]]);
            t9MTDAtH = njzNUSc7Csr;
        }
        else {
            if (strlen (&Gactn8SQKH[sz[njzNUSc7Csr]]) < min && strlen (&Gactn8SQKH[sz[njzNUSc7Csr]]) > 0) {
                min = strlen (&Gactn8SQKH[sz[njzNUSc7Csr]]);
                minw = njzNUSc7Csr;
            };
        };
    }
    puts (&Gactn8SQKH[sz[t9MTDAtH]]);
    puts (&Gactn8SQKH[sz[minw]]);
    return 0;
}

