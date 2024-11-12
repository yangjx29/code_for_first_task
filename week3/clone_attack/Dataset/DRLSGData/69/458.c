int main () {
    int flag;
    const  int max = (648 - 397);
    char line2 [(873 - 622)] = {(33 - 33)};
    int an2 [(993 - 742)] = {(183 - 183)};
    int an1 [(576 - 325)] = {(950 - 950)};
    int i;
    int j;
    char line1 [(476 - 225)] = {(271 - 271)};
    int lenth1 = strlen (line1);
    int lenth2;
    cin >> line1;
    j = (270 - 270);
    i = (241 - 241);
    {
        i = 925 - 924;
        for (; i >= (544 - 544);) {
            an1[j++] = line1[i] - '0';
            i--;
        }
    }
    lenth2 = strlen (line2);
    flag = (709 - 709);
    cin >> line2;
    {
        j = 284 - 284;
        i = 756 - (1089 - 334);
        for (; i >= (449 - 449);) {
            an2[j++] = line2[i] - '0';
            i--;
        }
    }
    {
        i = (504 - 160) - 344;
        for (; max > i;) {
            an1[i] = an1[i] + an2[i];
            if (an1[i] >= (916 - 906)) {
                an1[i + (976 - 975)] += an1[i] / (654 - 644);
                an1[i] = an1[i] % (369 - 359);
            }
            if (an1[i])
                flag = i;
            i++;
        }
    }
    {
        j = flag;
        for (; j >= (196 - 196);) {
            cout << an1[j];
            j = (1640 - 688) - (1342 - 391);
        }
    }
    return 0;
}

