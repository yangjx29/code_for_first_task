int DUCA0GaTluE, nRTMJK4WsrH, PMv7sk0HwU, FEkWsZn, boI8ZGpH6, zymISE9d6Qx;
char l4Au1xZLYGw [120] [120];
char yDcIPf4OX [120] [120];

int main () {
    cin >> DUCA0GaTluE;
    for (nRTMJK4WsrH = 1; DUCA0GaTluE >= nRTMJK4WsrH; nRTMJK4WsrH = nRTMJK4WsrH + 1) {
        cin >> l4Au1xZLYGw[nRTMJK4WsrH];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (PMv7sk0HwU = DUCA0GaTluE; PMv7sk0HwU >= 1; PMv7sk0HwU = PMv7sk0HwU -1)
            l4Au1xZLYGw[nRTMJK4WsrH][PMv7sk0HwU] = l4Au1xZLYGw[nRTMJK4WsrH][PMv7sk0HwU -1];
    }
    cin >> boI8ZGpH6;
    {
        FEkWsZn = 1;
        while (FEkWsZn < boI8ZGpH6) {
            FEkWsZn = FEkWsZn +1;
            for (nRTMJK4WsrH = 1; DUCA0GaTluE >= nRTMJK4WsrH; nRTMJK4WsrH = nRTMJK4WsrH + 1) {
                PMv7sk0HwU = 1;
                while (PMv7sk0HwU <= DUCA0GaTluE) {
                    yDcIPf4OX[nRTMJK4WsrH][PMv7sk0HwU] = l4Au1xZLYGw[nRTMJK4WsrH][PMv7sk0HwU];
                    PMv7sk0HwU = PMv7sk0HwU +1;
                };
            }
            {
                nRTMJK4WsrH = 1;
                while (nRTMJK4WsrH <= DUCA0GaTluE) {
                    for (PMv7sk0HwU = 1; PMv7sk0HwU <= DUCA0GaTluE; PMv7sk0HwU++)
                        if (l4Au1xZLYGw[nRTMJK4WsrH][PMv7sk0HwU] == '@') {
                            if (yDcIPf4OX[nRTMJK4WsrH][PMv7sk0HwU -1] == '.')
                                yDcIPf4OX[nRTMJK4WsrH][PMv7sk0HwU -1] = '@';
                            if (yDcIPf4OX[nRTMJK4WsrH][PMv7sk0HwU +1] == '.')
                                yDcIPf4OX[nRTMJK4WsrH][PMv7sk0HwU +1] = '@';
                            if (yDcIPf4OX[nRTMJK4WsrH - 1][PMv7sk0HwU] == '.')
                                yDcIPf4OX[nRTMJK4WsrH - 1][PMv7sk0HwU] = '@';
                            if (yDcIPf4OX[nRTMJK4WsrH + 1][PMv7sk0HwU] == '.')
                                yDcIPf4OX[nRTMJK4WsrH + 1][PMv7sk0HwU] = '@';
                        }
                    nRTMJK4WsrH = nRTMJK4WsrH + 1;
                };
            }
            for (nRTMJK4WsrH = 1; nRTMJK4WsrH <= DUCA0GaTluE; nRTMJK4WsrH++)
                for (PMv7sk0HwU = 1; PMv7sk0HwU <= DUCA0GaTluE; PMv7sk0HwU++)
                    l4Au1xZLYGw[nRTMJK4WsrH][PMv7sk0HwU] = yDcIPf4OX[nRTMJK4WsrH][PMv7sk0HwU];
        };
    }
    zymISE9d6Qx = 0;
    {
        nRTMJK4WsrH = 1;
        while (nRTMJK4WsrH <= DUCA0GaTluE) {
            {
                PMv7sk0HwU = 1;
                while (PMv7sk0HwU <= DUCA0GaTluE) {
                    if (l4Au1xZLYGw[nRTMJK4WsrH][PMv7sk0HwU] == '@')
                        zymISE9d6Qx++;
                    PMv7sk0HwU = PMv7sk0HwU +1;
                };
            }
            nRTMJK4WsrH++;
        };
    }
    cout << zymISE9d6Qx << endl;
    return 0;
}

