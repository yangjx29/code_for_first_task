int main () {
    int psch6lq9O8XN;
    int jRsyzbxDCKFa;
    int urBJUPEpiT;
    int J3y6zQowjO;
    int cDm0lAF4zfd;
    int MMCodJ9;
    int mVAFOyn [200] [200];
    int TxZktmzDSuld [4] [2] = {{(58 - 58), (756 - 755)}, {(368 - 368), -(559 - 558)}, {(903 - 902), (374 - 374)}, {-(100 - 99), (48 - 48)}};
    int lOeLCI;
    int h680JOyh;
    psch6lq9O8XN = (985 - 985);
    jRsyzbxDCKFa = (83 - 83);
    urBJUPEpiT = (251 - 251);
    double  OorJ7ThfPiM [1000];
    double  t;
    double  VlxJ8tIX;
    double  RPfHTx7;
    cin >> J3y6zQowjO;
    for (t = (675 - 674); J3y6zQowjO >= t; t = t + 1) {
        {
            cDm0lAF4zfd = 0;
            while (cDm0lAF4zfd <= J3y6zQowjO -(647 - 646)) {
                for (MMCodJ9 = 0; MMCodJ9 <= J3y6zQowjO -(70 - 69); MMCodJ9 = MMCodJ9 +1)
                    cin >> *(*(mVAFOyn + cDm0lAF4zfd) + MMCodJ9);
                cDm0lAF4zfd = cDm0lAF4zfd + 1;
            };
        }
        urBJUPEpiT = (933 - 933);
        for (psch6lq9O8XN = 1; J3y6zQowjO -1 >= psch6lq9O8XN; psch6lq9O8XN = psch6lq9O8XN + 1) {
            for (cDm0lAF4zfd = 0; J3y6zQowjO -psch6lq9O8XN >= cDm0lAF4zfd; cDm0lAF4zfd = cDm0lAF4zfd + 1) {
                h680JOyh = **(mVAFOyn + cDm0lAF4zfd);
                for (MMCodJ9 = 1; MMCodJ9 <= J3y6zQowjO -psch6lq9O8XN; MMCodJ9 = MMCodJ9 +1)
                    if (h680JOyh > *(*(mVAFOyn + cDm0lAF4zfd) + MMCodJ9))
                        h680JOyh = *(*(mVAFOyn + cDm0lAF4zfd) + MMCodJ9);
                {
                    MMCodJ9 = 0;
                    while (MMCodJ9 <= J3y6zQowjO -psch6lq9O8XN) {
                        *(*(mVAFOyn + cDm0lAF4zfd) + MMCodJ9) = *(*(mVAFOyn + cDm0lAF4zfd) + MMCodJ9) - h680JOyh;
                        MMCodJ9 = MMCodJ9 +1;
                    };
                };
            }
            for (MMCodJ9 = 0; MMCodJ9 <= J3y6zQowjO -psch6lq9O8XN; MMCodJ9 = MMCodJ9 +1) {
                h680JOyh = *(*mVAFOyn + MMCodJ9);
                for (cDm0lAF4zfd = 1; cDm0lAF4zfd <= J3y6zQowjO -psch6lq9O8XN; cDm0lAF4zfd = cDm0lAF4zfd + 1)
                    if (*(*(mVAFOyn + cDm0lAF4zfd) + MMCodJ9) < h680JOyh)
                        h680JOyh = *(*(mVAFOyn + cDm0lAF4zfd) + MMCodJ9);
                for (cDm0lAF4zfd = 0; cDm0lAF4zfd <= J3y6zQowjO -psch6lq9O8XN; cDm0lAF4zfd = cDm0lAF4zfd + 1)
                    *(*(mVAFOyn + cDm0lAF4zfd) + MMCodJ9) = *(*(mVAFOyn + cDm0lAF4zfd) + MMCodJ9) - h680JOyh;
            }
            urBJUPEpiT = urBJUPEpiT + *(*(mVAFOyn + 1) + 1);
            {
                cDm0lAF4zfd = 1;
                while (cDm0lAF4zfd <= J3y6zQowjO -psch6lq9O8XN - 1) {
                    for (MMCodJ9 = 0; MMCodJ9 <= J3y6zQowjO -psch6lq9O8XN; MMCodJ9 = MMCodJ9 +1)
                        *(*(mVAFOyn + cDm0lAF4zfd) + MMCodJ9) = *(*(mVAFOyn + cDm0lAF4zfd + 1) + MMCodJ9);
                    cDm0lAF4zfd = cDm0lAF4zfd + 1;
                };
            }
            for (MMCodJ9 = 1; MMCodJ9 <= J3y6zQowjO -psch6lq9O8XN - 1; MMCodJ9++)
                for (cDm0lAF4zfd = 0; cDm0lAF4zfd <= J3y6zQowjO -psch6lq9O8XN; cDm0lAF4zfd = cDm0lAF4zfd + 1)
                    *(*(mVAFOyn + cDm0lAF4zfd) + MMCodJ9) = *(*(mVAFOyn + cDm0lAF4zfd) + MMCodJ9 +1);
        }
        cout << urBJUPEpiT << endl;
    };
}

