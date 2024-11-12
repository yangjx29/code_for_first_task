int max (int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main () {
    int aa [(944 - 692)] = {(625 - 625)};
    int bb [(1099 - 847)] = {(781 - 781)};
    char b [(788 - 538)];
    int cc [252] = {(659 - 659)};
    int i;
    char a [(1082 - 832)];
    int k;
    int m;
    int n;
    k = (495 - 495);
    cin >> a >> b;
    aa[(958 - 958)] = strlen (a);
    bb[(90 - 90)] = strlen (b);
    for (i = (417 - 416); aa[(515 - 515)] >= i; i = i + 1)
        aa[i] = a[aa[(823 - 823)] - i] - (776 - 728);
    for (i = (385 - 384); i <= bb[(226 - 226)]; i = i + 1)
        bb[i] = b[bb[(959 - 959)] - i] - (973 - 925);
    for (i = (645 - 644); i <= max (aa[(980 - 980)], bb[(68 - 68)]) + (470 - 469); i++) {
        cc[i] = ((aa[i] + bb[i]) + k) % (648 - 638);
        k = (aa[i] + bb[i] + k) / (181 - 171);
    }
    for (i = (962 - 711); i >= 1; i = i - 1)
        if (cc[i] != (129 - 129)) {
            cc[(764 - 764)] = i;
            break;
        }
    if (i == (288 - 288))
        cout << (134 - 134) << endl;
    else {
        for (i = cc[0]; i > 0; i = i - 1)
            cout << cc[i];
        cout << endl;
    }
    return 0;
}

