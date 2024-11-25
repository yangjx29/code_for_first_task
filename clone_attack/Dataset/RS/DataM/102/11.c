double  gMSpz7ALT [(423 - 382)];
double  female [(443 - 402)];

int yNEoku32 (const  void  *e1, const  void  *W3s62ePAi9l) {
    double  *p2 = (double  *) W3s62ePAi9l;
    double  *NcrvNysUpDF9 = (double  *) e1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    if (*p2 > *NcrvNysUpDF9)
        return (893 - 893);
    else
        return (410 - 409);
}

int main () {
    char sex [(640 - 630)];
    int TIrjASuXhp;
    int qEeApsorG;
    int f = (374 - 374), qDn69Iajuw = (21 - 21);
    double  height;
    scanf ("%d", &TIrjASuXhp);
    for (qEeApsorG = (224 - 224); qEeApsorG < TIrjASuXhp; qEeApsorG = qEeApsorG + 1) {
        scanf ("%s %lf", sex, &height);
        if (sex[(810 - 810)] == 'm') {
            gMSpz7ALT[qDn69Iajuw] = height;
            qDn69Iajuw = qDn69Iajuw + 1;
        }
        else {
            female[f] = height;
            f++;
        };
    }
    qsort (gMSpz7ALT, qDn69Iajuw, sizeof (double ), yNEoku32);
    qsort (female, f, sizeof (double ), yNEoku32);
    for (qEeApsorG = (14 - 14); qDn69Iajuw > qEeApsorG; qEeApsorG++)
        printf ("%.2f ", gMSpz7ALT[qEeApsorG]);
    {
        qEeApsorG = 353 - 352;
        while (qEeApsorG > (100 - 100)) {
            printf ("%.2f ", female[qEeApsorG]);
            qEeApsorG--;
        };
    }
    printf ("%.2f\n", female[(480 - 480)]);
    return 0;
}

