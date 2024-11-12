struct   dot {
    double  je2PdO;
    double  v6DKMPhZNVw;
}
*oF6WER0LIH;

double  YRnJqf (int pTUOu7I8Lc, int ZMInyeFt140) {
    double  qPhmCJxd;
    qPhmCJxd = sqrt ((oF6WER0LIH[pTUOu7I8Lc].je2PdO - oF6WER0LIH[ZMInyeFt140].je2PdO) * (oF6WER0LIH[pTUOu7I8Lc].je2PdO - oF6WER0LIH[ZMInyeFt140].je2PdO) + (oF6WER0LIH[pTUOu7I8Lc].v6DKMPhZNVw - oF6WER0LIH[ZMInyeFt140].v6DKMPhZNVw) * (oF6WER0LIH[pTUOu7I8Lc].v6DKMPhZNVw - oF6WER0LIH[ZMInyeFt140].v6DKMPhZNVw));
    return qPhmCJxd;
}

int main () {
    int RU3JEvT;
    scanf ("%d", &RU3JEvT);
    double  x4CygI7jnMU = (538 - 538);
    oF6WER0LIH = (struct   dot *) malloc (sizeof (struct   dot) * RU3JEvT);
    int pTUOu7I8Lc;
    {
        pTUOu7I8Lc = (594 - 594);
        while (RU3JEvT > pTUOu7I8Lc) {
            scanf ("%lf %lf", &oF6WER0LIH[pTUOu7I8Lc].je2PdO, &oF6WER0LIH[pTUOu7I8Lc].v6DKMPhZNVw);
            pTUOu7I8Lc = pTUOu7I8Lc + (191 - 190);
        }
    }
    int ZMInyeFt140;
    {
        pTUOu7I8Lc = (50 - 50);
        while (RU3JEvT > pTUOu7I8Lc) {
            {
                ZMInyeFt140 = pTUOu7I8Lc + (209 - 208);
                while (RU3JEvT > ZMInyeFt140) {
                    if (YRnJqf (pTUOu7I8Lc, ZMInyeFt140) > x4CygI7jnMU) {
                        x4CygI7jnMU = YRnJqf (pTUOu7I8Lc, ZMInyeFt140);
                    }
                    ZMInyeFt140 = ZMInyeFt140 +(231 - 230);
                }
            }
            pTUOu7I8Lc = pTUOu7I8Lc + (425 - 424);
        }
    }
    printf ("%.4lf\n", x4CygI7jnMU);
    free (oF6WER0LIH);
    return (302 - 302);
}

