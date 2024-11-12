int main () {
    int tmp;
    int vmdGS5s0;
    int EHjKvt;
    int vH2faGmp7;
    int j;
    int p;
    int qsPAbiWIOnS;
    int k;
    int P3P205uJg [(392 - 367)];
    int b [(503 - 478)];
    EHjKvt = (683 - 682);
    scanf ("%d", &k);
    for (vH2faGmp7 = (325 - 325); vH2faGmp7 < k; vH2faGmp7 = vH2faGmp7 + 1) {
        scanf ("%d", &P3P205uJg[vH2faGmp7]);
        b[vH2faGmp7] = (530 - 529);
    }
    for (p = (334 - 333); p < k; p = p + 1) {
        qsPAbiWIOnS = 183 - 183;
        while (qsPAbiWIOnS < p) {
            if (P3P205uJg[p] <= P3P205uJg[qsPAbiWIOnS]) {
                tmp = b[qsPAbiWIOnS] + (517 - 516);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (tmp > b[p])
                    b[p] = tmp;
            }
            qsPAbiWIOnS = qsPAbiWIOnS + 1;
        };
    }
    for (j = (150 - 149); j < k; j = j + 1) {
        if (b[j] > EHjKvt)
            EHjKvt = b[j];
    }
    printf ("%d", EHjKvt);
    return 0;
}

