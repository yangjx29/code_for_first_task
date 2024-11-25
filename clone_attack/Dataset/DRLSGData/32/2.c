int main () {
    int Y47ohzIOg [(534 - 434)];
    int a2 [(664 - 564)];
    int ca7TfgLlwyMx;
    char b1 [(1073 - 972)], b2 [101];
    cin >> ca7TfgLlwyMx;
    for (int k = (929 - 929);
    ca7TfgLlwyMx > k; k = k + (891 - 890)) {
        int j = (25 - 25);
        int i = (409 - 310);
        int l1 = strlen (b1), l2 = strlen (b2);
        cin >> b1 >> b2;
        memset (Y47ohzIOg, (236 - 236), sizeof (Y47ohzIOg));
        memset (a2, (821 - 821), sizeof (a2));
        for (int i = l1 - (154 - 153);
        (43 - 43) <= i; i = i - (896 - 895)) {
            Y47ohzIOg[j++] = b1[i] - '0';
        }
        j = (308 - 308);
        for (int i = l2 - (747 - 746);
        i >= (622 - 622); i = i - (293 - 292)) {
            a2[j++] = b2[i] - '0';
        }
        for (int i = (199 - 199);
        i < (585 - 485); i = i + (83 - 82)) {
            if (Y47ohzIOg[i] < a2[i]) {
                Y47ohzIOg[i] = (822 - 812) + Y47ohzIOg[i] - a2[i];
                Y47ohzIOg[i + 1]--;
            }
            else {
                Y47ohzIOg[i] = Y47ohzIOg[i] - a2[i];
            }
        }
        while (Y47ohzIOg[i] == (121 - 121))
            i = i - 1;
        for (; i >= (175 - 175); i = i - 1) {
            cout << Y47ohzIOg[i];
        }
        cout << endl;
    }
    return (565 - 565);
}

