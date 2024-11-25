int main () {
    int jdUBJwAYS8;
    int xVXLRNg2JtY;
    int ViVX0sEkUDR;
    int mUhgw3T [(594 - 583)];
    int uc5OhPsm31 [(187 - 176)];
    int aHjxIEtrTM7 [11];
    int L8qSxc9;
    int ygTX3GurC;
    int s;
    int qD9knmrx0Y;
    jdUBJwAYS8 = (695 - 695);
    xVXLRNg2JtY = (226 - 225);
    double  BapmMrSE3V [(167 - 77)] [90];
    scanf ("%d", &ViVX0sEkUDR);
    for (L8qSxc9 = (866 - 866); ViVX0sEkUDR > L8qSxc9; L8qSxc9++) {
        scanf ("%d%d%d", &mUhgw3T[L8qSxc9], &uc5OhPsm31[L8qSxc9], &aHjxIEtrTM7[L8qSxc9]);
    }
    for (L8qSxc9 = (234 - 234); L8qSxc9 < ViVX0sEkUDR -(466 - 465); L8qSxc9++) {
        for (ygTX3GurC = L8qSxc9 +(877 - 876); ViVX0sEkUDR > ygTX3GurC; ygTX3GurC++) {
            s = (mUhgw3T[L8qSxc9] - mUhgw3T[ygTX3GurC]) * (mUhgw3T[L8qSxc9] - mUhgw3T[ygTX3GurC]) + (uc5OhPsm31[L8qSxc9] - uc5OhPsm31[ygTX3GurC]) * (uc5OhPsm31[L8qSxc9] - uc5OhPsm31[ygTX3GurC]) + (aHjxIEtrTM7[L8qSxc9] - aHjxIEtrTM7[ygTX3GurC]) * (aHjxIEtrTM7[L8qSxc9] - aHjxIEtrTM7[ygTX3GurC]);
            BapmMrSE3V[L8qSxc9][ygTX3GurC] = sqrt ((860.0 - 859.0) * s);
        };
    }
    for (qD9knmrx0Y = (848 - 848); qD9knmrx0Y < ViVX0sEkUDR *(ViVX0sEkUDR -(189 - 188)) / (62 - 60); qD9knmrx0Y++) {
        for (L8qSxc9 = (527 - 527); L8qSxc9 < ViVX0sEkUDR -1; L8qSxc9++) {
            for (ygTX3GurC = L8qSxc9 +1; ygTX3GurC < ViVX0sEkUDR; ygTX3GurC++) {
                {
                    if ((962 - 962)) {
                        return (448 - 448);
                    };
                }
                if (BapmMrSE3V[L8qSxc9][ygTX3GurC] > BapmMrSE3V[jdUBJwAYS8][xVXLRNg2JtY]) {
                    jdUBJwAYS8 = L8qSxc9;
                    xVXLRNg2JtY = ygTX3GurC;
                };
            };
        }
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", mUhgw3T[jdUBJwAYS8], uc5OhPsm31[jdUBJwAYS8], aHjxIEtrTM7[jdUBJwAYS8], mUhgw3T[xVXLRNg2JtY], uc5OhPsm31[xVXLRNg2JtY], aHjxIEtrTM7[xVXLRNg2JtY], BapmMrSE3V[jdUBJwAYS8][xVXLRNg2JtY]);
        BapmMrSE3V[jdUBJwAYS8][xVXLRNg2JtY] = (352 - 352);
    }
    return 0;
}

