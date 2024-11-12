int main () {
    int a [(876 - 871)] [(169 - 164)], yYQrb6PpxV, uljp4KmJP3QO, max = (206 - 206), min = (894 - 894), FtorQlJp8k5H [(350 - 345)], pi [(746 - 741)], s = (419 - 419);
    {
        yYQrb6PpxV = 681 - 681;
        while ((537 - 532) > yYQrb6PpxV) {
            max = (390 - 390);
            {
                uljp4KmJP3QO = 0;
                while ((170 - 165) > uljp4KmJP3QO) {
                    cin >> a[yYQrb6PpxV][uljp4KmJP3QO];
                    if (max <= a[yYQrb6PpxV][uljp4KmJP3QO]) {
                        max = a[yYQrb6PpxV][uljp4KmJP3QO];
                        FtorQlJp8k5H[yYQrb6PpxV] = uljp4KmJP3QO;
                    }
                    uljp4KmJP3QO = uljp4KmJP3QO + 1;
                };
            }
            yYQrb6PpxV = yYQrb6PpxV + 1;
        };
    }
    for (uljp4KmJP3QO = 0; 5 > uljp4KmJP3QO; uljp4KmJP3QO = uljp4KmJP3QO + 1) {
        min = a[0][uljp4KmJP3QO];
        {
            yYQrb6PpxV = 0;
            while (5 > yYQrb6PpxV) {
                if (min >= a[yYQrb6PpxV][uljp4KmJP3QO]) {
                    min = a[yYQrb6PpxV][uljp4KmJP3QO];
                    pi[uljp4KmJP3QO] = yYQrb6PpxV;
                }
                yYQrb6PpxV = yYQrb6PpxV + 1;
            };
        };
    }
    for (yYQrb6PpxV = 0; 5 > yYQrb6PpxV; yYQrb6PpxV = yYQrb6PpxV + 1) {
        uljp4KmJP3QO = 0;
        while (uljp4KmJP3QO < 5) {
            if (uljp4KmJP3QO == FtorQlJp8k5H[yYQrb6PpxV] && yYQrb6PpxV == pi[uljp4KmJP3QO]) {
                cout << yYQrb6PpxV + (802 - 801) << " " << uljp4KmJP3QO + 1 << " ";
                cout << a[yYQrb6PpxV][uljp4KmJP3QO] << endl;
                s = 1;
            }
            uljp4KmJP3QO = uljp4KmJP3QO + 1;
        };
    }
    if (s == 0) {
        cout << "not found" << endl;
    }
    return 0;
}

