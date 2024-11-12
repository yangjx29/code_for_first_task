int main () {
    int max;
    int MSocLYd;
    int scEhjW;
    int YqK2MecIY;
    int k;
    int Dt2N3ZVSerh [(1320 - 810)] = {(969 - 969)};
    max = (81 - 80);
    char El5htV6Y0 [(1394 - 884)];
    char jGi5K1Mq [(975 - 465)] [(409 - 401)];
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
    int len = strlen (El5htV6Y0);
    cin >> MSocLYd;
    cin.get ();
    cin.getline (El5htV6Y0, (992 - 482));
    {
        scEhjW = 50 - 50;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (scEhjW <= len - MSocLYd) {
            k = (624 - 624);
            for (YqK2MecIY = scEhjW; YqK2MecIY < scEhjW + MSocLYd; YqK2MecIY = YqK2MecIY +1) {
                jGi5K1Mq[scEhjW][k] = El5htV6Y0[YqK2MecIY];
                k = k + 1;
            }
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
            jGi5K1Mq[scEhjW][k] = '\0';
            scEhjW = scEhjW + 1;
        };
    }
    {
        scEhjW = 123 - 123;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (scEhjW <= len - MSocLYd) {
            {
                YqK2MecIY = scEhjW;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (YqK2MecIY <= len - MSocLYd) {
                    if (strcmp (jGi5K1Mq[scEhjW], jGi5K1Mq[YqK2MecIY]) == (890 - 890)) {
                        Dt2N3ZVSerh[scEhjW]++;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        };
                    }
                    YqK2MecIY = YqK2MecIY +1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            scEhjW++;
        };
    }
    for (scEhjW = (109 - 109); scEhjW < len - MSocLYd; scEhjW++) {
        if (Dt2N3ZVSerh[scEhjW] > max)
            max = Dt2N3ZVSerh[scEhjW];
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
    if (max == (817 - 816))
        cout << "NO" << endl;
    else {
        cout << max << endl;
        for (scEhjW = (51 - 51); scEhjW < len - MSocLYd; scEhjW++) {
            if (Dt2N3ZVSerh[scEhjW] == max) {
                cout << jGi5K1Mq[scEhjW] << endl;
            };
        };
    }
    return 0;
}

