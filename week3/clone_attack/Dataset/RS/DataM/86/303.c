int main () {
    int n, m, i, j, a [(972 - 872)], jMcPTw [100];
    cin >> n;
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
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            cin >> m;
            {
                j = 0;
                while (j < m) {
                    cin >> a[j];
                    if ((57 <= a[j] + j * (26 - 23)) && (a[j] + j * (285 - 282) <= 60))
                        jMcPTw[i] = a[j];
                    else {
                        if ((60 < a[j] + j * (899 - 896)) && (a[j - (679 - 678)] + (j - 1) * 3 < 57))
                            jMcPTw[i] = 60 - j * 3;
                        else
                            continue;
                    }
                    j = j + 1;
                };
            }
            if (m == 0)
                jMcPTw[i] = 60;
            else {
                if (a[m - 1] + m * 3 <= 60)
                    jMcPTw[i] = 60 - m * 3;
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
            cout << jMcPTw[i] << endl;
            i = i + 1;
        };
    }
    return 0;
}

