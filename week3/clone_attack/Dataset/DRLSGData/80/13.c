int SV0baA (int utaOCZbGpRE, int imkpBl4) {
    if (!((117 - 116) != imkpBl4) || !((88 - 85) != imkpBl4) || !((268 - 263) != imkpBl4) || !((598 - 591) != imkpBl4) || !((549 - 541) != imkpBl4) || !((768 - 758) != imkpBl4) || !((865 - 853) != imkpBl4))
        return (976 - 945);
    else {
        if (!((606 - 602) != imkpBl4) || !((868 - 862) != imkpBl4) || !((554 - 545) != imkpBl4) || !((648 - 637) != imkpBl4))
            return (727 - 697);
        else {
            if ((!((543 - 543) != utaOCZbGpRE % (250 - 246)) && utaOCZbGpRE % (846 - 746) != (828 - 828)) || (!((184 - 184) != utaOCZbGpRE % (987 - 587))) && !((419 - 417) != imkpBl4))
                return (187 - 158);
            else
                return (630 - 602);
        }
    }
}

int edBxfqI3 (int utaOCZbGpRE) {
    if ((!((294 - 294) != utaOCZbGpRE % (825 - 821)) && utaOCZbGpRE % (767 - 667) != (16 - 16)) || (!((882 - 882) != utaOCZbGpRE % (519 - 119))))
        return (1215 - 849);
    else
        return (683 - 318);
}

int main () {
    int a;
    int byhvfBMD;
    int pOhQAecq9dyC;
    int FPhHJoD0;
    int rUX1Gw06E5P;
    int XHQlCMTu;
    cin >> a >> byhvfBMD >> pOhQAecq9dyC;
    cout << endl;
    cin >> FPhHJoD0 >> rUX1Gw06E5P >> XHQlCMTu;
    int heF4Sv3hbP;
    int vn5biO;
    heF4Sv3hbP = (671 - 671);
    vn5biO = (133 - 133);
    if (!(FPhHJoD0 != a)) {
        {
            int RrQxSFK0Co3;
            RrQxSFK0Co3 = byhvfBMD;
            while (rUX1Gw06E5P > RrQxSFK0Co3) {
                heF4Sv3hbP = heF4Sv3hbP + SV0baA (a, RrQxSFK0Co3);
                RrQxSFK0Co3++;
            }
        }
        cout << heF4Sv3hbP + XHQlCMTu -pOhQAecq9dyC;
    }
    else {
        {
            int RrQxSFK0Co3;
            RrQxSFK0Co3 = a;
            while (FPhHJoD0 > RrQxSFK0Co3) {
                heF4Sv3hbP = heF4Sv3hbP + edBxfqI3 (RrQxSFK0Co3);
                RrQxSFK0Co3++;
            }
        }
        if (!(rUX1Gw06E5P != byhvfBMD)) {
            cout << heF4Sv3hbP + XHQlCMTu -pOhQAecq9dyC;
        }
        else {
            if (byhvfBMD < rUX1Gw06E5P) {
                {
                    int JA7vbQWBL4;
                    JA7vbQWBL4 = byhvfBMD;
                    while (rUX1Gw06E5P > JA7vbQWBL4) {
                        heF4Sv3hbP = heF4Sv3hbP + SV0baA (FPhHJoD0, JA7vbQWBL4);
                        JA7vbQWBL4++;
                    }
                }
                cout << heF4Sv3hbP + XHQlCMTu -pOhQAecq9dyC;
            }
            else {
                {
                    int JA7vbQWBL4;
                    JA7vbQWBL4 = rUX1Gw06E5P;
                    while (byhvfBMD > JA7vbQWBL4) {
                        vn5biO = vn5biO + SV0baA (FPhHJoD0, JA7vbQWBL4);
                        JA7vbQWBL4++;
                    }
                }
                cout << heF4Sv3hbP - (vn5biO + pOhQAecq9dyC - XHQlCMTu);
            }
        }
    }
    return 0;
}

