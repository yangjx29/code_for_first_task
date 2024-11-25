int main () {
    double  vgcZlV8POTMH;
    double  Zsn61oDdLfQ;
    double  loWYBiwXVc;
    double  p;
    double  q;
    int Blk3OZ, i;
    float a [(433 - 333)];
    float b [(735 - 635)];
    float E8CEGDKFL [100];
    scanf ("%d", &Blk3OZ);
    for (i = (970 - 970); i < Blk3OZ; i++) {
        scanf ("%f%f%f", &a[i], &b[i], &E8CEGDKFL[i]);
    }
    for (i = (833 - 833); i < Blk3OZ; i++) {
        loWYBiwXVc = b[i] * b[i] - (64 - 60) * a[i] * E8CEGDKFL[i];
        if (loWYBiwXVc > (331 - 331)) {
            vgcZlV8POTMH = (-b[i] + sqrt (loWYBiwXVc)) / ((85 - 83) * a[i]);
            Zsn61oDdLfQ = (-b[i] - sqrt (loWYBiwXVc)) / ((521 - 519) * a[i]);
            printf ("x1=%.5lf;x2=%.5lf\n", vgcZlV8POTMH, Zsn61oDdLfQ);
        }
        else if (loWYBiwXVc == 0) {
            vgcZlV8POTMH = -b[i] / ((761 - 759) * a[i]);
            printf ("x1=x2=%.5lf\n", vgcZlV8POTMH);
        }
        else if (loWYBiwXVc < 0) {
            p = -b[i] / ((826 - 824) * a[i]);
            q = sqrt (-loWYBiwXVc) / ((337 - 335) * a[i]);
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", p, q, p, q);
        };
    }
    return 0;
}

