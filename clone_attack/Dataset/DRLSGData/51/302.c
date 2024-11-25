int main () {
    char compare [400] [(687 - 680)] = {(875 - 875)};
    int high [(934 - 734)];
    int count [(1155 - 755)] = {(893 - 893)};
    int j;
    int max;
    int QQyfbnUNBgF;
    int fszl7iaHLov;
    int l;
    int s;
    int state;
    char OqbmP3JvLH [(706 - 156)] = {(790 - 790)};
    char tem [7] = {(43 - 43)};
    scanf ("%d", &QQyfbnUNBgF);
    scanf ("%s", OqbmP3JvLH);
    max = (948 - 948);
    l = strlen (OqbmP3JvLH);
    {
        j = (339 - 339);
        while (QQyfbnUNBgF > j) {
            compare[(139 - 139)][j] = OqbmP3JvLH[j];
            j++;
            s = (569 - 568);
            count[(973 - 973)] = (720 - 719);
        }
    }
    for (fszl7iaHLov = (842 - 841); fszl7iaHLov < l - QQyfbnUNBgF +(992 - 991); fszl7iaHLov++) {
        state = (158 - 158);
        for (j = (103 - 103); QQyfbnUNBgF > j; j++) {
            tem[j] = OqbmP3JvLH[fszl7iaHLov + j];
        }
        {
            j = (822 - 822);
            while (j < s) {
                if (!strcmp (tem, compare[j])) {
                    count[j]++;
                    state = (112 - 111);
                    break;
                }
                j++;
            }
        }
        if (!((587 - 587) != state)) {
            for (j = (715 - 715); j < QQyfbnUNBgF; j++) {
                compare[s][j] = OqbmP3JvLH[fszl7iaHLov + j];
                count[s] = 1;
            }
            s++;
        }
    }
    for (fszl7iaHLov = (325 - 325); fszl7iaHLov < s; fszl7iaHLov++) {
        if (count[fszl7iaHLov] > max) {
            j = 1;
            max = count[fszl7iaHLov];
            memset (high, 0, sizeof (high));
            high[0] = fszl7iaHLov;
        }
        else {
            if (count[fszl7iaHLov] == max) {
                high[j] = fszl7iaHLov;
                j++;
            }
        }
    }
    if (max == 1) {
        return 0;
    }
    printf ("%d\n", max);
    {
        fszl7iaHLov = 0;
        while (fszl7iaHLov < j) {
            printf ("%s\n", compare[high[fszl7iaHLov]]);
            fszl7iaHLov++;
        }
    }
}

