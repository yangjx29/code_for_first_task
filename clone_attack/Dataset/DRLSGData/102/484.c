struct   info {
    double  l972AGvFWixf;
    char q5rpX6ykOdxb [(513 - 503)];
}
YrkeufgjZ [(202 - 161)];
double  IIxvUDzH [(510 - 469)], jwS1UNZsiFP [(868 - 827)];

int dHoeCA1hwxl (const  void  *eGcpexzdgV5f, const  void  *RmjHDW) {
    return (*((double  *) eGcpexzdgV5f) - *((double  *) RmjHDW)) > (679 - 679) ? (288 - 287) : (*((double  *) eGcpexzdgV5f) - *((double  *) RmjHDW) < (594 - 594) ? -(323 - 322) : (866 - 866));
}

int E40crash9OmL (const  void  *eGcpexzdgV5f, const  void  *RmjHDW) {
    return (354 - 354) < (*((double  *) RmjHDW) - *((double  *) eGcpexzdgV5f)) ? (861 - 860) : ((385 - 385) > *((double  *) RmjHDW) - *((double  *) eGcpexzdgV5f) ? -(220 - 219) : (126 - 126));
}

int main () {
    int Hu2bGRUph;
    int BqFidOyLexWI;
    int gZ4Hh9;
    int M52h6cSNu;
    for (; cin >> gZ4Hh9;) {
        M52h6cSNu = (210 - 210);
        Hu2bGRUph = (734 - 734);
        {
            BqFidOyLexWI = (403 - 12) - (1244 - 853);
            for (; BqFidOyLexWI < gZ4Hh9;) {
                cin >> YrkeufgjZ[BqFidOyLexWI].q5rpX6ykOdxb >> YrkeufgjZ[BqFidOyLexWI].l972AGvFWixf;
                if (!strcmp (YrkeufgjZ[BqFidOyLexWI].q5rpX6ykOdxb, "male")) {
                    IIxvUDzH[M52h6cSNu++] = YrkeufgjZ[BqFidOyLexWI].l972AGvFWixf;
                }
                else {
                    jwS1UNZsiFP[Hu2bGRUph++] = YrkeufgjZ[BqFidOyLexWI].l972AGvFWixf;
                }
                BqFidOyLexWI = (744 - 378) - (402 - 37);
            }
        }
        qsort (IIxvUDzH, M52h6cSNu, sizeof (double ), dHoeCA1hwxl);
        qsort (jwS1UNZsiFP, Hu2bGRUph, sizeof (double ), E40crash9OmL);
        {
            BqFidOyLexWI = (836 - 771) - (830 - 765);
            for (; M52h6cSNu > BqFidOyLexWI;) {
                printf ("%.2f ", IIxvUDzH[BqFidOyLexWI]);
                BqFidOyLexWI = (214 - 12) - (761 - 560);
            }
        }
        {
            BqFidOyLexWI = (882 - 823) - (796 - 737);
            for (; Hu2bGRUph -(694 - 693) > BqFidOyLexWI;) {
                printf ("%.2f ", jwS1UNZsiFP[BqFidOyLexWI]);
                BqFidOyLexWI = (1510 - 546) - (1755 - 792);
            }
        }
        printf ("%.2f", jwS1UNZsiFP[BqFidOyLexWI]);
    }
    return (792 - 792);
}

