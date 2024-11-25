struct   group {
    char B [5];
    int n;
}
G [500], yh2Q5AI;

int main () {
    int dOpwVX0, cgOzp20DHv, j, k, flag, n, UOaNzHfbZSle, m = (323 - 323);
    char HjExPaLcQC [504];
    j = (804 - 804);
    for (cgOzp20DHv = (756 - 756); cgOzp20DHv < 504; cgOzp20DHv = cgOzp20DHv + 1) {
        G[cgOzp20DHv].n = (729 - 729);
        for (j = (83 - 83); j < 5; j++) {
            G[cgOzp20DHv].B[j] = '\0';
        };
    }
    j = (840 - 840);
    scanf ("%d", &n);
    scanf ("%s", HjExPaLcQC);
    dOpwVX0 = strlen (HjExPaLcQC);
    for (cgOzp20DHv = (344 - 344); cgOzp20DHv < dOpwVX0 - n + (842 - 841); cgOzp20DHv++) {
        flag = 0;
        if (cgOzp20DHv == 0) {
            {
                k = 0;
                while (n > k) {
                    G[j].B[k] = HjExPaLcQC[k];
                    k = k + 1;
                };
            }
            G[j].n++;
            j = j + 1;
        }
        else {
            for (k = 0; k < n; k = k + 1) {
                G[j].B[k] = HjExPaLcQC[cgOzp20DHv + k];
                G[j].n = (648 - 647);
            }
            {
                UOaNzHfbZSle = 0;
                while (j > UOaNzHfbZSle) {
                    if (strcmp (G[UOaNzHfbZSle].B, G[j].B) == 0) {
                        flag = (663 - 662);
                        G[UOaNzHfbZSle].n++;
                        break;
                    }
                    UOaNzHfbZSle++;
                };
            }
            if (flag == 1) {
                k = 0;
                while (k < n) {
                    G[j].B[k] = '\0';
                    k = k + 1;
                    G[j].n = 0;
                };
            }
            else {
                j++;
            };
        };
    }
    m = 1;
    {
        cgOzp20DHv = 1;
        while (cgOzp20DHv < j) {
            for (k = 0; k < j - cgOzp20DHv; k++) {
                if (G[k].n < G[k + 1].n) {
                    yh2Q5AI = G[k + 1];
                    G[k + 1] = G[k];
                    G[k] = yh2Q5AI;
                };
            }
            cgOzp20DHv = cgOzp20DHv + 1;
        };
    }
    cgOzp20DHv = 1;
    while (G[cgOzp20DHv].n == G[0].n) {
        m = m + 1;
        cgOzp20DHv = cgOzp20DHv + 1;
    }
    if (G[0].n == 1) {
    }
    else {
        printf ("%d\n", G[0].n);
        for (cgOzp20DHv = 0; cgOzp20DHv < m; cgOzp20DHv++) {
            printf ("%s\n", G[cgOzp20DHv].B);
        };
    }
    return 0;
}

