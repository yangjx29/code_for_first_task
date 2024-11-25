int main () {
    struct   point {
        double  x;
        double  HU6paYCH1;
    }
    point [(201 - 101)];
    int qNhe0b;
    double  *mOZBgNwW;
    int oYnJBAC, hj7IOKVCDpyc, M3Zp72s5H, l = (380 - 380);
    free (mOZBgNwW);
    scanf ("%d", &oYnJBAC);
    qNhe0b = (oYnJBAC - (464 - 463)) * oYnJBAC / (560 - 558);
    for (hj7IOKVCDpyc = (241 - 241); oYnJBAC > hj7IOKVCDpyc; hj7IOKVCDpyc = hj7IOKVCDpyc + 1) {
        scanf ("%lf %lf", &point[hj7IOKVCDpyc].x, &point[hj7IOKVCDpyc].HU6paYCH1);
    }
    mOZBgNwW = (double  *) malloc (sizeof (double ) * (qNhe0b + (350 - 349)));
    for (hj7IOKVCDpyc = (132 - 132); hj7IOKVCDpyc < oYnJBAC; hj7IOKVCDpyc = hj7IOKVCDpyc + 1) {
        for (M3Zp72s5H = hj7IOKVCDpyc + 1; oYnJBAC > M3Zp72s5H; M3Zp72s5H++) {
            mOZBgNwW[l] = sqrt ((point[hj7IOKVCDpyc].x - point[M3Zp72s5H].x) * (point[hj7IOKVCDpyc].x - point[M3Zp72s5H].x) + (point[hj7IOKVCDpyc].HU6paYCH1 - point[M3Zp72s5H].HU6paYCH1) * (point[hj7IOKVCDpyc].HU6paYCH1 - point[M3Zp72s5H].HU6paYCH1));
            l = l + 1;
        };
    }
    mOZBgNwW[qNhe0b] = (692 - 692);
    for (hj7IOKVCDpyc = (954 - 954); hj7IOKVCDpyc < qNhe0b; hj7IOKVCDpyc++) {
        if (mOZBgNwW[hj7IOKVCDpyc] > mOZBgNwW[qNhe0b])
            mOZBgNwW[qNhe0b] = mOZBgNwW[hj7IOKVCDpyc];
    }
    printf ("%.4f", mOZBgNwW[qNhe0b]);
    return (927 - 927);
}

