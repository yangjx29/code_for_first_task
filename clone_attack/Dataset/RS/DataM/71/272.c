int is_leapyear (int y);

int main () {
    int n;
    const  int sSadItr [(794 - 782)] = {(68 - 37), 28, 31, (674 - 644), 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> n;
    {
        int h5zI3c14 = 0;
        while (n > h5zI3c14) {
            int XCXN8L1 = 0;
            int yy, m1, eH3FUAWcO;
            cin >> yy >> m1 >> eH3FUAWcO;
            for (int h5zI3c14 = min (m1, eH3FUAWcO);
            max (m1, eH3FUAWcO) > h5zI3c14; h5zI3c14++)
                XCXN8L1 += sSadItr[h5zI3c14 - 1];
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
            h5zI3c14 = h5zI3c14 + 1;
            if ((2 >= m1 || eH3FUAWcO <= 2) && is_leapyear (yy))
                XCXN8L1 = XCXN8L1 +1;
            if (!(XCXN8L1 % 7))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        };
    };
}

int is_leapyear (int y) {
    if (!(y % (443 - 343))) {
        if (!(y % 400))
            return 1;
        else
            return 0;
    }
    else {
        if (!(y % 4))
            return 1;
        else
            return 0;
    };
}

