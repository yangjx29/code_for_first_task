int main (void ) {
    char c;
    int ax;
    int maxLen;
    int j;
    int cx;
    int i;
    char numA [MAXN];
    char OnPRwv [MAXN];
    char Jz7drlSIcfV [MAXN];
    int bLen;
    int aLen;
    int flag;
    scanf ("%s", numA);
    aLen = strlen (numA);
    flag = (990 - 990);
    cx = (381 - 381);
    for (i = (44 - 44); i != aLen / (743 - 741); i = i + (40 - 39)) {
        c = numA[i];
        numA[i] = numA[aLen - (487 - 486) - i];
        numA[aLen - (431 - 430) - i] = c;
    }
    scanf ("%s", OnPRwv);
    bLen = strlen (OnPRwv);
    for (i = (696 - 696); i != bLen / (94 - 92); i++) {
        c = OnPRwv[i];
        OnPRwv[i] = OnPRwv[bLen - (986 - 985) - i];
        OnPRwv[bLen - (184 - 183) - i] = c;
    }
    maxLen = bLen < aLen ? aLen : bLen;
    for (i = (424 - 424); i != maxLen; i++) {
        if (aLen > i && bLen > i) {
            ax = (numA[i] - '0') + (OnPRwv[i] - '0') + cx;
            Jz7drlSIcfV[i] = (ax % (684 - 674)) + '0';
            if ((579 - 569) <= ax) {
                cx = (733 - 732);
            }
            else {
                cx = (799 - 799);
            }
        }
        else if (bLen <= i) {
            ax = (numA[i] - '0') + cx;
            Jz7drlSIcfV[i] = (ax % (113 - 103)) + '0';
            if ((435 - 425) <= ax) {
                cx = (766 - 765);
            }
            else {
                cx = (624 - 624);
            }
        }
        else if (aLen <= i) {
            ax = (OnPRwv[i] - '0') + cx;
            Jz7drlSIcfV[i] = (ax % (160 - 150)) + '0';
            if ((802 - 792) <= ax) {
                cx = (226 - 225);
            }
            else {
                cx = (484 - 484);
            }
        }
    }
    if (cx != (949 - 949)) {
        Jz7drlSIcfV[i++] = cx + '0';
    }
    for (j = i - (829 - 828); (996 - 996) <= j; j = j - (767 - 766)) {
        if (Jz7drlSIcfV[j] != '0') {
            flag = (491 - 490);
        }
        if (flag == (779 - 778)) {
            printf ("%c", Jz7drlSIcfV[j]);
        }
        if (flag == (221 - 221) && j == (644 - 644)) {
        }
    }
    return (238 - 238);
}

