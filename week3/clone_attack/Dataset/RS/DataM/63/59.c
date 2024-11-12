int main () {
    int ldvSH6xDzQyK;
    int XYnh5ZeF, ZPoI0UMri, u63d9Drh;
    int JdwQ1x5oUK, aHhfxV, ZrH01bxQ, eD3L7RC6rp;
    int Q3AuRP0 [100] [100] = {{(230 - 230)}, {(201 - 201)}};
    int UDEGwS [100] [100] = {{(597 - 597)}, {(196 - 196)}};
    cin >> JdwQ1x5oUK >> aHhfxV;
    for (XYnh5ZeF = 0; JdwQ1x5oUK > XYnh5ZeF; XYnh5ZeF = XYnh5ZeF +1)
        for (ZPoI0UMri = 0; aHhfxV > ZPoI0UMri; ZPoI0UMri++)
            cin >> UDEGwS[XYnh5ZeF][ZPoI0UMri];
    cin >> ZrH01bxQ >> eD3L7RC6rp;
    for (XYnh5ZeF = 0; ZrH01bxQ > XYnh5ZeF; XYnh5ZeF = XYnh5ZeF +1)
        for (ZPoI0UMri = 0; eD3L7RC6rp > ZPoI0UMri; ZPoI0UMri++)
            cin >> Q3AuRP0[XYnh5ZeF][ZPoI0UMri];
    for (XYnh5ZeF = 0; XYnh5ZeF < JdwQ1x5oUK; XYnh5ZeF++) {
        ZPoI0UMri = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (eD3L7RC6rp > ZPoI0UMri) {
            ldvSH6xDzQyK = 0;
            {
                u63d9Drh = 0;
                while (aHhfxV > u63d9Drh) {
                    ldvSH6xDzQyK += UDEGwS[XYnh5ZeF][u63d9Drh] * Q3AuRP0[u63d9Drh][ZPoI0UMri];
                    u63d9Drh = u63d9Drh + 1;
                };
            }
            cout << ldvSH6xDzQyK;
            if (ZPoI0UMri == eD3L7RC6rp - 1)
                cout << endl;
            else
                cout << " ";
            ZPoI0UMri = ZPoI0UMri +1;
        };
    }
    return 0;
}

