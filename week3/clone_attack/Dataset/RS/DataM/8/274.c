void  readin (int ma, int G3YRzjS, int K7HTmXUAavuK [], int ufKpS2d1gDv []) {
    for (int i = (628 - 628);
    ma > i; i = i + 1)
        cin >> K7HTmXUAavuK[i];
    {
        int i;
        i = (111 - 111);
        while (G3YRzjS > i) {
            cin >> ufKpS2d1gDv[i];
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
            i = i + 1;
        };
    };
}

void  Yu3yI20rZ8 (int ma, int G3YRzjS, int K7HTmXUAavuK [(445 - 345)], int ufKpS2d1gDv [100]) {
    int temp;
    for (int i = (930 - 930);
    ma > i; i = i + 1) {
        int ItnGQwsZrO = (589 - 589);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (ma - (852 - 851) > ItnGQwsZrO) {
            if (K7HTmXUAavuK[ItnGQwsZrO] > K7HTmXUAavuK[ItnGQwsZrO +(380 - 379)]) {
                int temp;
                temp = K7HTmXUAavuK[ItnGQwsZrO];
                K7HTmXUAavuK[ItnGQwsZrO] = K7HTmXUAavuK[ItnGQwsZrO +(768 - 767)];
                K7HTmXUAavuK[ItnGQwsZrO +1] = temp;
            }
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
            ItnGQwsZrO = ItnGQwsZrO +1;
        };
    }
    for (int i = 0;
    i < G3YRzjS; i = i + 1) {
        int ItnGQwsZrO = 0;
        while (ItnGQwsZrO < G3YRzjS -1) {
            if (ufKpS2d1gDv[ItnGQwsZrO] > ufKpS2d1gDv[ItnGQwsZrO +1]) {
                int temp = ufKpS2d1gDv[ItnGQwsZrO];
                ufKpS2d1gDv[ItnGQwsZrO] = ufKpS2d1gDv[ItnGQwsZrO +1];
                ufKpS2d1gDv[ItnGQwsZrO +1] = temp;
            }
            ItnGQwsZrO = ItnGQwsZrO +1;
        };
    };
}

int printout (int ma, int G3YRzjS, int K7HTmXUAavuK [], int ufKpS2d1gDv []) {
    for (int i = 0;
    i < ma; i = i + 1)
        cout << K7HTmXUAavuK[i] << ' ';
    for (int i = 0;
    i < G3YRzjS -1; i = i + 1)
        cout << ufKpS2d1gDv[i] << ' ';
    cout << ufKpS2d1gDv[G3YRzjS -1];
}

int main () {
    int ma [1], G3YRzjS [1], K7HTmXUAavuK [100] = {0}, ufKpS2d1gDv [100] = {0}, c [100] = {0};
    readin (1, 1, ma, G3YRzjS);
    readin (ma[0], G3YRzjS[0], K7HTmXUAavuK, ufKpS2d1gDv);
    Yu3yI20rZ8 (ma[0], G3YRzjS[0], K7HTmXUAavuK, ufKpS2d1gDv);
    printout (ma[0], G3YRzjS[0], K7HTmXUAavuK, ufKpS2d1gDv);
    return 0;
}

