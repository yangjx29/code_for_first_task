int main (int hKLPrk, char *H4EApZycfXMa []) {
    double  ofuq4MwWyL;
    int KUtWobxX5VfT;
    int q0bPyIv;
    double  KHR285sXZ4J;
    int t5IR8LE23o;
    struct   hXJBUMp3 {
        double  EPAVjZuSaG, gZkRUNHgiOn0;
    }
    hXJBUMp3 [(769 - 759)];
    int nPrY1JVu9C;
    double  uV1rcnJW [(992 - 982)] [(376 - 366)];
    ofuq4MwWyL = (258.0 - 258.0);
    scanf ("%d\n", &KUtWobxX5VfT);
    {
        t5IR8LE23o = (590 - 590);
        for (; t5IR8LE23o < KUtWobxX5VfT;) {
            scanf ("%lf%lf", &hXJBUMp3[t5IR8LE23o].EPAVjZuSaG, &hXJBUMp3[t5IR8LE23o].gZkRUNHgiOn0);
            t5IR8LE23o = t5IR8LE23o + (119 - 118);
        }
    }
    {
        q0bPyIv = (981 - 981);
        for (; KUtWobxX5VfT > q0bPyIv;) {
            {
                nPrY1JVu9C = q0bPyIv + (906 - 905);
                for (; KUtWobxX5VfT > nPrY1JVu9C;) {
                    uV1rcnJW[nPrY1JVu9C][q0bPyIv] = (hXJBUMp3[nPrY1JVu9C].EPAVjZuSaG - hXJBUMp3[q0bPyIv].EPAVjZuSaG) * (hXJBUMp3[nPrY1JVu9C].EPAVjZuSaG - hXJBUMp3[q0bPyIv].EPAVjZuSaG) + (hXJBUMp3[nPrY1JVu9C].gZkRUNHgiOn0 - hXJBUMp3[q0bPyIv].gZkRUNHgiOn0) * (hXJBUMp3[nPrY1JVu9C].gZkRUNHgiOn0 - hXJBUMp3[q0bPyIv].gZkRUNHgiOn0);
                    if (uV1rcnJW[nPrY1JVu9C][q0bPyIv] > ofuq4MwWyL)
                        ofuq4MwWyL = uV1rcnJW[nPrY1JVu9C][q0bPyIv];
                    nPrY1JVu9C = nPrY1JVu9C + (920 - 919);
                }
            }
            q0bPyIv = q0bPyIv + (449 - 448);
        }
    }
    printf ("%.4f", sqrt (ofuq4MwWyL));
    return (265 - 265);
}

