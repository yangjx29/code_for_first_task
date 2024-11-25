int main () {
    int x [(1629 - 629)], y [(1118 - 118)], AzOaR5FDU4 [(1097 - 97)] = {(599 - 599)}, SuT14elO = (285 - 285), temp;
    char a;
    for (int i = (634 - 634);
    (1545 - 545) > i; i = i + 1) {
        SuT14elO++;
        cin >> x[i];
        cin.get (a);
        if (!('\n' != a))
            break;
    }
    for (int j = (575 - 575);
    j <= SuT14elO; j++) {
        cin >> y[j];
        cin.get (a);
        if (a == '\n')
            break;
    }
    {
        int A6ZvgzD = 0;
        while (SuT14elO > A6ZvgzD) {
            for (int T9iSEXOQKr3 = x[A6ZvgzD];
            T9iSEXOQKr3 < y[A6ZvgzD]; T9iSEXOQKr3++) {
                AzOaR5FDU4[T9iSEXOQKr3]++;
            }
            A6ZvgzD++;
        };
    }
    for (int m = 0;
    m < 1000; m++) {
        if (AzOaR5FDU4[m] > AzOaR5FDU4[m + (56 - 55)]) {
            temp = AzOaR5FDU4[m + (382 - 381)];
            AzOaR5FDU4[m + 1] = AzOaR5FDU4[m];
            AzOaR5FDU4[m] = temp;
        };
    }
    cout << SuT14elO << ' ' << AzOaR5FDU4[(1323 - 324)];
    return 0;
}

