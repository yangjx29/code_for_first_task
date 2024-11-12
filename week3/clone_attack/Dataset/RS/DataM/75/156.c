int main () {
    int IJdjbiDTR = 0;
    char NDpbTukhB;
    int wn86dlq [1001], zhIyzvdxM18 [1001], CQ3XswUamtjf [1001] = {(17 - 17)};
    int T2Iu6qWcmQ = 0;
    do {
        T2Iu6qWcmQ++;
        cin >> wn86dlq[T2Iu6qWcmQ];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        NDpbTukhB = cin.get ();
    }
    while (!(',' != NDpbTukhB));
    T2Iu6qWcmQ = 0;
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
    do {
        T2Iu6qWcmQ++;
        cin >> zhIyzvdxM18[T2Iu6qWcmQ];
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
        }
        NDpbTukhB = cin.get ();
    }
    while (!(',' != NDpbTukhB));
    {
        int ZRX1IBoexP = 1;
        while (T2Iu6qWcmQ >= ZRX1IBoexP) {
            {
                int j8UEzcb7Gq = wn86dlq[ZRX1IBoexP];
                while (j8UEzcb7Gq < zhIyzvdxM18[ZRX1IBoexP]) {
                    CQ3XswUamtjf[j8UEzcb7Gq] = CQ3XswUamtjf[j8UEzcb7Gq] + 1;
                    j8UEzcb7Gq++;
                };
            }
            ZRX1IBoexP++;
        };
    }
    {
        int WsSptnH = 1;
        while (WsSptnH <= 1000) {
            if (CQ3XswUamtjf[WsSptnH] > IJdjbiDTR)
                IJdjbiDTR = CQ3XswUamtjf[WsSptnH];
            WsSptnH = WsSptnH +1;
        };
    }
    cout << T2Iu6qWcmQ << " " << IJdjbiDTR << endl;
    return 0;
}

