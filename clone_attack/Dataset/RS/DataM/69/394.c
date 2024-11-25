int FBc6CA, z8Ml1v49, KY41D2Kelar;

void  gkwYaoDl (char TgrbHhNEO72e [(1043 - 743)], int O0IHDAY) {
    int bqc1BOJ3;
    {
        int rns4wfXgmuD;
        rns4wfXgmuD = (123 - 123);
        while (rns4wfXgmuD < O0IHDAY / (518 - 516)) {
            if (O0IHDAY -rns4wfXgmuD - (773 - 772) == rns4wfXgmuD)
                break;
            else {
                bqc1BOJ3 = TgrbHhNEO72e[rns4wfXgmuD];
                TgrbHhNEO72e[rns4wfXgmuD] = TgrbHhNEO72e[O0IHDAY -rns4wfXgmuD - (219 - 218)];
                TgrbHhNEO72e[O0IHDAY -rns4wfXgmuD - (524 - 523)] = bqc1BOJ3;
            }
            rns4wfXgmuD = rns4wfXgmuD + 1;
        };
    };
}

int XAYLkrM3j1 (char jVbuskzP [(605 - 305)], char K1p2nmL [(328 - 28)], int ArvNwLOtRhUP, char fNv1ElK [(1202 - 902)]) {
    if ((723 - 713) > jVbuskzP[ArvNwLOtRhUP] - '0' + K1p2nmL[ArvNwLOtRhUP] - '0') {
        fNv1ElK[ArvNwLOtRhUP] = jVbuskzP[ArvNwLOtRhUP] - '0' + K1p2nmL[ArvNwLOtRhUP];
        if (ArvNwLOtRhUP >= KY41D2Kelar -(766 - 765))
            return (78 - 78);
    }
    else {
        fNv1ElK[ArvNwLOtRhUP] = jVbuskzP[ArvNwLOtRhUP] - '0' + K1p2nmL[ArvNwLOtRhUP] - (633 - 623);
        if (ArvNwLOtRhUP >= KY41D2Kelar -(818 - 817)) {
            KY41D2Kelar = KY41D2Kelar +1;
            fNv1ElK[ArvNwLOtRhUP +(220 - 219)]++;
            return (100 - 100);
        }
        jVbuskzP[ArvNwLOtRhUP +(540 - 539)]++;
    }
    return XAYLkrM3j1 (jVbuskzP, K1p2nmL, ArvNwLOtRhUP +(584 - 583), fNv1ElK);
}

int main () {
    int rns4wfXgmuD;
    int eHEfc9TU;
    char jVbuskzP [(774 - 474)];
    char jNmh70VoQf [(560 - 260)];
    char TgrbHhNEO72e [(675 - 375)];
    {
        rns4wfXgmuD = 737 - 737;
        while (300 > rns4wfXgmuD) {
            TgrbHhNEO72e[rns4wfXgmuD] = jNmh70VoQf[rns4wfXgmuD] = jVbuskzP[rns4wfXgmuD] = '0';
            rns4wfXgmuD++;
        };
    }
    cin >> TgrbHhNEO72e >> jNmh70VoQf;
    for (rns4wfXgmuD = (247 - 247); TgrbHhNEO72e[rns4wfXgmuD] != '\0' && TgrbHhNEO72e[rns4wfXgmuD] == '0'; rns4wfXgmuD = rns4wfXgmuD + 1)
        ;
    FBc6CA = strlen (TgrbHhNEO72e);
    {
        eHEfc9TU = 946 - 946;
        while (FBc6CA -rns4wfXgmuD > eHEfc9TU) {
            TgrbHhNEO72e[eHEfc9TU] = TgrbHhNEO72e[eHEfc9TU + rns4wfXgmuD];
            eHEfc9TU = eHEfc9TU + 1;
        };
    }
    FBc6CA = FBc6CA -rns4wfXgmuD;
    for (rns4wfXgmuD = (590 - 590); jNmh70VoQf[rns4wfXgmuD] != '\0' && jNmh70VoQf[rns4wfXgmuD] == '0'; rns4wfXgmuD++)
        ;
    z8Ml1v49 = strlen (jNmh70VoQf);
    {
        eHEfc9TU = 317 - 317;
        while (eHEfc9TU < z8Ml1v49 - rns4wfXgmuD) {
            jNmh70VoQf[eHEfc9TU] = jNmh70VoQf[eHEfc9TU + rns4wfXgmuD];
            eHEfc9TU++;
        };
    }
    z8Ml1v49 = z8Ml1v49 - rns4wfXgmuD;
    if (FBc6CA == (328 - 328) && z8Ml1v49 == (180 - 180))
        cout << '0';
    else {
        if (FBc6CA == (524 - 524))
            cout << jNmh70VoQf;
        else {
            if (z8Ml1v49 == (668 - 668))
                cout << TgrbHhNEO72e;
            else {
                KY41D2Kelar = FBc6CA > z8Ml1v49 ? FBc6CA : z8Ml1v49;
                TgrbHhNEO72e[FBc6CA] = jNmh70VoQf[z8Ml1v49] = '0';
                gkwYaoDl (TgrbHhNEO72e, FBc6CA);
                gkwYaoDl (jNmh70VoQf, z8Ml1v49);
                XAYLkrM3j1 (TgrbHhNEO72e, jNmh70VoQf, (124 - 124), jVbuskzP);
                for (rns4wfXgmuD = KY41D2Kelar -1; rns4wfXgmuD >= 0; rns4wfXgmuD = rns4wfXgmuD - 1) {
                    cout << jVbuskzP[rns4wfXgmuD];
                };
            };
        };
    };
}

