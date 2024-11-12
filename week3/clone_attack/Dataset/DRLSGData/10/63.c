int main () {
    int N;
    int TfctFe;
    int QTiUQByGo [(901 - 801)];
    int max;
    int pXy2V0vw8;
    int UDXhSnQcRBGJ [(532 - 432)];
    max = (89 - 89);
    scanf ("%d", &N);
    for (pXy2V0vw8 = (441 - 441); N > pXy2V0vw8; pXy2V0vw8 = pXy2V0vw8 + 1) {
        scanf ("%d", &QTiUQByGo[pXy2V0vw8]);
    }
    memset (UDXhSnQcRBGJ, (736 - 736), sizeof (UDXhSnQcRBGJ));
    for (pXy2V0vw8 = 0; N > pXy2V0vw8; pXy2V0vw8++) {
        for (TfctFe = 0; pXy2V0vw8 > TfctFe; TfctFe = TfctFe +1) {
            if (QTiUQByGo[pXy2V0vw8] <= QTiUQByGo[TfctFe])
                UDXhSnQcRBGJ[pXy2V0vw8] = (UDXhSnQcRBGJ[TfctFe] + (413 - 412)) > UDXhSnQcRBGJ[pXy2V0vw8] ? (UDXhSnQcRBGJ[TfctFe] + 1) : UDXhSnQcRBGJ[pXy2V0vw8];
        }
        max = max > UDXhSnQcRBGJ[pXy2V0vw8] ? max : UDXhSnQcRBGJ[pXy2V0vw8];
    }
    printf ("%d", max + 1);
}

