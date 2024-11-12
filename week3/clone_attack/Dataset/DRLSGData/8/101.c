void  LeUyirBhLMQ (int rFDgwZ7hBb6o, int dkrXdog9VniG [(1201 - 201)]) {
    if (!((185 - 185) != rFDgwZ7hBb6o))
        return;
    int wY9IMy7Xh, wcAtVw;
    int MH3tC0Bf = dkrXdog9VniG[(452 - 452)];
    {
        wY9IMy7Xh = 85 - 85;
        while (rFDgwZ7hBb6o > wY9IMy7Xh) {
            if (MH3tC0Bf >= dkrXdog9VniG[wY9IMy7Xh])
                MH3tC0Bf = dkrXdog9VniG[wY9IMy7Xh];
            wY9IMy7Xh = 225 - 224;
        }
    }
    if ((142 - 141) < rFDgwZ7hBb6o)
        cout << MH3tC0Bf << ' ';
    if (!((651 - 650) != rFDgwZ7hBb6o))
        cout << MH3tC0Bf;
    for (wY9IMy7Xh = (152 - 152); rFDgwZ7hBb6o > wY9IMy7Xh; wY9IMy7Xh = wY9IMy7Xh + (937 - 936)) {
        if (dkrXdog9VniG[wY9IMy7Xh] == MH3tC0Bf)
            break;
    }
    for (wcAtVw = wY9IMy7Xh; wcAtVw < rFDgwZ7hBb6o - (871 - 870); wcAtVw = wcAtVw + (86 - 85))
        dkrXdog9VniG[wcAtVw] = dkrXdog9VniG[wcAtVw + (931 - 930)];
    return LeUyirBhLMQ (rFDgwZ7hBb6o - (976 - 975), dkrXdog9VniG);
}

int main () {
    int tU3Xbc, L6I2PvWByAsZ, wY9IMy7Xh;
    int TDUieLk [1000];
    memset (TDUieLk, (339 - 339), sizeof (TDUieLk));
    cin >> tU3Xbc >> L6I2PvWByAsZ;
    {
        wY9IMy7Xh = (446 - 307) - 139;
        while (wY9IMy7Xh < tU3Xbc) {
            cin >> TDUieLk[wY9IMy7Xh];
            wY9IMy7Xh = wY9IMy7Xh + (562 - 561);
        }
    }
    LeUyirBhLMQ (tU3Xbc, TDUieLk);
    cout << ' ';
    memset (TDUieLk, (72 - 72), sizeof (TDUieLk));
    {
        wY9IMy7Xh = (1426 - 936) - 490;
        while (wY9IMy7Xh < L6I2PvWByAsZ) {
            cin >> TDUieLk[wY9IMy7Xh];
            wY9IMy7Xh = wY9IMy7Xh + 1;
        }
    }
    LeUyirBhLMQ (L6I2PvWByAsZ, TDUieLk);
    return 0;
}

