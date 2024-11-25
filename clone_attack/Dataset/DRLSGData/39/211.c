int main () {
    struct   MCbI0kGF3Doe {
        char NjYknIN [20];
        int RxmywIf;
        int UsHNCBaA;
        char qPT4BXx [2];
        char gXOQN98x [2];
        int LeyXj9BiH2RU;
        long  int mnh0qPovs9x;
    }
    MCbI0kGF3Doe [100];
    int n, NR7VuzlFBNx, tqxDAmKjh32 = 0, j9dF8rS0t = 0, nRx6d7V9eQA = 0, pC1syEkXo = 0, M0Ksrow = 0, e7OdKHFP4Qrq, q5Yu7qcB8, otjSVx1 = 0;
    scanf ("%d", &NR7VuzlFBNx);
    for (n = 0; NR7VuzlFBNx > n; n++)
        scanf ("%s%d%d%s%s%d", &MCbI0kGF3Doe[n].NjYknIN, &MCbI0kGF3Doe[n].RxmywIf, &MCbI0kGF3Doe[n].UsHNCBaA, &MCbI0kGF3Doe[n].qPT4BXx, &MCbI0kGF3Doe[n].gXOQN98x, &MCbI0kGF3Doe[n].LeyXj9BiH2RU);
    for (n = 0; n < NR7VuzlFBNx; n++) {
        pC1syEkXo = 0;
        nRx6d7V9eQA = 0;
        j9dF8rS0t = 0;
        tqxDAmKjh32 = 0;
        if ((80 < MCbI0kGF3Doe[n].RxmywIf) && (MCbI0kGF3Doe[n].LeyXj9BiH2RU >= 1))
            tqxDAmKjh32 = 8000;
        if ((85 < MCbI0kGF3Doe[n].RxmywIf) && (80 < MCbI0kGF3Doe[n].UsHNCBaA))
            j9dF8rS0t = 4000;
        if (MCbI0kGF3Doe[n].RxmywIf > 90)
            nRx6d7V9eQA = 2000;
        M0Ksrow = 0;
        if ((MCbI0kGF3Doe[n].UsHNCBaA > 80) && (!(0 != strcmp (MCbI0kGF3Doe[n].qPT4BXx, "Y"))))
            M0Ksrow = 850;
        if ((MCbI0kGF3Doe[n].RxmywIf > 85) && (strcmp ("Y", MCbI0kGF3Doe[n].gXOQN98x) == 0))
            pC1syEkXo = 1000;
        MCbI0kGF3Doe[n].mnh0qPovs9x = tqxDAmKjh32 + j9dF8rS0t + nRx6d7V9eQA + pC1syEkXo + M0Ksrow;
    }
    for (n = 0; n < NR7VuzlFBNx; n++) {
        otjSVx1 += MCbI0kGF3Doe[n].mnh0qPovs9x;
    }
    for (n = 1; n < NR7VuzlFBNx; n++)
        if (MCbI0kGF3Doe[n].mnh0qPovs9x > MCbI0kGF3Doe[0].mnh0qPovs9x) {
            q5Yu7qcB8 = MCbI0kGF3Doe[0].mnh0qPovs9x;
            MCbI0kGF3Doe[0].mnh0qPovs9x = MCbI0kGF3Doe[n].mnh0qPovs9x;
            MCbI0kGF3Doe[n].mnh0qPovs9x = q5Yu7qcB8;
            strcpy (MCbI0kGF3Doe[0].NjYknIN, MCbI0kGF3Doe[n].NjYknIN);
        }
    printf ("%s\n%d\n%d\n", MCbI0kGF3Doe[0].NjYknIN, MCbI0kGF3Doe[0].mnh0qPovs9x, otjSVx1);
    return 0;
}

