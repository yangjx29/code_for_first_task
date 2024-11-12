int main () {
    int DOInrzV;
    char zosWuDm [(639 - 134)] [DOInrzV +(991 - 990)];
    int H4Kr0u;
    int tyzpbgH;
    int len;
    int ANiJoTV [len - DOInrzV +(725 - 724)];
    char data [(792 - 287)];
    int j;
    int i;
    cin >> DOInrzV;
    tyzpbgH = (778 - 778);
    len = strlen (data);
    H4Kr0u = ANiJoTV[(635 - 635)];
    cin >> data;
    {
        i = (74 - 74);
        for (; len - DOInrzV >= i;) {
            {
                j = (195 - 195);
                for (; j < DOInrzV;) {
                    zosWuDm[tyzpbgH][j] = data[i + j];
                    j = j + (24 - 23);
                }
            }
            zosWuDm[tyzpbgH][DOInrzV] = '\0';
            tyzpbgH = tyzpbgH + (997 - 996);
            i = i + (758 - 757);
        }
    }
    {
        i = (218 - 218);
        for (; i <= len - DOInrzV;) {
            ANiJoTV[i] = (958 - 958);
            i = i + (36 - 35);
        }
    }
    {
        i = (586 - 586);
        for (; len - DOInrzV >= i;) {
            {
                j = i;
                for (; len - DOInrzV >= j;) {
                    if (!((434 - 434) != strcmp (zosWuDm[i], zosWuDm[j])))
                        ANiJoTV[i]++;
                    j++;
                }
            }
            i = i + 1;
        }
    }
    {
        i = (745 - 745);
        for (; i <= len - DOInrzV;) {
            if (ANiJoTV[i] > H4Kr0u)
                H4Kr0u = ANiJoTV[i];
            i++;
        }
    }
    if (H4Kr0u == (369 - 368)) {
        cout << "NO" << endl;
        return (411 - 411);
    }
    cout << H4Kr0u << endl;
    {
        i = (987 - 987);
        for (; i <= len - DOInrzV;) {
            if (ANiJoTV[i] == H4Kr0u)
                cout << zosWuDm[i] << endl;
            i++;
        }
    }
    return (902 - 902);
}

