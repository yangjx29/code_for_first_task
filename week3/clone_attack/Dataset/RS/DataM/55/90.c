int main () {
    char cnBIX4w [300];
    char woRy3xsnfE [300];
    gets (woRy3xsnfE);
    char nWMzdP;
    int ST5MDwFHbP;
    int b;
    int JDptUmIoXa1g;
    int Vnp6ABiUtdhj;
    int k1;
    int KhCYo93Qnqz;
    int N7uGEAF;
    int XC8kOWesTS;
    int pQ3ZkWDY;
    int cEg3qjW;
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
    int Bp4Okj [300];
    k1 = strlen (woRy3xsnfE);
    KhCYo93Qnqz = k1;
    while (woRy3xsnfE[k1] != ' ')
        k1--;
    k1--;
    ST5MDwFHbP = b = 0;
    cin >> ST5MDwFHbP;
    pQ3ZkWDY = cEg3qjW = 0;
    pQ3ZkWDY = 0;
    N7uGEAF = XC8kOWesTS = 0;
    Vnp6ABiUtdhj = 1;
    {
        JDptUmIoXa1g = k1;
        while (JDptUmIoXa1g >= 1) {
            Vnp6ABiUtdhj = Vnp6ABiUtdhj *ST5MDwFHbP;
            if (isdigit (woRy3xsnfE[JDptUmIoXa1g])) {
                N7uGEAF = (int) woRy3xsnfE[JDptUmIoXa1g];
                N7uGEAF = N7uGEAF -48;
                XC8kOWesTS = XC8kOWesTS +Vnp6ABiUtdhj*N7uGEAF;
            }
            if (islower (woRy3xsnfE[JDptUmIoXa1g])) {
                N7uGEAF = (int) woRy3xsnfE[JDptUmIoXa1g];
                N7uGEAF = N7uGEAF -97 + 10;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                XC8kOWesTS = XC8kOWesTS +Vnp6ABiUtdhj*N7uGEAF;
            }
            if (isupper (woRy3xsnfE[JDptUmIoXa1g])) {
                N7uGEAF = (int) woRy3xsnfE[JDptUmIoXa1g];
                N7uGEAF = N7uGEAF -65 + 10;
                XC8kOWesTS = XC8kOWesTS +Vnp6ABiUtdhj*N7uGEAF;
            }
            JDptUmIoXa1g = JDptUmIoXa1g -1;
        };
    }
    Vnp6ABiUtdhj = 1;
    {
        JDptUmIoXa1g = KhCYo93Qnqz -1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (JDptUmIoXa1g >= k1 + 2) {
            Vnp6ABiUtdhj = Vnp6ABiUtdhj *10;
            N7uGEAF = (int) woRy3xsnfE[JDptUmIoXa1g];
            JDptUmIoXa1g = JDptUmIoXa1g -1;
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
            N7uGEAF = N7uGEAF -48;
            b = b + Vnp6ABiUtdhj *N7uGEAF;
        };
    }
    if (XC8kOWesTS == 0)
        cout << 0 << endl;
    while (XC8kOWesTS > 0) {
        pQ3ZkWDY = pQ3ZkWDY + 1;
        Bp4Okj[pQ3ZkWDY] = XC8kOWesTS % b;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        XC8kOWesTS = XC8kOWesTS / b;
    }
    if (b <= 10) {
        JDptUmIoXa1g = 1;
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
        while (JDptUmIoXa1g <= pQ3ZkWDY) {
            JDptUmIoXa1g = JDptUmIoXa1g +1;
            cout << Bp4Okj[pQ3ZkWDY - JDptUmIoXa1g +1];
        };
    }
    else {
        JDptUmIoXa1g = 1;
        while (JDptUmIoXa1g <= pQ3ZkWDY) {
            JDptUmIoXa1g++;
            if (Bp4Okj[pQ3ZkWDY - JDptUmIoXa1g +1] <= 9)
                cout << Bp4Okj[pQ3ZkWDY - JDptUmIoXa1g +1];
            else {
                cEg3qjW = Bp4Okj[pQ3ZkWDY - JDptUmIoXa1g +1] + 65 - 10;
                cout << (char) cEg3qjW;
            };
        };
    }
    cout << endl;
    return 0;
}

