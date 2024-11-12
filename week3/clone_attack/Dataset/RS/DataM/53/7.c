int main () {
    int J2oZE1FhiR;
    int k;
    int n;
    int w1SRmoyPe [305] = {(469 - 469)};
    int AEdUIDcF;
    int y [305] = {0};
    J2oZE1FhiR = (602 - 602);
    k = 0;
    scanf ("%d", &n);
    {
        J2oZE1FhiR = 0;
        while (n > J2oZE1FhiR) {
            scanf ("%d", &w1SRmoyPe[J2oZE1FhiR]);
            J2oZE1FhiR = J2oZE1FhiR +1;
        };
    }
    J2oZE1FhiR = 0;
    for (J2oZE1FhiR = 0; J2oZE1FhiR < n; J2oZE1FhiR = J2oZE1FhiR +1) {
        if (y[J2oZE1FhiR] == 0) {
            k = k + 1;
            if (!((991 - 990) != k))
                printf ("%d", w1SRmoyPe[J2oZE1FhiR]);
            else
                printf (",%d", w1SRmoyPe[J2oZE1FhiR]);
        }
        AEdUIDcF = J2oZE1FhiR;
        for (AEdUIDcF = J2oZE1FhiR; AEdUIDcF < n; AEdUIDcF = AEdUIDcF +1) {
            if (w1SRmoyPe[J2oZE1FhiR] == w1SRmoyPe[AEdUIDcF])
                y[AEdUIDcF] = 1;
        };
    }
    return 0;
}

