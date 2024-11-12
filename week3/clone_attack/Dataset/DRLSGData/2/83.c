int main () {
    int SjNz4r [(536 - 510)] = {(378 - 378), (20 - 20), (284 - 284), (784 - 784), (220 - 220), (250 - 250), (961 - 961), (360 - 360), (475 - 475), (449 - 449), (920 - 920), (847 - 847), (662 - 662), (801 - 801), (723 - 723), (658 - 658), (284 - 284), (209 - 209), (822 - 822), (859 - 859), (173 - 173), (563 - 563), (429 - 429), (882 - 882), (57 - 57), (680 - 680)};
    int g3bOsXtT2a;
    char Mq3bpUIkD [(314 - 288)] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int tsoh3GA2mQU;
    int viXky8bFvTLC [(10268 - 268)];
    char a5GOq3NQdVso [(10358 - 358)] [(305 - 279)];
    int Dz6jydZW;
    int Bnwd8NiG9yAM;
    int m;
    int ZxmrczFJd;
    Bnwd8NiG9yAM = (446 - 446);
    Dz6jydZW = (486 - 486);
    scanf ("%d", &m);
    for (ZxmrczFJd = (608 - 608); ZxmrczFJd < m; ZxmrczFJd = ZxmrczFJd +(137 - 136)) {
        scanf ("%d", &viXky8bFvTLC[ZxmrczFJd]);
        scanf ("%s", &a5GOq3NQdVso[ZxmrczFJd]);
    }
    for (ZxmrczFJd = (419 - 419); ZxmrczFJd < m; ZxmrczFJd++) {
        for (tsoh3GA2mQU = 0; tsoh3GA2mQU < (367 - 341); tsoh3GA2mQU = tsoh3GA2mQU + (762 - 761)) {
            for (g3bOsXtT2a = 0; g3bOsXtT2a < (1001 - 975); g3bOsXtT2a = g3bOsXtT2a + (128 - 127)) {
                if (a5GOq3NQdVso[ZxmrczFJd][tsoh3GA2mQU] == Mq3bpUIkD[g3bOsXtT2a])
                    SjNz4r[g3bOsXtT2a]++;
            }
        }
    }
    for (ZxmrczFJd = 0; (983 - 957) > ZxmrczFJd; ZxmrczFJd++) {
        if (SjNz4r[ZxmrczFJd] > Bnwd8NiG9yAM) {
            Bnwd8NiG9yAM = SjNz4r[ZxmrczFJd];
            Dz6jydZW = ZxmrczFJd;
        }
    }
    printf ("%c\n", Mq3bpUIkD[Dz6jydZW]);
    printf ("%d\n", Bnwd8NiG9yAM);
    for (ZxmrczFJd = 0; ZxmrczFJd < m; ZxmrczFJd++) {
        for (tsoh3GA2mQU = 0; tsoh3GA2mQU < 26; tsoh3GA2mQU++) {
            if (a5GOq3NQdVso[ZxmrczFJd][tsoh3GA2mQU] == Mq3bpUIkD[Dz6jydZW]) {
                printf ("%d\n", viXky8bFvTLC[ZxmrczFJd]);
                break;
            }
        }
    }
    getchar ();
    getchar ();
    return 0;
}

