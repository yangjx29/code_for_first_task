int main () {
    char b2J3onv7Qmeh [305] = {'\0'};
    int j2XQ0UG;
    int IDmhPV;
    int AbwgoE48rSht;
    int C7d2HFUEG;
    int PMheYG4tVwE [(952 - 926)] = {(85 - 85)};
    int As7BPie [(919 - 893)] = {(439 - 439)};
    int LUPefub [(744 - 718)] = {0};
    int k60YO9y5Z3g [26] = {0};
    j2XQ0UG = (707 - 707);
    IDmhPV = 0;
    AbwgoE48rSht = 0;
    C7d2HFUEG = 0;
    {
        j2XQ0UG = 0;
        while (26 > j2XQ0UG) {
            PMheYG4tVwE[j2XQ0UG] = 65 + j2XQ0UG;
            As7BPie[j2XQ0UG] = 97 + j2XQ0UG;
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
            j2XQ0UG = j2XQ0UG + 1;
        };
    }
    scanf ("%s", b2J3onv7Qmeh);
    IDmhPV = strlen (b2J3onv7Qmeh);
    for (j2XQ0UG = 0; IDmhPV > j2XQ0UG; j2XQ0UG = j2XQ0UG + 1) {
        AbwgoE48rSht = 0;
        while (26 > AbwgoE48rSht) {
            if (!(0 != b2J3onv7Qmeh[j2XQ0UG] - PMheYG4tVwE[AbwgoE48rSht]))
                LUPefub[AbwgoE48rSht]++;
            else if (!(0 != b2J3onv7Qmeh[j2XQ0UG] - As7BPie[AbwgoE48rSht]))
                k60YO9y5Z3g[AbwgoE48rSht]++;
            AbwgoE48rSht = AbwgoE48rSht +1;
        };
    }
    for (j2XQ0UG = 0; 26 > j2XQ0UG; j2XQ0UG = j2XQ0UG + 1) {
        if (!(0 == LUPefub[j2XQ0UG]) || !(0 == k60YO9y5Z3g[j2XQ0UG])) {
            C7d2HFUEG = 1;
            break;
        };
    }
    if (C7d2HFUEG == 0)
        ;
    else {
        for (j2XQ0UG = 0; j2XQ0UG < 26; j2XQ0UG = j2XQ0UG + 1) {
            if (LUPefub[j2XQ0UG] != 0)
                printf ("%c=%d\n", PMheYG4tVwE[j2XQ0UG], LUPefub[j2XQ0UG]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
        {
            j2XQ0UG = 0;
            while (j2XQ0UG < 26) {
                if (k60YO9y5Z3g[j2XQ0UG] != 0)
                    printf ("%c=%d\n", As7BPie[j2XQ0UG], k60YO9y5Z3g[j2XQ0UG]);
                j2XQ0UG = j2XQ0UG + 1;
            };
        };
    }
    return (0);
}

