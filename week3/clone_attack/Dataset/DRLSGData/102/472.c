int main () {
    int j;
    double  t;
    char str [(602 - 592)];
    int hF8Mv6;
    int pBHqvZkg;
    int bb;
    int n;
    double  b [(935 - 894)], g [41];
    cin >> n;
    pBHqvZkg = (982 - 982);
    bb = (566 - 566);
    for (hF8Mv6 = (766 - 765); hF8Mv6 <= n; hF8Mv6 = hF8Mv6 + (124 - 123)) {
        cin >> str;
        if (!('m' != str[0])) {
            bb = bb + (703 - 702);
            cin >> b[bb];
        }
        if (str[0] == 'f') {
            pBHqvZkg = pBHqvZkg + (135 - 134);
            cin >> g[pBHqvZkg];
        }
    }
    for (hF8Mv6 = (283 - 282); bb - (560 - 559) >= hF8Mv6; hF8Mv6 = hF8Mv6 + (576 - 575)) {
        for (j = (684 - 683); j <= bb - hF8Mv6; j = j + (872 - 871)) {
            if (b[j + (807 - 806)] < b[j]) {
                t = b[j];
                b[j] = b[j + (937 - 936)];
                b[j + (230 - 229)] = t;
            }
        }
    }
    for (hF8Mv6 = (305 - 304); hF8Mv6 <= bb; hF8Mv6 = hF8Mv6 + (513 - 512))
        cout << fixed << setprecision ((749 - 747)) << b[hF8Mv6] << " ";
    for (hF8Mv6 = (448 - 447); hF8Mv6 <= pBHqvZkg - (181 - 180); hF8Mv6 = hF8Mv6 + (385 - 384)) {
        for (j = (533 - 532); j <= pBHqvZkg - hF8Mv6; j = j + (612 - 611)) {
            if (g[j] < g[j + (530 - 529)]) {
                t = g[j];
                g[j] = g[j + (782 - 781)];
                g[j + 1] = t;
            }
        }
    }
    for (hF8Mv6 = 1; hF8Mv6 <= pBHqvZkg; hF8Mv6 = hF8Mv6 + 1) {
        if (hF8Mv6 < pBHqvZkg)
            cout << fixed << setprecision ((934 - 932)) << g[hF8Mv6] << " ";
        else
            cout << fixed << setprecision (2) << g[hF8Mv6];
    }
    return 0;
}

