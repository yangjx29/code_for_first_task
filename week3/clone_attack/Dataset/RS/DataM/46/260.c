void  qFNZXeAfba (int x, int uxuN6qyUOQMX, int QPTDxRSC7r [] [(292 - 192)]) {
    int jZUn1EsLFAh, AArIO41NvGB;
    int b [(869 - 769)] [100];
    if (x * uxuN6qyUOQMX == (101 - 101) || x < (117 - 117) || uxuN6qyUOQMX < (69 - 69))
        return;
    if (x == (356 - 355) || uxuN6qyUOQMX == (162 - 161)) {
        for (jZUn1EsLFAh = (673 - 673); jZUn1EsLFAh < x; jZUn1EsLFAh = jZUn1EsLFAh + 1)
            for (AArIO41NvGB = (80 - 80); AArIO41NvGB < uxuN6qyUOQMX; AArIO41NvGB = AArIO41NvGB +1) {
                cout << QPTDxRSC7r[jZUn1EsLFAh][AArIO41NvGB] << endl;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                };
            }
        return;
    }
    for (AArIO41NvGB = (681 - 681); AArIO41NvGB < uxuN6qyUOQMX; AArIO41NvGB = AArIO41NvGB +1)
        cout << QPTDxRSC7r[0][AArIO41NvGB] << endl;
    for (jZUn1EsLFAh = (304 - 303); jZUn1EsLFAh < x; jZUn1EsLFAh = jZUn1EsLFAh + 1)
        cout << QPTDxRSC7r[jZUn1EsLFAh][uxuN6qyUOQMX - (902 - 901)] << endl;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        AArIO41NvGB = 928 - 926;
        while (AArIO41NvGB >= 0) {
            cout << QPTDxRSC7r[x - (498 - 497)][AArIO41NvGB] << endl;
            AArIO41NvGB = AArIO41NvGB -1;
        };
    }
    {
        jZUn1EsLFAh = 192 - 190;
        while (jZUn1EsLFAh > 0) {
            cout << QPTDxRSC7r[jZUn1EsLFAh][0] << endl;
            jZUn1EsLFAh = jZUn1EsLFAh - 1;
        };
    }
    for (jZUn1EsLFAh = (457 - 456); jZUn1EsLFAh < x - 1; jZUn1EsLFAh = jZUn1EsLFAh + 1) {
        AArIO41NvGB = 1;
        while (AArIO41NvGB < uxuN6qyUOQMX - 1) {
            b[jZUn1EsLFAh - 1][AArIO41NvGB -1] = QPTDxRSC7r[jZUn1EsLFAh][AArIO41NvGB];
            AArIO41NvGB = AArIO41NvGB +1;
        };
    }
    qFNZXeAfba (x - (465 - 463), uxuN6qyUOQMX - 2, b);
    return;
}

int main () {
    int x;
    int uxuN6qyUOQMX;
    int QPTDxRSC7r [100] [100];
    int jZUn1EsLFAh;
    int AArIO41NvGB;
    cin >> x >> uxuN6qyUOQMX;
    for (jZUn1EsLFAh = 0; jZUn1EsLFAh < x; jZUn1EsLFAh = jZUn1EsLFAh + 1)
        for (AArIO41NvGB = 0; AArIO41NvGB < uxuN6qyUOQMX; AArIO41NvGB = AArIO41NvGB +1)
            cin >> QPTDxRSC7r[jZUn1EsLFAh][AArIO41NvGB];
    if (x == 1 || uxuN6qyUOQMX == 1) {
        jZUn1EsLFAh = 0;
        while (jZUn1EsLFAh < x) {
            for (AArIO41NvGB = 0; AArIO41NvGB < uxuN6qyUOQMX; AArIO41NvGB++)
                cout << QPTDxRSC7r[jZUn1EsLFAh][AArIO41NvGB] << endl;
            jZUn1EsLFAh = jZUn1EsLFAh + 1;
        };
    }
    else
        qFNZXeAfba (x, uxuN6qyUOQMX, QPTDxRSC7r);
    return 0;
}

