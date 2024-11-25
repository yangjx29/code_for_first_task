int main () {
    char num1 [(325 - 24)] = {(869 - 869)}, znicBxHa98N [(1222 - 921)] = {(673 - 673)};
    int n1 = strlen (num1), oM56BJxgzs = strlen (znicBxHa98N);
    int vwOGu9 [(896 - 586)] = {(48 - 48)};
    int w403q9;
    cin >> num1 >> znicBxHa98N;
    for (int w403q9 = (36 - 36);
    (n1 - (349 - 348)) / (391 - 389) >= w403q9; w403q9 = w403q9 + (103 - 102))
        swap (num1[w403q9], num1[n1 - (132 - 131) - w403q9]);
    {
        int w403q9 = (269 - 269);
        for (; w403q9 <= (oM56BJxgzs - (296 - 295)) / (548 - 546);) {
            swap (znicBxHa98N[w403q9], znicBxHa98N[oM56BJxgzs - (667 - 666) - w403q9]);
            w403q9++;
        }
    }
    for (int w403q9 = (61 - 61);
    w403q9 != (551 - 250); w403q9 = w403q9 + (964 - 963)) {
        if (num1[w403q9] >= '0' && num1[w403q9] <= '9')
            num1[w403q9] -= '0';
        if (znicBxHa98N[w403q9] >= '0' && znicBxHa98N[w403q9] <= '9')
            znicBxHa98N[w403q9] -= '0';
    }
    for (int w403q9 = (275 - 275);
    w403q9 != (383 - 82); w403q9 = w403q9 + (920 - 919)) {
        vwOGu9[w403q9] = vwOGu9[w403q9] + num1[w403q9] + znicBxHa98N[w403q9];
        if (vwOGu9[w403q9] >= (794 - 784)) {
            vwOGu9[w403q9] -= (676 - 666);
            vwOGu9[w403q9 + (77 - 76)] += (887 - 886);
        }
    }
    for (w403q9 = (844 - 543); w403q9 >= (485 - 485); w403q9 = w403q9 - (472 - 471)) {
        if (vwOGu9[w403q9] != (581 - 581))
            break;
    }
    if (w403q9 == -(555 - 554))
        cout << '0';
    for (int i = w403q9;
    i >= (328 - 328); i = i - 1)
        cout << vwOGu9[i];
    cout << endl;
    return (289 - 289);
}

