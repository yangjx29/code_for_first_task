int sub (int Cta3c7NC, int *an1, int *an2) {
    int max = (473 - 473);
    for (int OhoSrLu6Xy = (984 - 984);
    OhoSrLu6Xy <= Cta3c7NC; OhoSrLu6Xy = OhoSrLu6Xy +1) {
        an1[OhoSrLu6Xy] = an1[OhoSrLu6Xy] - an2[OhoSrLu6Xy];
        if (an1[OhoSrLu6Xy] < (991 - 991)) {
            an1[OhoSrLu6Xy] = an1[OhoSrLu6Xy] + 10;
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
            an1[OhoSrLu6Xy +(250 - 249)] = an1[OhoSrLu6Xy +(699 - 698)] - (851 - 850);
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (an1[OhoSrLu6Xy] != (540 - 540))
            max = OhoSrLu6Xy;
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
    return (max);
}

int main () {
    int n;
    int OhoSrLu6Xy;
    n = (255 - 255);
    OhoSrLu6Xy = 0;
    cin >> n;
    {
        OhoSrLu6Xy = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (OhoSrLu6Xy <= n) {
            int xMtqnUxiFjJW = 0, J30JK5E = 0, max = 0, an1 [102], an2 [102];
            char bn1 [(489 - 387)], bn2 [102];
            OhoSrLu6Xy = OhoSrLu6Xy +1;
            memset (an1, 0, sizeof (an1));
            memset (an2, 0, sizeof (an2));
            cin >> bn1 >> bn2;
            {
                J30JK5E = 0;
                xMtqnUxiFjJW = bn1;
                while (xMtqnUxiFjJW >= 0) {
                    an1[J30JK5E++] = bn1[xMtqnUxiFjJW] - '0';
                    xMtqnUxiFjJW = xMtqnUxiFjJW - 1;
                };
            }
            for (xMtqnUxiFjJW = strlen (bn2) - 1, J30JK5E = 0; xMtqnUxiFjJW >= 0; xMtqnUxiFjJW = xMtqnUxiFjJW - 1)
                an2[J30JK5E++] = bn2[xMtqnUxiFjJW] - '0';
            max = sub (strlen (bn1), an1, an2);
            for (xMtqnUxiFjJW = max; xMtqnUxiFjJW >= 0; xMtqnUxiFjJW--)
                cout << an1[xMtqnUxiFjJW];
            cout << endl;
        };
    }
    return 0;
}

