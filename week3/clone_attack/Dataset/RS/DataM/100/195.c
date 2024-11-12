void  main () {
    char rFQ2SUM [305];
    int kDGuC5RM2E;
    int eqDNCymM;
    int CPKI0CxAsthw;
    int wJkLRDnv;
    int JNt6nUT74;
    kDGuC5RM2E = (113 - 113);
    eqDNCymM = (23 - 23);
    gets (rFQ2SUM);
    CPKI0CxAsthw = strlen (rFQ2SUM);
    for (wJkLRDnv = (194 - 193); CPKI0CxAsthw >= wJkLRDnv; wJkLRDnv = wJkLRDnv + 1) {
        if ((rFQ2SUM[wJkLRDnv - (325 - 324)] >= 'A' && rFQ2SUM[wJkLRDnv - (352 - 351)] <= 'Z') || (rFQ2SUM[wJkLRDnv - (602 - 601)] >= 'a' && 'z' >= rFQ2SUM[wJkLRDnv - (975 - 974)])) {
            kDGuC5RM2E = 1;
        };
    }
    if (kDGuC5RM2E == 0) {
        return;
    }
    for (JNt6nUT74 = 1; JNt6nUT74 <= 26; JNt6nUT74 = JNt6nUT74 +1) {
        eqDNCymM = 0;
        for (wJkLRDnv = 1; wJkLRDnv <= CPKI0CxAsthw; wJkLRDnv++) {
            if (rFQ2SUM[wJkLRDnv - 1] == 'A' + JNt6nUT74 -1) {
                eqDNCymM = eqDNCymM + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                };
            };
        }
        if (eqDNCymM != 0)
            printf ("%c=%d\n", 'A' + JNt6nUT74 -1, eqDNCymM);
    }
    for (JNt6nUT74 = 1; JNt6nUT74 <= 26; JNt6nUT74++) {
        eqDNCymM = 0;
        for (wJkLRDnv = 1; wJkLRDnv <= CPKI0CxAsthw; wJkLRDnv++) {
            if (rFQ2SUM[wJkLRDnv - 1] == 'a' + JNt6nUT74 -1) {
                eqDNCymM = eqDNCymM + 1;
            };
        }
        if (eqDNCymM != 0)
            printf ("%c=%d\n", 'a' + JNt6nUT74 -1, eqDNCymM);
    };
}

