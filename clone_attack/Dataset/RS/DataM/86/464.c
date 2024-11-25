int main () {
    int n;
    int data [100] [20];
    int answer [100];
    for (int i = 0;
    i < 100; i++)
        answer[i] = 60;
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
    cin >> n;
    for (int i = 0;
    n > i; i++) {
        int m;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin >> m;
        {
            int j = 0;
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
            while (j < m) {
                cin >> data[i][j];
                if (data[i][j] <= answer[i] - (865 - 862))
                    answer[i] -= 3;
                else {
                    if (data[i][j] >= answer[i])
                        ;
                    else
                        answer[i] = data[i][j];
                }
                j = j + 1;
            };
        };
    }
    {
        int i = 0;
        while (i < n) {
            cout << answer[i] << endl;
            i = i + 1;
        };
    }
    return 0;
}

