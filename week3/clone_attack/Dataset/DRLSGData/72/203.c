int main () {
    int KrUuvb;
    int vVn5HzFg;
    int t08Qua25DMd;
    int G47S2oy;
    int Y94DsaQoic8H [25] [25];
    int hrwkIh8alD [25] [25];
    scanf ("%d %d", &KrUuvb, &vVn5HzFg);
    {
        t08Qua25DMd = 0;
        while (t08Qua25DMd < KrUuvb) {
            {
                G47S2oy = 0;
                while (vVn5HzFg > G47S2oy) {
                    scanf ("%d", &Y94DsaQoic8H[t08Qua25DMd][G47S2oy]);
                    G47S2oy++;
                }
            }
            t08Qua25DMd++;
        }
    }
    {
        t08Qua25DMd = 0;
        while (KrUuvb > t08Qua25DMd) {
            {
                G47S2oy = 0;
                while (G47S2oy < vVn5HzFg) {
                    if (!(0 != t08Qua25DMd) && !(0 != G47S2oy)) {
                        if (Y94DsaQoic8H[t08Qua25DMd][G47S2oy +1] <= Y94DsaQoic8H[t08Qua25DMd][G47S2oy] && Y94DsaQoic8H[t08Qua25DMd + 1][G47S2oy] <= Y94DsaQoic8H[t08Qua25DMd][G47S2oy])
                            hrwkIh8alD[t08Qua25DMd][G47S2oy] = 1;
                    }
                    if (!(0 != t08Qua25DMd) && G47S2oy != 0 && G47S2oy != vVn5HzFg - 1) {
                        if (Y94DsaQoic8H[t08Qua25DMd][G47S2oy +1] <= Y94DsaQoic8H[t08Qua25DMd][G47S2oy] && Y94DsaQoic8H[t08Qua25DMd + 1][G47S2oy] <= Y94DsaQoic8H[t08Qua25DMd][G47S2oy] && Y94DsaQoic8H[t08Qua25DMd][G47S2oy -1] <= Y94DsaQoic8H[t08Qua25DMd][G47S2oy])
                            hrwkIh8alD[t08Qua25DMd][G47S2oy] = 1;
                    }
                    if (!(0 != t08Qua25DMd) && !(vVn5HzFg - 1 != G47S2oy)) {
                        if (Y94DsaQoic8H[t08Qua25DMd][G47S2oy -1] <= Y94DsaQoic8H[t08Qua25DMd][G47S2oy] && Y94DsaQoic8H[t08Qua25DMd + 1][G47S2oy] <= Y94DsaQoic8H[t08Qua25DMd][G47S2oy])
                            hrwkIh8alD[t08Qua25DMd][G47S2oy] = 1;
                    }
                    if (t08Qua25DMd != 0 && t08Qua25DMd != KrUuvb -1 && !(0 != G47S2oy)) {
                        if (Y94DsaQoic8H[t08Qua25DMd][G47S2oy +1] <= Y94DsaQoic8H[t08Qua25DMd][G47S2oy] && Y94DsaQoic8H[t08Qua25DMd + 1][G47S2oy] <= Y94DsaQoic8H[t08Qua25DMd][G47S2oy] && Y94DsaQoic8H[t08Qua25DMd - 1][G47S2oy] <= Y94DsaQoic8H[t08Qua25DMd][G47S2oy])
                            hrwkIh8alD[t08Qua25DMd][G47S2oy] = 1;
                    }
                    if (t08Qua25DMd != 0 && t08Qua25DMd != KrUuvb -1 && G47S2oy != 0 && G47S2oy != vVn5HzFg - 1) {
                        if (Y94DsaQoic8H[t08Qua25DMd][G47S2oy +1] <= Y94DsaQoic8H[t08Qua25DMd][G47S2oy] && Y94DsaQoic8H[t08Qua25DMd + 1][G47S2oy] <= Y94DsaQoic8H[t08Qua25DMd][G47S2oy] && Y94DsaQoic8H[t08Qua25DMd][G47S2oy] >= Y94DsaQoic8H[t08Qua25DMd - 1][G47S2oy] && Y94DsaQoic8H[t08Qua25DMd][G47S2oy -1] <= Y94DsaQoic8H[t08Qua25DMd][G47S2oy])
                            hrwkIh8alD[t08Qua25DMd][G47S2oy] = 1;
                    }
                    if (t08Qua25DMd != 0 && t08Qua25DMd != KrUuvb -1 && !(vVn5HzFg - 1 != G47S2oy)) {
                        if (Y94DsaQoic8H[t08Qua25DMd][G47S2oy] >= Y94DsaQoic8H[t08Qua25DMd][G47S2oy -1] && Y94DsaQoic8H[t08Qua25DMd + 1][G47S2oy] <= Y94DsaQoic8H[t08Qua25DMd][G47S2oy] && Y94DsaQoic8H[t08Qua25DMd][G47S2oy] >= Y94DsaQoic8H[t08Qua25DMd - 1][G47S2oy])
                            hrwkIh8alD[t08Qua25DMd][G47S2oy] = 1;
                    }
                    if (!(KrUuvb -1 != t08Qua25DMd) && !(0 != G47S2oy)) {
                        if (Y94DsaQoic8H[t08Qua25DMd][G47S2oy] >= Y94DsaQoic8H[t08Qua25DMd][G47S2oy +1] && Y94DsaQoic8H[t08Qua25DMd][G47S2oy] >= Y94DsaQoic8H[t08Qua25DMd - 1][G47S2oy])
                            hrwkIh8alD[t08Qua25DMd][G47S2oy] = 1;
                    }
                    if (t08Qua25DMd == KrUuvb -1 && G47S2oy != 0 && G47S2oy != vVn5HzFg - 1) {
                        if (Y94DsaQoic8H[t08Qua25DMd][G47S2oy] >= Y94DsaQoic8H[t08Qua25DMd][G47S2oy +1] && Y94DsaQoic8H[t08Qua25DMd][G47S2oy] >= Y94DsaQoic8H[t08Qua25DMd - 1][G47S2oy] && Y94DsaQoic8H[t08Qua25DMd][G47S2oy] >= Y94DsaQoic8H[t08Qua25DMd][G47S2oy -1])
                            hrwkIh8alD[t08Qua25DMd][G47S2oy] = 1;
                    }
                    if (t08Qua25DMd == KrUuvb -1 && G47S2oy == vVn5HzFg - 1) {
                        if (Y94DsaQoic8H[t08Qua25DMd][G47S2oy] >= Y94DsaQoic8H[t08Qua25DMd][G47S2oy -1] && Y94DsaQoic8H[t08Qua25DMd][G47S2oy] >= Y94DsaQoic8H[t08Qua25DMd - 1][G47S2oy])
                            hrwkIh8alD[t08Qua25DMd][G47S2oy] = 1;
                    }
                    G47S2oy++;
                }
            }
            t08Qua25DMd++;
        }
    }
    {
        t08Qua25DMd = 0;
        while (t08Qua25DMd < KrUuvb) {
            {
                G47S2oy = 0;
                while (G47S2oy < vVn5HzFg) {
                    if (hrwkIh8alD[t08Qua25DMd][G47S2oy] == 1)
                        printf ("%d %d\n", t08Qua25DMd, G47S2oy);
                    G47S2oy++;
                }
            }
            t08Qua25DMd++;
        }
    }
    return 0;
}

