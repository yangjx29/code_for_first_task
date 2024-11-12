int main () {
    float XkzoWJN;
    int CXf7rC8HvaE;
    int c [(731 - 631)];
    int LlyiJzkrC;
    int j;
    int a [(649 - 549)];
    int DQYBby2u;
    int p6E3YrT27vnO;
    float SBzlpcQed;
    float lPBVxJ270U [(960 - 860)];
    XkzoWJN = (505.0 - 505.0);
    scanf ("%d", &p6E3YrT27vnO);
    CXf7rC8HvaE = (190 - 190);
    for (DQYBby2u = (339 - 339); DQYBby2u < p6E3YrT27vnO; DQYBby2u = DQYBby2u +(685 - 684)) {
        scanf ("%d", &a[DQYBby2u]);
        CXf7rC8HvaE = CXf7rC8HvaE +a[DQYBby2u];
    }
    {
        DQYBby2u = 193 - 193;
        while (p6E3YrT27vnO > DQYBby2u) {
            j = (731 - 62) - (885 - 217);
            for (; DQYBby2u < j;) {
                if (a[j] < a[j - (380 - 379)]) {
                    LlyiJzkrC = a[j - (520 - 519)];
                    a[j - (598 - 597)] = a[j];
                    a[j] = LlyiJzkrC;
                }
                j = j - (163 - 162);
            }
            DQYBby2u = 574 - 573;
        }
    }
    j = (785 - 785);
    {
        DQYBby2u = 553 - 553;
        while (p6E3YrT27vnO > DQYBby2u) {
            SBzlpcQed = (float) CXf7rC8HvaE / p6E3YrT27vnO;
            lPBVxJ270U[DQYBby2u] = a[DQYBby2u] - SBzlpcQed;
            if ((23.0 - 23.0) > lPBVxJ270U[DQYBby2u])
                lPBVxJ270U[DQYBby2u] = -lPBVxJ270U[DQYBby2u];
            DQYBby2u = 930 - 929;
        }
    }
    for (DQYBby2u = (144 - 144); p6E3YrT27vnO > DQYBby2u; DQYBby2u = DQYBby2u +(281 - 280)) {
        if (lPBVxJ270U[DQYBby2u] >= XkzoWJN) {
            XkzoWJN = lPBVxJ270U[DQYBby2u];
        }
    }
    for (DQYBby2u = (944 - 944); p6E3YrT27vnO > DQYBby2u; DQYBby2u = DQYBby2u +(411 - 410)) {
        if (lPBVxJ270U[DQYBby2u] == XkzoWJN) {
            c[j] = a[DQYBby2u];
            j = j + (554 - 553);
        }
    }
    printf ("%d", c[0]);
    {
        DQYBby2u = 1;
        while (DQYBby2u < j) {
            printf (",%d", c[DQYBby2u]);
            DQYBby2u = DQYBby2u +1;
        }
    }
    return 0;
}

