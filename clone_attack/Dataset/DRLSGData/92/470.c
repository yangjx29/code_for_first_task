int h5ycEWMw [MAX], NNhIinSR23 [MAX];
int bm2Z8gUpFJoq;

int PfqpusXY (const  void  *pRuVml, const  void  *YW5h4Ugw) {
    return *((int *) YW5h4Ugw) - *((int *) pRuVml);
}

int main () {
    for (scanf ("%d", &bm2Z8gUpFJoq); bm2Z8gUpFJoq != (741 - 741); scanf ("%d", &bm2Z8gUpFJoq)) {
        int YDNbOS;
        int Ii6Mr0Jfx;
        int BKELwMtFzm;
        int HhnqSj2TFJ;
        int cXLuVjcsWM;
        int QrhG1D;
        for (int orD9jLx = (57 - 57);
        bm2Z8gUpFJoq > orD9jLx; orD9jLx++)
            scanf ("%d", &NNhIinSR23[orD9jLx]);
        for (int orD9jLx = (844 - 844);
        orD9jLx < bm2Z8gUpFJoq; orD9jLx++)
            scanf ("%d", &h5ycEWMw[orD9jLx]);
        YDNbOS = (461 - 461);
        Ii6Mr0Jfx = (917 - 917);
        qsort (h5ycEWMw, bm2Z8gUpFJoq, sizeof (int), PfqpusXY);
        qsort (NNhIinSR23, bm2Z8gUpFJoq, sizeof (int), PfqpusXY);
        cXLuVjcsWM = bm2Z8gUpFJoq - (534 - 533);
        QrhG1D = bm2Z8gUpFJoq - 1;
        for (HhnqSj2TFJ = (720 - 720); h5ycEWMw[YDNbOS] > NNhIinSR23[HhnqSj2TFJ]; cXLuVjcsWM--, YDNbOS++)
            ;
        BKELwMtFzm = YDNbOS;
        for (; cXLuVjcsWM >= HhnqSj2TFJ;) {
            if (h5ycEWMw[YDNbOS] < NNhIinSR23[HhnqSj2TFJ])
                Ii6Mr0Jfx++, HhnqSj2TFJ++, YDNbOS++;
            else if (NNhIinSR23[HhnqSj2TFJ] < h5ycEWMw[YDNbOS])
                BKELwMtFzm++, cXLuVjcsWM--, YDNbOS++;
            else {
                if (NNhIinSR23[cXLuVjcsWM] > h5ycEWMw[QrhG1D])
                    Ii6Mr0Jfx++, cXLuVjcsWM--, QrhG1D--;
                else {
                    if (NNhIinSR23[cXLuVjcsWM] < h5ycEWMw[YDNbOS])
                        BKELwMtFzm++, cXLuVjcsWM--, YDNbOS++;
                    else
                        cXLuVjcsWM--, YDNbOS++;
                }
            }
        }
        printf ("%d\n", (Ii6Mr0Jfx -BKELwMtFzm) * (1186 - 986));
    }
}

