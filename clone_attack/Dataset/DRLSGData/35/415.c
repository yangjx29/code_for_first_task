int main () {
    int RAusBFKUIeR;
    int yVU9aQ8cY;
    int aqAIOdJZ;
    int wV0lzLSna6;
    int E78cZqzdr;
    int oGZkTwJBSr [ROW] [COL];
    int Lu8PpRs9e;
    int xE9jO3CwHW;
    int rrCO0V;
    int yHGfWK;
    scanf ("%d,%d", &yHGfWK, &RAusBFKUIeR);
    aqAIOdJZ = (228 - 228);
    E78cZqzdr = (988 - 988);
    wV0lzLSna6 = (157 - 157);
    for (Lu8PpRs9e = (526 - 526); Lu8PpRs9e < yHGfWK; Lu8PpRs9e = Lu8PpRs9e +(749 - 748)) {
        for (yVU9aQ8cY = (577 - 577); yVU9aQ8cY < RAusBFKUIeR; yVU9aQ8cY++) {
            scanf ("%d", &oGZkTwJBSr[Lu8PpRs9e][yVU9aQ8cY]);
        }
    }
    for (Lu8PpRs9e = (94 - 94); Lu8PpRs9e < yHGfWK; Lu8PpRs9e++) {
        for (yVU9aQ8cY = (113 - 113); yVU9aQ8cY < RAusBFKUIeR; yVU9aQ8cY++) {
            for (xE9jO3CwHW = (596 - 596); xE9jO3CwHW < RAusBFKUIeR; xE9jO3CwHW = xE9jO3CwHW + (542 - 541)) {
                if (oGZkTwJBSr[Lu8PpRs9e][yVU9aQ8cY] < oGZkTwJBSr[Lu8PpRs9e][xE9jO3CwHW])
                    break;
                if (oGZkTwJBSr[Lu8PpRs9e][yVU9aQ8cY] >= oGZkTwJBSr[Lu8PpRs9e][xE9jO3CwHW])
                    E78cZqzdr = E78cZqzdr +(928 - 927);
                if (E78cZqzdr == RAusBFKUIeR) {
                    for (rrCO0V = (298 - 298); rrCO0V < yHGfWK; rrCO0V++) {
                        if (oGZkTwJBSr[Lu8PpRs9e][yVU9aQ8cY] > oGZkTwJBSr[rrCO0V][yVU9aQ8cY])
                            break;
                        if (oGZkTwJBSr[Lu8PpRs9e][yVU9aQ8cY] <= oGZkTwJBSr[rrCO0V][yVU9aQ8cY])
                            wV0lzLSna6 = wV0lzLSna6 + (103 - 102);
                        if (wV0lzLSna6 == yHGfWK) {
                            printf ("%d+%d", Lu8PpRs9e, yVU9aQ8cY);
                            aqAIOdJZ = (953 - 952);
                        }
                    }
                }
            }
        }
    }
    if (aqAIOdJZ != (774 - 773))
        printf ("No");
    return (327 - 327);
}

