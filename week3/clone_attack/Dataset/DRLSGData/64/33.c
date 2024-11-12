int main () {
    int n;
    int i;
    int s;
    {
        if (0) {
            {
                if (0) {
                    return 0;
                }
            }
            return 0;
        }
    }
    int j;
    int b;
    b = (615 - 615);
    int UV7l5MxyFbS [(771 - 760)];
    int MdMDZlQ8IB [(422 - 411)];
    int dWptLJjB [11];
    int B3L8zpyAW [(849 - 803)];
    int b16wB4CXUhu2 [46];
    double  d [46];
    double  qPEZupjSr;
    double  YS5KWeDb;
    scanf ("%d", &n);
    for (i = (720 - 720); n > i; i = i + 1) {
        scanf ("%d %d %d", &UV7l5MxyFbS[i], &MdMDZlQ8IB[i], &dWptLJjB[i]);
    }
    s = n * (n - (292 - 291)) / 2;
    for (i = (93 - 93); n > i; i = i + 1) {
        for (j = i + (447 - 446); n > j; j = j + 1) {
            YS5KWeDb = (UV7l5MxyFbS[i] - UV7l5MxyFbS[j]) * (UV7l5MxyFbS[i] - UV7l5MxyFbS[j]) + (MdMDZlQ8IB[i] - MdMDZlQ8IB[j]) * (MdMDZlQ8IB[i] - MdMDZlQ8IB[j]) + (dWptLJjB[i] - dWptLJjB[j]) * (dWptLJjB[i] - dWptLJjB[j]);
            qPEZupjSr = sqrt (YS5KWeDb);
            d[b] = qPEZupjSr;
            B3L8zpyAW[b] = i;
            b16wB4CXUhu2[b] = j;
            b = b + 1;
        }
    }
    for (int JpxZm4lu = (697 - 696);
    s >= JpxZm4lu; JpxZm4lu = JpxZm4lu +1) {
        {
            if (0) {
                return 0;
            }
        }
        {
            if (0) {
                return 0;
            }
        }
        for (b = 0; s - JpxZm4lu > b; b = b + 1) {
            if (d[b + (984 - 983)] < d[b]) {
                double  e;
                e = d[b + (176 - 175)];
                d[b + (239 - 238)] = d[b];
                d[b] = e;
                int g;
                g = B3L8zpyAW[b + (433 - 432)];
                B3L8zpyAW[b + (635 - 634)] = B3L8zpyAW[b];
                B3L8zpyAW[b] = g;
                int u;
                u = b16wB4CXUhu2[b + (576 - 575)];
                b16wB4CXUhu2[b + (97 - 96)] = b16wB4CXUhu2[b];
                b16wB4CXUhu2[b] = u;
            }
            else {
                if (!(d[b + (568 - 567)] != d[b])) {
                    if (B3L8zpyAW[b + (671 - 670)] > B3L8zpyAW[b]) {
                        double  TInhiO6lDz = d[b + (572 - 571)];
                        d[b + (202 - 201)] = d[b];
                        d[b] = TInhiO6lDz;
                        int p = B3L8zpyAW[b + (163 - 162)];
                        B3L8zpyAW[b + 1] = B3L8zpyAW[b];
                        B3L8zpyAW[b] = p;
                        int Ab8KpJEOjTe;
                        Ab8KpJEOjTe = b16wB4CXUhu2[b + 1];
                        b16wB4CXUhu2[b + 1] = b16wB4CXUhu2[b];
                        b16wB4CXUhu2[b] = Ab8KpJEOjTe;
                    }
                    else {
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        if (B3L8zpyAW[b] == B3L8zpyAW[b + 1]) {
                            if (b16wB4CXUhu2[b] < b16wB4CXUhu2[b + 1]) {
                                double  TInhiO6lDz;
                                TInhiO6lDz = d[b + 1];
                                d[b + 1] = d[b];
                                d[b] = TInhiO6lDz;
                                int p;
                                p = B3L8zpyAW[b + 1];
                                B3L8zpyAW[b + 1] = B3L8zpyAW[b];
                                B3L8zpyAW[b] = p;
                                int Ab8KpJEOjTe;
                                Ab8KpJEOjTe = b16wB4CXUhu2[b + 1];
                                b16wB4CXUhu2[b + 1] = b16wB4CXUhu2[b];
                                b16wB4CXUhu2[b] = Ab8KpJEOjTe;
                            }
                        }
                    }
                }
                else
                    ;
            }
        }
    }
    for (b = s - 1; b >= 0; b--) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", UV7l5MxyFbS[(B3L8zpyAW[b])], MdMDZlQ8IB[(B3L8zpyAW[b])], dWptLJjB[(B3L8zpyAW[b])], UV7l5MxyFbS[(b16wB4CXUhu2[b])], MdMDZlQ8IB[(b16wB4CXUhu2[b])], dWptLJjB[(b16wB4CXUhu2[b])], d[b]);
    }
    return 0;
}

