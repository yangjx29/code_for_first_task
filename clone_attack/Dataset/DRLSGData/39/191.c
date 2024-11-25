int N;

struct   student {
    char FhLeN9SA0d [20];
    float EB78f9iDUKO;
    float zl87XWaLjf5;
    char c1;
    char uPjEMuD;
    int QNs8C7peQ;
    int JuHsJ9z;
    struct   student *next;
};
void  mon (struct   student *tCBNOU1dx) {
    tCBNOU1dx->JuHsJ9z = (278 - 278);
    if ((835 - 755) < tCBNOU1dx->EB78f9iDUKO && tCBNOU1dx->QNs8C7peQ > 0) {
        tCBNOU1dx->JuHsJ9z = tCBNOU1dx->JuHsJ9z + 8000;
    }
    if (85 < tCBNOU1dx->EB78f9iDUKO && 80 < tCBNOU1dx->zl87XWaLjf5) {
        tCBNOU1dx->JuHsJ9z += (4128 - 128);
    }
    if (tCBNOU1dx->EB78f9iDUKO > (122 - 32)) {
        tCBNOU1dx->JuHsJ9z = tCBNOU1dx->JuHsJ9z + (2289 - 289);
    }
    if (tCBNOU1dx->EB78f9iDUKO > 85 && !('Y' != tCBNOU1dx->uPjEMuD)) {
        tCBNOU1dx->JuHsJ9z += 1000;
    }
    if (tCBNOU1dx->zl87XWaLjf5 > 80 && tCBNOU1dx->c1 == 'Y') {
        tCBNOU1dx->JuHsJ9z = tCBNOU1dx->JuHsJ9z + 850;
    };
}

struct   student *CERFNlPCfbK () {
    struct   student *nNErulf;
    struct   student *VB28mVDU;
    mon (VB28mVDU);
    struct   student *p2;
    int hqu8N4X5LF;
    VB28mVDU = (struct   student *) malloc (LEN);
    hqu8N4X5LF = 1;
    scanf ("%s %f %f %c %c %d", VB28mVDU->FhLeN9SA0d, &VB28mVDU->EB78f9iDUKO, &VB28mVDU->zl87XWaLjf5, &VB28mVDU->c1, &VB28mVDU->uPjEMuD, &VB28mVDU->QNs8C7peQ);
    VB28mVDU->next = NULL;
    nNErulf = VB28mVDU;
    p2 = VB28mVDU;
    do {
        if (hqu8N4X5LF >= N) {
            break;
        }
        else {
            mon (VB28mVDU);
            hqu8N4X5LF++;
            VB28mVDU = (struct   student *) malloc (LEN);
            scanf ("%s %f %f %c %c %d", VB28mVDU->FhLeN9SA0d, &VB28mVDU->EB78f9iDUKO, &VB28mVDU->zl87XWaLjf5, &VB28mVDU->c1, &VB28mVDU->uPjEMuD, &VB28mVDU->QNs8C7peQ);
            VB28mVDU->next = NULL;
            p2->next = VB28mVDU;
            p2 = VB28mVDU;
        };
    }
    while (1);
    return (nNErulf);
}

void  print (struct   student *nNErulf) {
    int KkZ0IW5;
    int gu2p3Ywk;
    struct   student *tCBNOU1dx;
    struct   student *pmax;
    KkZ0IW5 = 0;
    gu2p3Ywk = 0;
    tCBNOU1dx = nNErulf;
    do {
        gu2p3Ywk += tCBNOU1dx->JuHsJ9z;
        if (tCBNOU1dx->JuHsJ9z > KkZ0IW5) {
            pmax = tCBNOU1dx;
            KkZ0IW5 = tCBNOU1dx->JuHsJ9z;
        }
        tCBNOU1dx = tCBNOU1dx->next;
    }
    while (tCBNOU1dx);
    printf ("%s\n%d\n", pmax->FhLeN9SA0d, KkZ0IW5);
    printf ("%d", gu2p3Ywk);
}

int main () {
    int gu2p3Ywk;
    struct   student *nNErulf;
    print (nNErulf);
    nNErulf = CERFNlPCfbK ();
    scanf ("%d", &N);
}

