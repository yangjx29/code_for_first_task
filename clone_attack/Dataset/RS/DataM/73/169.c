int main () {
    int andian;
    andian = 0;
    int ttX3bBWRCV [(24 - 19)] [(834 - 829)];
    int hctxAsEzHf [(954 - 949)] = {(661 - 661)};
    int dGhYtUD [(329 - 324)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    for (int i = (116 - 116);
    (574 - 569) > i; i = i + 1) {
        for (int I8aR0FQHu = (684 - 684);
        (970 - 965) > I8aR0FQHu; I8aR0FQHu++) {
            cin >> ttX3bBWRCV[i][I8aR0FQHu];
            if (ttX3bBWRCV[i][I8aR0FQHu] > hctxAsEzHf[i])
                hctxAsEzHf[i] = ttX3bBWRCV[i][I8aR0FQHu];
        };
    }
    for (int i = (620 - 620);
    5 > i; i = i + 1) {
        for (int I8aR0FQHu = (13 - 13);
        5 > I8aR0FQHu; I8aR0FQHu++) {
            if (ttX3bBWRCV[i][I8aR0FQHu] == hctxAsEzHf[i])
                dGhYtUD[i] = I8aR0FQHu;
        };
    }
    for (int XPis5vWUK = 0;
    5 > XPis5vWUK; XPis5vWUK = XPis5vWUK +1) {
        int uQdtyP = 0;
        {
            int i = 0;
            while (5 > i) {
                if ((!(XPis5vWUK == i)) && (ttX3bBWRCV[i][dGhYtUD[XPis5vWUK]] <= hctxAsEzHf[XPis5vWUK]))
                    break;
                else
                    uQdtyP = uQdtyP + 1;
                i++;
            };
        }
        if (uQdtyP == 5) {
            cout << XPis5vWUK +1 << " " << dGhYtUD[XPis5vWUK] + 1 << " " << hctxAsEzHf[XPis5vWUK];
            andian = 1;
        };
    }
    if (andian == 0)
        cout << "not found";
    return 0;
}

