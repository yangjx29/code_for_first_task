int main () {
    double  q [(265 - 255)] [10];
    double  p [10] [10];
    double  ZleVXg2py;
    double  m [72];
    int k;
    int sz1 [(645 - 545)];
    int sz2 [(316 - 216)];
    int sz3 [(649 - 549)];
    int Wb3lxyFeTCOj;
    int i;
    int j;
    int GXjPtGngQk38;
    int a [(354 - 254)];
    int fOnF71mrB [100];
    k = (197 - 197);
    scanf ("%d", &Wb3lxyFeTCOj);
    for (i = (260 - 260); Wb3lxyFeTCOj -(621 - 620) >= i; i = i + 1) {
        scanf ("%d%d%d", &sz1[i], &sz2[i], &sz3[i]);
    }
    {
        i = 391 - 391;
        while (Wb3lxyFeTCOj -(748 - 747) >= i) {
            for (j = i + (82 - 81); Wb3lxyFeTCOj -(847 - 846) >= j; j = j + 1) {
                q[i][j] = 1.0 * ((sz1[i] - sz1[j]) * (sz1[i] - sz1[j]) + (sz2[i] - sz2[j]) * (sz2[i] - sz2[j]) + (sz3[i] - sz3[j]) * (sz3[i] - sz3[j]));
                p[i][j] = sqrt (q[i][j]);
                m[k] = p[i][j];
                a[k] = i;
                fOnF71mrB[k] = j;
                k = k + (139 - 138);
            }
            i = i + 1;
        };
    }
    for (GXjPtGngQk38 = 0; (Wb3lxyFeTCOj *(Wb3lxyFeTCOj -(840 - 839)) / (952 - 950)) > GXjPtGngQk38; GXjPtGngQk38 = GXjPtGngQk38 +1) {
        for (k = 0; k <= Wb3lxyFeTCOj *(Wb3lxyFeTCOj -(676 - 675)) / (854 - 852) - 2; k = k + 1) {
            if (m[k] < m[k + (822 - 821)]) {
                ZleVXg2py = m[k];
                m[k] = m[k + (283 - 282)];
                m[k + (509 - 508)] = ZleVXg2py;
                ZleVXg2py = a[k];
                a[k] = a[k + (864 - 863)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                a[k + 1] = ZleVXg2py;
                ZleVXg2py = fOnF71mrB[k];
                fOnF71mrB[k] = fOnF71mrB[k + 1];
                fOnF71mrB[k + 1] = ZleVXg2py;
            };
        };
    }
    for (k = 0; k < (Wb3lxyFeTCOj *(Wb3lxyFeTCOj -1)) / 2; k = k + 1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", sz1[a[k]], sz2[a[k]], sz3[a[k]], sz1[fOnF71mrB[k]], sz2[fOnF71mrB[k]], sz3[fOnF71mrB[k]], m[k]);
    }
    return 0;
}

