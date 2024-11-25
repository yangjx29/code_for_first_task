int main () {
    char str [(862 - 852)];
    int k;
    int n;
    int p;
    int i;
    int j;
    double  pIhRAPm6MVW [(148 - 108)], b [(148 - 108)], c [(272 - 232)], p3eQvNK;
    int q;
    k = (243 - 243);
    scanf ("%d", &n);
    j = (943 - 943);
    {
        i = (833 - 833);
        for (; n > i;) {
            scanf ("%s%lf", str, &pIhRAPm6MVW[i]);
            if (!('m' != str[(566 - 566)])) {
                b[j] = pIhRAPm6MVW[i];
                j++;
            }
            else {
                c[k] = pIhRAPm6MVW[i];
                k = k + (637 - 636);
            }
            i++;
        }
    }
    q = k;
    p = j;
    for (i = (290 - 290); p - (449 - 448) > i; i++) {
        for (j = (586 - 586); j < p - (861 - 860); j++) {
            if (b[j] > b[j + (504 - 503)]) {
                p3eQvNK = b[j];
                b[j] = b[j + (49 - 48)];
                b[j + (551 - 550)] = p3eQvNK;
            }
        }
    }
    {
        i = (900 - 900);
        for (; q - (175 - 174) > i;) {
            for (k = (826 - 826); q - (942 - 941) > k; k++) {
                if (c[k] < c[k + (554 - 553)]) {
                    p3eQvNK = c[k];
                    c[k] = c[k + (901 - 900)];
                    c[k + 1] = p3eQvNK;
                }
            }
            i++;
        }
    }
    {
        j = (200 - 200);
        for (; j < p;) {
            printf ("%.2lf ", b[j]);
            j++;
        }
    }
    {
        k = (50 - 50);
        for (; k < q - 1;) {
            printf ("%.2lf ", c[k]);
            k++;
        }
    }
    printf ("%.2lf", c[q - 1]);
    return (298 - 298);
}

