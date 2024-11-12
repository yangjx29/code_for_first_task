struct   distant {
    double  DlNE6XI8T;
    double  Wg8WwQj;
}
mLxRHG6JA [(1106 - 106)];

int main () {
    double  jayYwfUOG0kM;
    int KYO2LEs3uC;
    int n;
    int HWdZqI1ETs;
    int aQHenIFX;
    KYO2LEs3uC = (973 - 973);
    double  s [(1011 - 11)] = {(841 - 841)};
    scanf ("%d", &n);
    for (HWdZqI1ETs = 0; HWdZqI1ETs < n; HWdZqI1ETs = HWdZqI1ETs +1)
        scanf ("%lf %lf", &mLxRHG6JA[HWdZqI1ETs].DlNE6XI8T, &mLxRHG6JA[HWdZqI1ETs].Wg8WwQj);
    for (HWdZqI1ETs = 0; HWdZqI1ETs < n; HWdZqI1ETs = HWdZqI1ETs +1) {
        aQHenIFX = 84 - 83;
        while (aQHenIFX < n) {
            s[KYO2LEs3uC] = sqrt ((mLxRHG6JA[HWdZqI1ETs].DlNE6XI8T - mLxRHG6JA[aQHenIFX].DlNE6XI8T) * (mLxRHG6JA[HWdZqI1ETs].DlNE6XI8T - mLxRHG6JA[aQHenIFX].DlNE6XI8T) + (mLxRHG6JA[HWdZqI1ETs].Wg8WwQj - mLxRHG6JA[aQHenIFX].Wg8WwQj) * (mLxRHG6JA[HWdZqI1ETs].Wg8WwQj - mLxRHG6JA[aQHenIFX].Wg8WwQj));
            KYO2LEs3uC = KYO2LEs3uC +1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            aQHenIFX = aQHenIFX + 1;
        };
    }
    {
        HWdZqI1ETs = 0;
        while (HWdZqI1ETs < KYO2LEs3uC) {
            for (aQHenIFX = HWdZqI1ETs +1; aQHenIFX < KYO2LEs3uC; aQHenIFX = aQHenIFX + 1) {
                if (s[aQHenIFX] > s[HWdZqI1ETs]) {
                    jayYwfUOG0kM = s[HWdZqI1ETs];
                    s[HWdZqI1ETs] = s[aQHenIFX];
                    s[aQHenIFX] = jayYwfUOG0kM;
                };
            }
            HWdZqI1ETs = HWdZqI1ETs +1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            HWdZqI1ETs++;
        };
    }
    printf ("%.4lf\n", s[0]);
    return 0;
}

