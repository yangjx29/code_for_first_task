int main () {
    int cnhGoxMB3L;
    int gH1Nyiaf;
    int KDEyeU7i;
    int changdu;
    int w2w1mq [1005] = {(791 - 791)}, avmS9Wc0aRI [1005] = {(216 - 216)};
    changdu = 1;
    cin >> cnhGoxMB3L;
    {
        gH1Nyiaf = 0;
        while (gH1Nyiaf <= cnhGoxMB3L) {
            if (gH1Nyiaf == 0)
                w2w1mq[0] = 1;
            if (gH1Nyiaf == 1)
                w2w1mq[0] = 2;
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
            if (!(0 == gH1Nyiaf) && gH1Nyiaf != 1) {
                if (w2w1mq[changdu - 1] >= 5)
                    changdu += 1;
                {
                    KDEyeU7i = 0;
                    while (KDEyeU7i < changdu) {
                        w2w1mq[KDEyeU7i] = w2w1mq[KDEyeU7i] * 2;
                        KDEyeU7i = KDEyeU7i +1;
                    };
                }
                {
                    KDEyeU7i = 0;
                    while (KDEyeU7i < changdu) {
                        w2w1mq[KDEyeU7i +1] = w2w1mq[KDEyeU7i] / 10 + w2w1mq[KDEyeU7i +1];
                        w2w1mq[KDEyeU7i] = w2w1mq[KDEyeU7i] % 10;
                        KDEyeU7i = KDEyeU7i +1;
                    };
                };
            }
            gH1Nyiaf = gH1Nyiaf + 1;
        };
    }
    {
        KDEyeU7i = changdu - 1;
        while (KDEyeU7i >= 0) {
            cout << w2w1mq[KDEyeU7i];
            KDEyeU7i = KDEyeU7i -1;
        };
    }
    cout << endl;
    return 0;
}

