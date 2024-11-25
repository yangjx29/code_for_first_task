int main () {
    int P5abzBMx19;
    int eDMJ2FRtY;
    char ttdkaOJI2;
    int xUopC4Ijsk;
    int LHyUsRrlvm6;
    int UTiO5Re8FwVA;
    int P38UvGI [(677 - 669)];
    int lhrDRxGiFH;
    int HnQUCRq [(984 - 976)] [8];
    int BuDcm0Eay1JR;
    BuDcm0Eay1JR = (691 - 691);
    scanf ("%d%c%d", &P5abzBMx19, &ttdkaOJI2, &eDMJ2FRtY);
    {
        xUopC4Ijsk = (812 - 812);
        while (xUopC4Ijsk < P5abzBMx19) {
            {
                {
                    if ((645 - 645)) {
                        return (218 - 218);
                    }
                }
                LHyUsRrlvm6 = 0;
                while (LHyUsRrlvm6 < eDMJ2FRtY) {
                    scanf ("%d", &HnQUCRq[xUopC4Ijsk][LHyUsRrlvm6]);
                    if (LHyUsRrlvm6 == 0) {
                        P38UvGI[xUopC4Ijsk] = LHyUsRrlvm6;
                    }
                    if (HnQUCRq[xUopC4Ijsk][LHyUsRrlvm6] > HnQUCRq[xUopC4Ijsk][P38UvGI[xUopC4Ijsk]]) {
                        P38UvGI[xUopC4Ijsk] = LHyUsRrlvm6;
                    }
                    LHyUsRrlvm6 = LHyUsRrlvm6 +(59 - 58);
                }
            }
            xUopC4Ijsk = xUopC4Ijsk + (544 - 543);
        }
    }
    {
        UTiO5Re8FwVA = 0;
        while (UTiO5Re8FwVA < P5abzBMx19) {
            lhrDRxGiFH = 0;
            for (xUopC4Ijsk = 0; xUopC4Ijsk < P5abzBMx19; xUopC4Ijsk = xUopC4Ijsk + 1) {
                if (xUopC4Ijsk == 0) {
                    lhrDRxGiFH = xUopC4Ijsk;
                }
                if (HnQUCRq[xUopC4Ijsk][P38UvGI[UTiO5Re8FwVA]] < HnQUCRq[lhrDRxGiFH][P38UvGI[UTiO5Re8FwVA]]) {
                    lhrDRxGiFH = xUopC4Ijsk;
                }
            }
            if (lhrDRxGiFH == UTiO5Re8FwVA) {
                printf ("%d+%d\n", lhrDRxGiFH, P38UvGI[UTiO5Re8FwVA]);
                BuDcm0Eay1JR += 1;
            }
            UTiO5Re8FwVA++;
        }
    }
    if (BuDcm0Eay1JR == 0) {
    }
    return 0;
}

