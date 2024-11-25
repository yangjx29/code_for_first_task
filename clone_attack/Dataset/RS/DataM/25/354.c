int main () {
    char OBsi4KZEX9 [51];
    int jcToXZDns1OQ, hHrDkd = 1, aQxH9oJ4Lq;
    {
        aQxH9oJ4Lq = 1;
        while (aQxH9oJ4Lq < 51) {
            OBsi4KZEX9[aQxH9oJ4Lq] = '0';
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
            aQxH9oJ4Lq = aQxH9oJ4Lq + 1;
        };
    }
    OBsi4KZEX9[0] = '1';
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
    for (cin >> jcToXZDns1OQ; jcToXZDns1OQ > 0; jcToXZDns1OQ--) {
        {
            aQxH9oJ4Lq = 0;
            while (aQxH9oJ4Lq < hHrDkd) {
                OBsi4KZEX9[aQxH9oJ4Lq] = OBsi4KZEX9[aQxH9oJ4Lq] * 2 - '0';
                aQxH9oJ4Lq = aQxH9oJ4Lq + 1;
            };
        }
        {
            aQxH9oJ4Lq = 0;
            while (aQxH9oJ4Lq < hHrDkd - 1) {
                if (OBsi4KZEX9[aQxH9oJ4Lq] > '9') {
                    OBsi4KZEX9[aQxH9oJ4Lq] = OBsi4KZEX9[aQxH9oJ4Lq] - (56 - 46);
                    OBsi4KZEX9[aQxH9oJ4Lq + 1]++;
                }
                aQxH9oJ4Lq++;
            };
        }
        if (OBsi4KZEX9[aQxH9oJ4Lq] > '9') {
            OBsi4KZEX9[aQxH9oJ4Lq] = OBsi4KZEX9[aQxH9oJ4Lq] - 10;
            OBsi4KZEX9[aQxH9oJ4Lq + 1]++;
            hHrDkd = hHrDkd + 1;
        };
    }
    {
        hHrDkd = hHrDkd - 1;
        while (hHrDkd >= 0) {
            cout << OBsi4KZEX9[hHrDkd];
            hHrDkd = hHrDkd - 1;
        };
    }
    return 0;
}

