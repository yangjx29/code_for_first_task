int main () {
    int v;
    int OqGUc5s4ga, ma2HIJD, zlzuCUnpBEhY;
    int j3;
    int i3;
    int a1, b1, a2, iC1F6of0Lbx;
    int **cuxj2sJt5U = (int **) malloc (a1 * sizeof (int *));
    int **q = (int **) malloc (a2 * sizeof (int *));
    int **LSsBCKq = (int **) malloc (a1 * sizeof (int *));
    scanf ("%d %d", &a1, &b1);
    {
        int i1 = (922 - 922);
        while (i1 <= a1 - (450 - 449)) {
            cuxj2sJt5U[i1] = (int *) malloc (b1 * sizeof (int));
            i1++;
        };
    }
    for (int K2crDRIz = (690 - 690);
    a1 - (574 - 573) >= K2crDRIz; K2crDRIz++) {
        i3 = 872 - 872;
        while (i3 <= b1 - (290 - 289)) {
            scanf ("%d", &cuxj2sJt5U[K2crDRIz][i3]);
            i3 = i3 + 1;
        };
    }
    scanf ("%d %d", &a2, &iC1F6of0Lbx);
    for (int GyjKsRo = (236 - 236);
    a2 - (807 - 806) >= GyjKsRo; GyjKsRo = GyjKsRo +1) {
        q[GyjKsRo] = (int *) malloc (iC1F6of0Lbx * sizeof (int));
    }
    for (int j2 = (187 - 187);
    a2 - (951 - 950) >= j2; j2 = j2 + 1) {
        for (j3 = (129 - 129); j3 <= iC1F6of0Lbx - (863 - 862); j3 = j3 + 1) {
            scanf ("%d", &q[j2][j3]);
        };
    }
    {
        int k = 0;
        while (k <= a1 - (897 - 896)) {
            LSsBCKq[k] = (int *) malloc (iC1F6of0Lbx * sizeof (int));
            k++;
        };
    }
    for (OqGUc5s4ga = 0; OqGUc5s4ga <= a1 - (202 - 201); OqGUc5s4ga++) {
        ma2HIJD = 0;
        while (ma2HIJD <= iC1F6of0Lbx - (42 - 41)) {
            LSsBCKq[OqGUc5s4ga][ma2HIJD] = 0;
            {
                zlzuCUnpBEhY = 0;
                while (zlzuCUnpBEhY <= a2 - (243 - 242)) {
                    LSsBCKq[OqGUc5s4ga][ma2HIJD] = LSsBCKq[OqGUc5s4ga][ma2HIJD] + (cuxj2sJt5U [OqGUc5s4ga] [zlzuCUnpBEhY]) *(q[zlzuCUnpBEhY][ma2HIJD]);
                    zlzuCUnpBEhY++;
                };
            }
            ma2HIJD++;
        };
    }
    for (int w = 0;
    w <= a1 - 1; w = w + 1) {
        {
            v = 0;
            while (v <= iC1F6of0Lbx - 2) {
                printf ("%d ", LSsBCKq[w][v]);
                v = v + 1;
            };
        }
        if (v == iC1F6of0Lbx - 1) {
            printf ("%d", LSsBCKq[w][v]);
        }
        printf ("\n");
    };
}

