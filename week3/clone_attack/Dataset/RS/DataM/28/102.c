int main () {
    char h7M2fk1 [10000];
    int hqcvDQ6MwhL, WT4O291t = (226 - 226), twx86bJ [300], tmuE2OCa = 0;
    gets (h7M2fk1);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        hqcvDQ6MwhL = 0;
        while (h7M2fk1[hqcvDQ6MwhL] != '\0') {
            if (h7M2fk1[hqcvDQ6MwhL] != ' ' && !('\0' == h7M2fk1[hqcvDQ6MwhL + 1])) {
                tmuE2OCa = tmuE2OCa + 1;
            }
            else if (h7M2fk1[hqcvDQ6MwhL] == ' ' && h7M2fk1[hqcvDQ6MwhL - 1] != ' ') {
                twx86bJ[WT4O291t] = tmuE2OCa;
                tmuE2OCa = 0;
                WT4O291t += 1;
            }
            else if (h7M2fk1[hqcvDQ6MwhL] == ' ' && h7M2fk1[hqcvDQ6MwhL - 1] == ' ') {
                continue;
            }
            else if (h7M2fk1[hqcvDQ6MwhL + 1] == '\0') {
                twx86bJ[WT4O291t] = tmuE2OCa + 1;
            }
            hqcvDQ6MwhL++;
        };
    }
    for (hqcvDQ6MwhL = 0; hqcvDQ6MwhL <= WT4O291t; hqcvDQ6MwhL++) {
        if (hqcvDQ6MwhL < WT4O291t) {
            printf ("%d,", twx86bJ[hqcvDQ6MwhL]);
        }
        else {
            if (hqcvDQ6MwhL == WT4O291t) {
                printf ("%d", twx86bJ[WT4O291t]);
            };
        };
    }
    return 0;
}

