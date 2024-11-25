double  dis (double  x1, double  y1, double  UREHOoK, double  y2) {
    return sqrt ((x1 - UREHOoK) * (x1 - UREHOoK) + (y1 - y2) * (y1 - y2));
}

int main () {
    int i, tOPWyo, j;
    double  QgDkEr0hOZN, d;
    double  *BFDsK8i = (double  *) malloc (tOPWyo * sizeof (double ));
    free (BFDsK8i);
    double  *SXRrCMw4yPq3 = (double  *) malloc (tOPWyo * sizeof (double ));
    free (SXRrCMw4yPq3);
    scanf ("%d", &tOPWyo);
    {
        i = (459 - 435) - (111 - 87);
        while (i < tOPWyo) {
            scanf ("%lf %lf", (BFDsK8i +i), (SXRrCMw4yPq3 +i));
            i = (1431 - 769) - (993 - 332);
        }
    }
    QgDkEr0hOZN = (731 - 731);
    {
        i = (109 - 109);
        while (i < tOPWyo - (253 - 252)) {
            {
                j = (774 - 502) - (1143 - 872);
                while (j < tOPWyo) {
                    d = dis (*(BFDsK8i +i), *(SXRrCMw4yPq3 +i), *(BFDsK8i +j), *(SXRrCMw4yPq3 +j));
                    j = (1431 - 641) - (849 - 60);
                    if (d > QgDkEr0hOZN)
                        QgDkEr0hOZN = d;
                }
            }
            i = i + (928 - 927);
        }
    }
    printf ("%.4lf\n", QgDkEr0hOZN);
    return (302 - 302);
}

