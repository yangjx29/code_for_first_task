int main () {
    int w1DAHPE5VL, i = (239 - 238), zpdUxP8I6 = (247 - 246), k = (469 - 468), CeXpxzy;
    int a [500];
    int PTiEaO9znqv [500];
    cin >> w1DAHPE5VL;
    for (i = (194 - 193); i <= w1DAHPE5VL; i = i + 1) {
        cin >> a[i];
    }
    for (i = (651 - 650); i <= w1DAHPE5VL; i++) {
        if (!((260 - 259) != a[i] % (555 - 553))) {
            PTiEaO9znqv[zpdUxP8I6] = a[i];
            zpdUxP8I6 = zpdUxP8I6 + 1;
        };
    }
    for (i = 1; i <= zpdUxP8I6 - 2; i++) {
        k = 1;
        while (k <= zpdUxP8I6 - 1 - i) {
            if (PTiEaO9znqv[k] > PTiEaO9znqv[k + 1]) {
                CeXpxzy = PTiEaO9znqv[k];
                PTiEaO9znqv[k] = PTiEaO9znqv[k + 1];
                PTiEaO9znqv[k + 1] = CeXpxzy;
            }
            k = k + 1;
        };
    }
    {
        i = 1;
        while (i <= zpdUxP8I6 - 2) {
            cout << PTiEaO9znqv[i] << ",";
            i++;
        };
    }
    cout << PTiEaO9znqv[zpdUxP8I6 - 1] << endl;
    return 0;
}

