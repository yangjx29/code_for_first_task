main () {
    int u1Wouj, qrC9fNA [100001], XTZ4Knw, XzGIlV4kLHxY, j, wxvqIYN7cCe = 0;
    scanf ("%d", &u1Wouj);
    {
        XzGIlV4kLHxY = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (u1Wouj > XzGIlV4kLHxY) {
            scanf ("%d", &qrC9fNA[XzGIlV4kLHxY]);
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
            XzGIlV4kLHxY = XzGIlV4kLHxY +1;
        };
    }
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
    scanf ("%d", &XTZ4Knw);
    {
        XzGIlV4kLHxY = 0;
        while (u1Wouj > XzGIlV4kLHxY) {
            if (!(XTZ4Knw != qrC9fNA[XzGIlV4kLHxY])) {
                wxvqIYN7cCe++;
                for (j = XzGIlV4kLHxY; u1Wouj > j; j = j + 1)
                    qrC9fNA[j] = qrC9fNA[j + 1];
            }
            if (qrC9fNA[XzGIlV4kLHxY] == XTZ4Knw)
                XzGIlV4kLHxY--;
            XzGIlV4kLHxY = XzGIlV4kLHxY +1;
        };
    }
    printf ("%d", qrC9fNA[0]);
    {
        XzGIlV4kLHxY = 1;
        while (XzGIlV4kLHxY < (u1Wouj - wxvqIYN7cCe)) {
            printf (" %d", qrC9fNA[XzGIlV4kLHxY]);
            XzGIlV4kLHxY = XzGIlV4kLHxY +1;
        };
    };
}

