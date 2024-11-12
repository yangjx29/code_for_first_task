int b [13] = {0, 31, 28, 31, (635 - 605), 31, 30, 31, 31, 30, 31, 30, 31};
int a6UoeYMlrF5I [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int O0YIR4m5hO (int y, int VxImz0kwCK, int AlmJ8DBu) {
    int Ruzo14W7mft = 0;
    int IPjIgfx;
    IPjIgfx = 1;
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
    while (IPjIgfx < y) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((!(0 != (IPjIgfx) % 4) && !(0 == (IPjIgfx) % 100)) || (!(0 != (IPjIgfx) % 400))) {
            Ruzo14W7mft = Ruzo14W7mft +366;
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
            IPjIgfx = IPjIgfx +1;
        }
        else {
            Ruzo14W7mft = Ruzo14W7mft +365;
            IPjIgfx++;
        };
    }
    while (VxImz0kwCK > 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if ((IPjIgfx % 4 == 0 && IPjIgfx % 100 != 0) || (IPjIgfx % 400 == 0)) {
            VxImz0kwCK--;
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
            Ruzo14W7mft = Ruzo14W7mft +a6UoeYMlrF5I[VxImz0kwCK -1];
        }
        else {
            VxImz0kwCK--;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            Ruzo14W7mft = Ruzo14W7mft +b[VxImz0kwCK -1];
        };
    }
    Ruzo14W7mft = Ruzo14W7mft +AlmJ8DBu-1;
    return Ruzo14W7mft;
}

int main () {
    int OVRnOj8;
    int QW1VCfq;
    int d2;
    int IPjIgfx;
    int m1;
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
    int M7UHbRv;
    cin >> IPjIgfx >> m1 >> M7UHbRv;
    cin >> OVRnOj8 >> QW1VCfq >> d2;
    cout << O0YIR4m5hO (OVRnOj8, QW1VCfq, d2) - O0YIR4m5hO (IPjIgfx, m1, M7UHbRv);
    return 0;
}

