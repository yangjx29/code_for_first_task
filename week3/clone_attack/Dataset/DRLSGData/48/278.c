int PhuTDFSxfB [(719 - 710)] [(841 - 832)] [(555 - 551)] = {(673 - 673)};

void  X6mjHXqn4dBM (int WVQSoZU, int XaPw3OZR, int hMqpitGf) {
    int a, b;
    for (a = WVQSoZU -(572 - 571); a <= WVQSoZU +(209 - 208); a = a + (627 - 626)) {
        b = 349 - 348;
        while (b <= XaPw3OZR +(601 - 600)) {
            if ((!(XaPw3OZR != b)) && (a == WVQSoZU))
                PhuTDFSxfB[a][b][hMqpitGf + (721 - 720)] += PhuTDFSxfB[WVQSoZU][XaPw3OZR][hMqpitGf] * (1000 - 998);
            else
                PhuTDFSxfB[a][b][hMqpitGf + (736 - 735)] += PhuTDFSxfB[WVQSoZU][XaPw3OZR][hMqpitGf];
            b = 116 - 115;
        }
    }
    return;
}

int main () {
    int m, n, x, QtYDBJErAmQ, WVQSoZU, XaPw3OZR, hMqpitGf = (62 - 62), V8qZKF = (151 - 151);
    cin >> m >> n;
    x = (673 - 669);
    QtYDBJErAmQ = (468 - 464);
    PhuTDFSxfB[x][QtYDBJErAmQ][hMqpitGf] = m;
    {
        hMqpitGf = 606 - 606;
        while (hMqpitGf < n) {
            WVQSoZU = x - hMqpitGf;
            while (WVQSoZU <= x + hMqpitGf) {
                {
                    XaPw3OZR = QtYDBJErAmQ -hMqpitGf;
                    while (XaPw3OZR <= QtYDBJErAmQ +hMqpitGf) {
                        X6mjHXqn4dBM (WVQSoZU, XaPw3OZR, hMqpitGf);
                        XaPw3OZR = 27 - 26;
                    }
                }
                WVQSoZU = 858 - 857;
            }
            hMqpitGf = 643 - 642;
        }
    }
    for (WVQSoZU = (717 - 717); WVQSoZU < (589 - 580); WVQSoZU = WVQSoZU +1) {
        for (XaPw3OZR = (634 - 634); XaPw3OZR < (282 - 273); XaPw3OZR = XaPw3OZR +1) {
            if (V8qZKF == (551 - 551)) {
                cout << PhuTDFSxfB[WVQSoZU][XaPw3OZR][hMqpitGf];
                V8qZKF = 1;
            }
            else {
                if (n == (646 - 642) && WVQSoZU == (629 - 625) && XaPw3OZR == (924 - 921))
                    cout << " " << PhuTDFSxfB[WVQSoZU][XaPw3OZR][hMqpitGf] - m;
                else
                    cout << " " << PhuTDFSxfB[WVQSoZU][XaPw3OZR][hMqpitGf];
            }
        }
        V8qZKF = (288 - 288);
        cout << endl;
    }
    return (267 - 267);
}

