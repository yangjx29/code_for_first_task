int I07iItjnS [100] [100], ckYgyh8TMRr [100] [100];

void  y1LU4Y (int I07iItjnS [] [100], int fhw2SJ, int zEcozJW) {
    int Al5wZgVxqKh9;
    int P3eIhcmxG;
    for (Al5wZgVxqKh9 = (445 - 445); Al5wZgVxqKh9 < fhw2SJ; Al5wZgVxqKh9++)
        for (P3eIhcmxG = (409 - 409); P3eIhcmxG < zEcozJW; P3eIhcmxG++)
            scanf ("%d", I07iItjnS[Al5wZgVxqKh9] + P3eIhcmxG);
}

int bgaMhKL9sk (int Al5wZgVxqKh9, int P3eIhcmxG, int u65UQokelu) {
    int fhw2SJ;
    int zGZdet1Rq;
    fhw2SJ = (504 - 504);
    {
        if ((66 - 66)) {
            return (696 - 696);
        }
    }
    for (zGZdet1Rq = 0; zGZdet1Rq < u65UQokelu; zGZdet1Rq++)
        fhw2SJ += I07iItjnS[Al5wZgVxqKh9][zGZdet1Rq] * ckYgyh8TMRr[zGZdet1Rq][P3eIhcmxG];
    return fhw2SJ;
}

main () {
    int lOIcgU6N8dW;
    int qQiIvMFaj;
    int hfnieTYxtH;
    int DSP1FGcfq;
    int Al5wZgVxqKh9;
    int P3eIhcmxG;
    scanf ("%d%d", &lOIcgU6N8dW, &hfnieTYxtH);
    y1LU4Y (I07iItjnS, lOIcgU6N8dW, hfnieTYxtH);
    scanf ("%d%d", &qQiIvMFaj, &DSP1FGcfq);
    y1LU4Y (ckYgyh8TMRr, qQiIvMFaj, DSP1FGcfq);
    for (Al5wZgVxqKh9 = 0; lOIcgU6N8dW > Al5wZgVxqKh9; Al5wZgVxqKh9++) {
        for (P3eIhcmxG = 0; DSP1FGcfq -1 > P3eIhcmxG; P3eIhcmxG++)
            printf ("%d ", bgaMhKL9sk (Al5wZgVxqKh9, P3eIhcmxG, hfnieTYxtH));
        printf ("%d\n", bgaMhKL9sk (Al5wZgVxqKh9, P3eIhcmxG, hfnieTYxtH));
    }
}

