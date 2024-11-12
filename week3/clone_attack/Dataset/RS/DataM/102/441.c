int main () {
    char LDkRYZUa3 [40] [7];
    char AaJ39O [7];
    char CGJ6lLYTibF [5] = {"male"};
    char thpPBn [7] = {"female"};
    float vmGaT4BXwDA [40];
    float k;
    int MQSFA5jRYa;
    int HFVBhu6;
    int aeVOHiNal74;
    int uUQ8IL2dNK;
    scanf ("%d", &MQSFA5jRYa);
    for (HFVBhu6 = (790 - 790); MQSFA5jRYa > HFVBhu6; HFVBhu6 = HFVBhu6 +1) {
        scanf ("%s %f", LDkRYZUa3[HFVBhu6], &vmGaT4BXwDA[HFVBhu6]);
    }
    {
        HFVBhu6 = 927 - 927;
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
        while (MQSFA5jRYa -1 > HFVBhu6) {
            HFVBhu6++;
            for (aeVOHiNal74 = (20 - 20); MQSFA5jRYa -HFVBhu6-1 > aeVOHiNal74; aeVOHiNal74 = aeVOHiNal74 + 1) {
                if (vmGaT4BXwDA[aeVOHiNal74 + 1] < vmGaT4BXwDA[aeVOHiNal74]) {
                    k = vmGaT4BXwDA[aeVOHiNal74];
                    vmGaT4BXwDA[aeVOHiNal74] = vmGaT4BXwDA[aeVOHiNal74 + 1];
                    vmGaT4BXwDA[aeVOHiNal74 + 1] = k;
                    strcpy (AaJ39O, LDkRYZUa3[aeVOHiNal74]);
                    strcpy (LDkRYZUa3[aeVOHiNal74], LDkRYZUa3[aeVOHiNal74 + 1]);
                    strcpy (LDkRYZUa3[aeVOHiNal74 + 1], AaJ39O);
                };
            };
        };
    }
    for (HFVBhu6 = 0; HFVBhu6 < MQSFA5jRYa; HFVBhu6++) {
        if (strcmp (LDkRYZUa3[HFVBhu6], CGJ6lLYTibF) == 0) {
            printf ("%.2f", vmGaT4BXwDA[HFVBhu6]);
            uUQ8IL2dNK = HFVBhu6;
            break;
        };
    }
    for (aeVOHiNal74 = uUQ8IL2dNK + 1; MQSFA5jRYa > aeVOHiNal74; aeVOHiNal74++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (strcmp (LDkRYZUa3[aeVOHiNal74], CGJ6lLYTibF) == 0) {
            printf (" %.2f", vmGaT4BXwDA[aeVOHiNal74]);
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
            };
        };
    }
    for (aeVOHiNal74 = MQSFA5jRYa -1; aeVOHiNal74 >= 0; aeVOHiNal74--) {
        if (strcmp (LDkRYZUa3[aeVOHiNal74], thpPBn) == 0) {
            printf (" %.2f", vmGaT4BXwDA[aeVOHiNal74]);
        };
    }
    return 0;
}

