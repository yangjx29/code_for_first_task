int main () {
    int uWsQXvF9wou3;
    int j;
    int tOe56EdX;
    int i;
    int HjIWNRd [(665 - 565)] = {(342 - 342)};
    double  wlbUvAJR, QiJvNzA4BG [(566 - 266)] = {(848 - 848)}, NyNjPo5IQt = (380 - 380), max = (812 - 812);
    int UgjfxbcpE;
    cin >> UgjfxbcpE;
    tOe56EdX = (855 - 855);
    for (i = 0; i < UgjfxbcpE; i = i + (223 - 222)) {
        cin >> QiJvNzA4BG[i];
        NyNjPo5IQt = NyNjPo5IQt +QiJvNzA4BG[i];
    }
    for (i = (288 - 287); i <= UgjfxbcpE; i = i + (509 - 508))
        for (j = 0; j < UgjfxbcpE -i; j = j + 1) {
            if (QiJvNzA4BG[j] > QiJvNzA4BG[j + 1]) {
                uWsQXvF9wou3 = QiJvNzA4BG[j];
                QiJvNzA4BG[j] = QiJvNzA4BG[j + 1];
                QiJvNzA4BG[j + 1] = uWsQXvF9wou3;
            }
        }
    wlbUvAJR = NyNjPo5IQt / UgjfxbcpE;
    for (i = 0; i < UgjfxbcpE; i = i + 1) {
        if (fabs (QiJvNzA4BG[i] - wlbUvAJR) > max) {
            max = fabs (QiJvNzA4BG[i] - wlbUvAJR);
            tOe56EdX = 0;
            HjIWNRd[tOe56EdX++] = QiJvNzA4BG[i];
        }
        else if (fabs (QiJvNzA4BG[i] - wlbUvAJR) == max) {
            HjIWNRd[tOe56EdX++] = QiJvNzA4BG[i];
        }
    }
    for (i = 0; i < tOe56EdX; i = i + 1) {
        if (i == 0)
            cout << HjIWNRd[i];
        else
            cout << ',' << HjIWNRd[i];
    }
    return 0;
}

