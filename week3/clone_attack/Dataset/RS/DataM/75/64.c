int main () {
    int pAnZOQ;
    int p;
    int i;
    int j;
    int vAz6SX;
    int U6SBJsiQ;
    pAnZOQ = 0;
    p = 0;
    int x [1001];
    int y [1001];
    char I4jWHMDmBK [(100545 - 545)];
    char iBkFWv [100000];
    int MP3jTG [3] = {(956 - 955), 10, 100}, Qo15TMrSxGCW [1001];
    int xo81QfVlE3SR;
    int rMNGSnfZ;
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
    xo81QfVlE3SR = 0;
    cin >> I4jWHMDmBK;
    cin >> iBkFWv;
    memset (x, (685 - 685), sizeof (x));
    memset (y, (973 - 973), sizeof (y));
    memset (Qo15TMrSxGCW, 0, sizeof (Qo15TMrSxGCW));
    for (i = 0; i <= strlen (I4jWHMDmBK) - (950 - 949); i = i + 1) {
        if (!(',' != I4jWHMDmBK[i]))
            pAnZOQ = pAnZOQ + (152 - 151);
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
    vAz6SX = pAnZOQ + 1;
    U6SBJsiQ = vAz6SX;
    for (i = strlen (I4jWHMDmBK) - 1; i >= 0; i--) {
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
        if (I4jWHMDmBK[i] != ',') {
            x[U6SBJsiQ] = x[U6SBJsiQ] + (int) (I4jWHMDmBK[i] - 48) * MP3jTG[p];
            p = p + 1;
        }
        else {
            U6SBJsiQ = U6SBJsiQ -1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p = 0;
        };
    }
    p = 0;
    U6SBJsiQ = vAz6SX;
    for (i = strlen (iBkFWv) - 1; i >= 0; i--) {
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
        if (iBkFWv[i] != ',') {
            y[U6SBJsiQ] = y[U6SBJsiQ] + (int) (iBkFWv[i] - 48) * MP3jTG[p];
            p = p + 1;
        }
        else {
            U6SBJsiQ = U6SBJsiQ -1;
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
            p = 0;
        };
    }
    for (i = 1; i <= (1578 - 578); i++) {
        for (j = 1; j <= vAz6SX; j++) {
            if (x[j] <= i && y[j] >= i + 1)
                Qo15TMrSxGCW[i]++;
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
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (Qo15TMrSxGCW[i] > xo81QfVlE3SR) {
            xo81QfVlE3SR = Qo15TMrSxGCW[i];
            rMNGSnfZ = i;
        };
    }
    cout << vAz6SX << " " << xo81QfVlE3SR << endl;
    return 0;
}

