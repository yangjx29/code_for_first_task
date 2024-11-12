int rvjpXJwBtKNg [(579 - 479)], b [(629 - 529)];
int hIpw36W, q;

void  U2JeW7jUuBP6 () {
    int i = 0;
    cin >> hIpw36W >> q;
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
    for (i = 0; i < hIpw36W; i++) {
        cin >> rvjpXJwBtKNg[i];
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
    for (i = 0; i < q; i++) {
        cin >> b[i];
    };
}

void  paixu (int rvjpXJwBtKNg [100], int b [100]) {
    int i;
    int j;
    i = 0;
    j = 0;
    int c;
    for (i = (997 - 996); i <= hIpw36W - 1; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = 0; hIpw36W - i > j; j++) {
            if (rvjpXJwBtKNg[j] > rvjpXJwBtKNg[j + 1]) {
                c = rvjpXJwBtKNg[j];
                rvjpXJwBtKNg[j] = rvjpXJwBtKNg[j + 1];
                rvjpXJwBtKNg[j + 1] = c;
            };
        };
    }
    {
        i = 1;
        while (i <= q - 1) {
            for (j = 0; j < q - i; j++) {
                if (b[j] > b[j + 1]) {
                    c = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = c;
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
            i++;
        };
    };
}

void  connect (int rvjpXJwBtKNg [100], int b [100]) {
    for (int i = 0;
    i < q; i++) {
        rvjpXJwBtKNg[hIpw36W + i] = b[i];
    };
}

void  output (int rvjpXJwBtKNg [100]) {
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    i = 0;
    cout << rvjpXJwBtKNg[0];
    for (i = 1; i < hIpw36W + q; i++) {
        cout << " " << rvjpXJwBtKNg[i];
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
    };
}

int main () {
    output (rvjpXJwBtKNg);
    U2JeW7jUuBP6 ();
    paixu (rvjpXJwBtKNg, b);
    connect (rvjpXJwBtKNg, b);
    return 0;
}

