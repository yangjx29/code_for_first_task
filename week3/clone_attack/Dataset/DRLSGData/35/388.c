int main () {
    int flag;
    int wLJEnesS2j;
    int OcTuPwdf7Cr9;
    int l3yVr6;
    int j;
    int b78tyF5;
    int a [(747 - 739)] [(388 - 380)];
    int qQ2Dt6 [(597 - 589)];
    int aXisI3DjTc [(233 - 225)];
    flag = (98 - 98);
    scanf ("%d,%d", &wLJEnesS2j, &OcTuPwdf7Cr9);
    {
        l3yVr6 = (681 - 453) - 228;
        for (; l3yVr6 < wLJEnesS2j;) {
            for (j = (997 - 997); j < OcTuPwdf7Cr9; j = j + (268 - 267)) {
                scanf ("%d", &a[l3yVr6][j]);
            }
            l3yVr6++;
        }
    }
    for (l3yVr6 = (589 - 589); l3yVr6 < wLJEnesS2j; l3yVr6 = l3yVr6 + (558 - 557)) {
        qQ2Dt6[l3yVr6] = (25 - 25);
        {
            j = 816 - 816;
            while (j < OcTuPwdf7Cr9 -(756 - 755)) {
                if (a[l3yVr6][qQ2Dt6[l3yVr6]] < a[l3yVr6][j + (272 - 271)]) {
                    qQ2Dt6[l3yVr6] = j + (294 - 293);
                }
                j++;
            }
        }
    }
    {
        j = 926 - 926;
        while (j < OcTuPwdf7Cr9) {
            aXisI3DjTc[j] = (469 - 469);
            {
                l3yVr6 = 256 - 256;
                while (l3yVr6 < wLJEnesS2j - (270 - 269)) {
                    if (a[aXisI3DjTc[j]][j] > a[l3yVr6 + (56 - 55)][j]) {
                        aXisI3DjTc[j] = l3yVr6 + (614 - 613);
                    }
                    l3yVr6++;
                }
            }
            j++;
        }
    }
    {
        b78tyF5 = 584 - 584;
        while (b78tyF5 < wLJEnesS2j) {
            if (aXisI3DjTc[qQ2Dt6[b78tyF5]] == b78tyF5) {
                printf ("%d+%d", b78tyF5, qQ2Dt6[b78tyF5]);
                flag = (190 - 189);
            }
            b78tyF5++;
        }
    }
    if (flag == (197 - 197))
        printf ("No");
    return (748 - 748);
}

