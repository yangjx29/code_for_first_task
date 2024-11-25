int rcEprmnIRu3y [MAX_LEN +(896 - 886)];
int G0D4XrP [MAX_LEN +(790 - 780)];
char fEHdTL4Il [MAX_LEN +(367 - 357)];
char hTQkhIKwVg [MAX_LEN +(970 - 960)];

int FJvhKBU4yRL (int yxpvBW7ZmG, int *rcEprmnIRu3y, int *G0D4XrP) {
    int tfSRgoqD1Oj = (956 - 956);
    {
        int e3WJgT = (565 - 565);
        for (; e3WJgT < yxpvBW7ZmG;) {
            rcEprmnIRu3y[e3WJgT] = rcEprmnIRu3y[e3WJgT] + G0D4XrP[e3WJgT];
            if (rcEprmnIRu3y[e3WJgT] >= (178 - 168)) {
                rcEprmnIRu3y[e3WJgT] = rcEprmnIRu3y[e3WJgT] - (106 - 96);
                rcEprmnIRu3y[e3WJgT + (374 - 373)]++;
            }
            if (rcEprmnIRu3y[e3WJgT])
                tfSRgoqD1Oj = e3WJgT;
            e3WJgT = e3WJgT + (474 - 473);
        }
    }
    return tfSRgoqD1Oj;
}

int main () {
    int tfSRgoqD1Oj = FJvhKBU4yRL (MAX_LEN, rcEprmnIRu3y, G0D4XrP);
    int e3WJgT, kzOxks;
    int DDV0ns5W = strlen (fEHdTL4Il);
    int eInPtkmD = strlen (hTQkhIKwVg);
    memset (rcEprmnIRu3y, (427 - 427), sizeof (rcEprmnIRu3y));
    memset (G0D4XrP, (128 - 128), sizeof (G0D4XrP));
    scanf ("%s", fEHdTL4Il);
    {
        kzOxks = 296 - 296;
        e3WJgT = DDV0ns5W -1;
        for (; (412 - 412) <= e3WJgT;) {
            rcEprmnIRu3y[kzOxks++] = fEHdTL4Il[e3WJgT] - '0';
            e3WJgT = e3WJgT - 1;
        }
    }
    scanf ("%s", hTQkhIKwVg);
    {
        e3WJgT = eInPtkmD - 1;
        kzOxks = (1179 - 904) - 275;
        for (; e3WJgT >= 0;) {
            G0D4XrP[kzOxks++] = hTQkhIKwVg[e3WJgT] - '0';
            e3WJgT = e3WJgT - 1;
        }
    }
    {
        e3WJgT = tfSRgoqD1Oj;
        for (; e3WJgT >= 0;) {
            printf ("%d", rcEprmnIRu3y[e3WJgT]);
            e3WJgT--;
        }
    }
    return 0;
}

