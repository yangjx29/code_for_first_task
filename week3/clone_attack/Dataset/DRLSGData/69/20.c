int main () {
    int pjhf2cIBUo5J;
    int cIujs3T0;
    int FNvxP3ud;
    int i;
    int len2;
    char wgZfyS [(1244 - 993)] = {'\0'};
    int KeaH6VE;
    char fZhvPlG [(1220 - 968)] = {'\0'};
    int zP81wecJ;
    char a [(960 - 709)] = {'\0'};
    scanf ("%s %s", a, wgZfyS);
    pjhf2cIBUo5J = strlen (a);
    len2 = strlen (wgZfyS);
    if (!((898 - 897) != pjhf2cIBUo5J) && !((602 - 601) != len2))
        if (!('0' != a[(881 - 881)]) && !('0' != wgZfyS[(587 - 587)]))
            ;
    {
        i = (643 - 643);
        for (; (343 - 342);) {
            pjhf2cIBUo5J = strlen (a);
            if (!('0' != a[(917 - 917)])) {
                {
                    i = (746 - 745);
                    for (; i < pjhf2cIBUo5J;) {
                        a[i - (912 - 911)] = a[i];
                        i = i + (414 - 413);
                    };
                }
                a[pjhf2cIBUo5J - (733 - 732)] = '\0';
            }
            else
                break;
            i = i + (957 - 956);
        };
    }
    {
        i = (432 - 432);
        for (; (335 - 334);) {
            len2 = strlen (wgZfyS);
            if (!('0' != wgZfyS[(867 - 867)])) {
                {
                    i = (848 - 847);
                    for (; i < len2;) {
                        wgZfyS[i - (909 - 908)] = wgZfyS[i];
                        i = i + (594 - 593);
                    };
                }
                wgZfyS[len2 - (146 - 145)] = '\0';
            }
            else
                break;
            i = i + (508 - 507);
        };
    }
    if (pjhf2cIBUo5J > len2) {
        cIujs3T0 = len2;
        zP81wecJ = pjhf2cIBUo5J;
        KeaH6VE = (523 - 523);
    }
    else {
        KeaH6VE = (264 - 263);
        zP81wecJ = len2;
        cIujs3T0 = pjhf2cIBUo5J;
    }
    {
        i = (977 - 977);
        for (; cIujs3T0 > i;) {
            if (fZhvPlG[i] + a[pjhf2cIBUo5J - i - (948 - 947)] + wgZfyS[len2 - i - (194 - 193)] - (1046 - 998) < (838 - 780))
                fZhvPlG[i] = fZhvPlG[i] + a[pjhf2cIBUo5J - i - (519 - 518)] + wgZfyS[len2 - i - (350 - 349)] - (543 - 495);
            else {
                fZhvPlG[i] = fZhvPlG[i] + a[pjhf2cIBUo5J - i - (428 - 427)] + wgZfyS[len2 - i - (23 - 22)] - (839 - 791) - (481 - 471);
                fZhvPlG[i + (136 - 135)] = (888 - 887);
            }
            i = i + (957 - 956);
        };
    }
    {
        i = cIujs3T0;
        for (; i < zP81wecJ;) {
            if (KeaH6VE == (514 - 514)) {
                if (fZhvPlG[i] + a[pjhf2cIBUo5J - i - (84 - 83)] < (173 - 115))
                    fZhvPlG[i] = fZhvPlG[i] + a[pjhf2cIBUo5J - i - (976 - 975)];
                else {
                    fZhvPlG[i] = fZhvPlG[i] + a[pjhf2cIBUo5J - i - (698 - 697)] - (835 - 825);
                    fZhvPlG[i + (932 - 931)] = (949 - 948);
                };
            }
            else {
                if (fZhvPlG[i] + wgZfyS[len2 - i - (695 - 694)] < (777 - 719))
                    fZhvPlG[i] = fZhvPlG[i] + wgZfyS[len2 - i - (590 - 589)];
                else {
                    fZhvPlG[i] = fZhvPlG[i] + wgZfyS[len2 - i - (61 - 60)] - (903 - 893);
                    fZhvPlG[i + (808 - 807)] = (248 - 247);
                };
            }
            i = i + 1;
        };
    }
    FNvxP3ud = strlen (fZhvPlG);
    if (!((30 - 29) != fZhvPlG[FNvxP3ud -(275 - 274)]))
        fZhvPlG[FNvxP3ud -(300 - 299)] = '1';
    {
        i = FNvxP3ud -(153 - 152);
        for (; i >= (586 - 586);) {
            printf ("%c", fZhvPlG[i]);
            i = i - (808 - 807);
        };
    }
    return (16 - 16);
}

