int main () {
    int a [100] [100];
    int SGsuP2dAIqQT, col;
    int time;
    time = 0;
    int flag = 0;
    int u4pGto0ju5, j, V50PJnbwHy = 0;
    cin >> SGsuP2dAIqQT >> col;
    {
        u4pGto0ju5 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (u4pGto0ju5 < SGsuP2dAIqQT) {
            for (j = 0; col > j; j++) {
                cin >> a[u4pGto0ju5][j];
            }
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
            u4pGto0ju5++;
        };
    }
    for (V50PJnbwHy = 0; V50PJnbwHy <= SGsuP2dAIqQT *col;) {
        {
            j = time;
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
            while (j < col - time) {
                V50PJnbwHy = V50PJnbwHy +1;
                if (!(SGsuP2dAIqQT *col != V50PJnbwHy)) {
                    flag = (291 - 290);
                    break;
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                cout << a[time][j] << endl;
                j++;
            };
        }
        if (flag)
            break;
        for (u4pGto0ju5 = (906 - 905) + time; SGsuP2dAIqQT -time > u4pGto0ju5; u4pGto0ju5 = u4pGto0ju5 + 1) {
            V50PJnbwHy++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            cout << a[u4pGto0ju5][col - 1 - time] << endl;
            if (!(SGsuP2dAIqQT *col != V50PJnbwHy)) {
                flag = 1;
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
                break;
            };
        }
        if (flag)
            break;
        {
            j = col - 2 - time;
            while (j > time) {
                V50PJnbwHy++;
                if (V50PJnbwHy == SGsuP2dAIqQT *col) {
                    flag = 1;
                    break;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                cout << a[SGsuP2dAIqQT -1 - time][j] << endl;
                j--;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (flag)
            break;
        {
            u4pGto0ju5 = SGsuP2dAIqQT -1 - time;
            while (u4pGto0ju5 > time) {
                V50PJnbwHy++;
                if (V50PJnbwHy == SGsuP2dAIqQT *col) {
                    flag = 1;
                    break;
                }
                cout << a[u4pGto0ju5][time] << endl;
                u4pGto0ju5 = u4pGto0ju5 - 1;
            };
        }
        if (flag)
            break;
        time++;
    }
    return 0;
}

