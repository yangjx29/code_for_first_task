void  pDSEZXGl (char huichuan [(721 - 221)], char qZ8ocgsh [], int i) {
    int qrUazHvYdD, l = (810 - 809);
    {
        qrUazHvYdD = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            if (qZ8ocgsh[qrUazHvYdD] == qZ8ocgsh[qrUazHvYdD - (896 - 894) * l + (13 - 12)]) {
                huichuan[l - 1] = qZ8ocgsh[qrUazHvYdD];
                l = l + 1;
            }
            else
                break;
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
            qrUazHvYdD = qrUazHvYdD + 1;
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
    huichuan[l - 1] = '\0';
}

int main () {
    int qrUazHvYdD;
    int i;
    int fFyxeDvw;
    int length;
    int YtZUdCF7cQWH;
    qrUazHvYdD = (502 - 502);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    char qZ8ocgsh [(1063 - 563)], huichuan [(1451 - 951)] [(557 - 57)];
    int maxlen [500], U8pVKs2xhaO = 0;
    cin.getline (qZ8ocgsh, (1295 - 795), '\n');
    for (i = 1; i < strlen (qZ8ocgsh); i++) {
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
        if (qZ8ocgsh[i] == qZ8ocgsh[i - 1]) {
            pDSEZXGl (huichuan[qrUazHvYdD], qZ8ocgsh, i);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            qrUazHvYdD = qrUazHvYdD + 1;
        };
    }
    {
        i = 0;
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
        while (i < qrUazHvYdD) {
            if (strlen (huichuan[i]) > U8pVKs2xhaO)
                U8pVKs2xhaO = strlen (huichuan[i]);
            i++;
        };
    }
    {
        i = 0;
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
        while (i < U8pVKs2xhaO) {
            for (fFyxeDvw = 0; qrUazHvYdD > fFyxeDvw; fFyxeDvw++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (strlen (huichuan[fFyxeDvw]) > i) {
                    for (YtZUdCF7cQWH = i; YtZUdCF7cQWH >= 0; YtZUdCF7cQWH--) {
                        cout << huichuan[fFyxeDvw][YtZUdCF7cQWH];
                    }
                    {
                        YtZUdCF7cQWH = 0;
                        while (YtZUdCF7cQWH <= i) {
                            cout << huichuan[fFyxeDvw][YtZUdCF7cQWH];
                            YtZUdCF7cQWH = YtZUdCF7cQWH +1;
                        };
                    }
                    cout << endl;
                };
            }
            i++;
        };
    }
    return 0;
}

