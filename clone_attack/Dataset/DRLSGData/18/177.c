int rQzhSG0ZCXfu [100] [100];

int yvIp1t3 (int J7Rxh64FHt1, int tiLFI2tacXT) {
    if (J7Rxh64FHt1 != 1) {
        int crRZG2wJ7F0, Z6qSsDc, s3eaB8DH, phWcMfVA [J7Rxh64FHt1] [J7Rxh64FHt1];
        {
            Z6qSsDc = 0;
            while (J7Rxh64FHt1 > Z6qSsDc) {
                {
                    s3eaB8DH = 0;
                    for (; s3eaB8DH < J7Rxh64FHt1;) {
                        phWcMfVA[Z6qSsDc][s3eaB8DH] = rQzhSG0ZCXfu[Z6qSsDc][s3eaB8DH];
                        s3eaB8DH++;
                    };
                }
                Z6qSsDc++;
            };
        }
        {
            Z6qSsDc = 0;
            for (; J7Rxh64FHt1 > Z6qSsDc;) {
                crRZG2wJ7F0 = phWcMfVA[Z6qSsDc][0];
                {
                    s3eaB8DH = 1;
                    while (s3eaB8DH < J7Rxh64FHt1) {
                        if (phWcMfVA[Z6qSsDc][s3eaB8DH] < crRZG2wJ7F0) {
                            crRZG2wJ7F0 = phWcMfVA[Z6qSsDc][s3eaB8DH];
                        }
                        s3eaB8DH++;
                    };
                }
                if (crRZG2wJ7F0 != 0) {
                    for (s3eaB8DH = 0; s3eaB8DH < J7Rxh64FHt1; s3eaB8DH++) {
                        phWcMfVA[Z6qSsDc][s3eaB8DH] = phWcMfVA[Z6qSsDc][s3eaB8DH] - crRZG2wJ7F0;
                    };
                }
                Z6qSsDc++;
            };
        }
        for (Z6qSsDc = 0; Z6qSsDc < J7Rxh64FHt1; Z6qSsDc++) {
            crRZG2wJ7F0 = phWcMfVA[0][Z6qSsDc];
            for (s3eaB8DH = 1; s3eaB8DH < J7Rxh64FHt1; s3eaB8DH++) {
                if (phWcMfVA[s3eaB8DH][Z6qSsDc] < crRZG2wJ7F0) {
                    crRZG2wJ7F0 = phWcMfVA[s3eaB8DH][Z6qSsDc];
                };
            }
            if (crRZG2wJ7F0 != 0) {
                for (s3eaB8DH = 0; s3eaB8DH < J7Rxh64FHt1; s3eaB8DH++) {
                    phWcMfVA[s3eaB8DH][Z6qSsDc] = phWcMfVA[s3eaB8DH][Z6qSsDc] - crRZG2wJ7F0;
                };
            };
        }
        tiLFI2tacXT = tiLFI2tacXT + phWcMfVA[1][1];
        for (Z6qSsDc = 0; Z6qSsDc < J7Rxh64FHt1; Z6qSsDc++) {
            for (s3eaB8DH = 1; s3eaB8DH < J7Rxh64FHt1 -1; s3eaB8DH++) {
                rQzhSG0ZCXfu[Z6qSsDc][s3eaB8DH] = phWcMfVA[Z6qSsDc][s3eaB8DH] = phWcMfVA[Z6qSsDc][s3eaB8DH + 1];
            };
        }
        {
            Z6qSsDc = 0;
            while (J7Rxh64FHt1 -1 > Z6qSsDc) {
                for (s3eaB8DH = 1; s3eaB8DH < J7Rxh64FHt1 -1; s3eaB8DH++) {
                    phWcMfVA[s3eaB8DH][Z6qSsDc] = phWcMfVA[s3eaB8DH + 1][Z6qSsDc];
                }
                Z6qSsDc++;
            };
        }
        for (Z6qSsDc = 0; Z6qSsDc < J7Rxh64FHt1 -1; Z6qSsDc++) {
            s3eaB8DH = 0;
            for (; s3eaB8DH < J7Rxh64FHt1 -1;) {
                rQzhSG0ZCXfu[Z6qSsDc][s3eaB8DH] = phWcMfVA[Z6qSsDc][s3eaB8DH];
                s3eaB8DH++;
            };
        }
        return yvIp1t3 (J7Rxh64FHt1 -1, tiLFI2tacXT);
    }
    if (J7Rxh64FHt1 == 1)
        return tiLFI2tacXT;
}

int main () {
    int J7Rxh64FHt1;
    int tiLFI2tacXT = 0, Z6qSsDc, kfdxI82Azb, MzMwPSG2;
    cin >> J7Rxh64FHt1;
    for (Z6qSsDc = 1; Z6qSsDc <= J7Rxh64FHt1; Z6qSsDc++) {
        for (kfdxI82Azb = 0; kfdxI82Azb < J7Rxh64FHt1; kfdxI82Azb++) {
            MzMwPSG2 = 0;
            for (; J7Rxh64FHt1 > MzMwPSG2;) {
                cin >> rQzhSG0ZCXfu[kfdxI82Azb][MzMwPSG2];
                MzMwPSG2++;
            };
        }
        cout << yvIp1t3 (J7Rxh64FHt1, tiLFI2tacXT) << endl;
    }
    return 0;
}

