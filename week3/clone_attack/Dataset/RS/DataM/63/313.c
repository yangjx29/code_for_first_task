int main () {
    int BpGyemiQ;
    int y1;
    int x2;
    int y2;
    int s4ysv1f;
    int j;
    int k;
    int s;
    int a [(809 - 709)] [(469 - 369)];
    int b [100] [100];
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
    int c [100] [100];
    cin >> BpGyemiQ >> y1;
    {
        s4ysv1f = 844 - 844;
        while (s4ysv1f < 100) {
            {
                j = 306 - 306;
                while (100 > j) {
                    c[s4ysv1f][j] = (681 - 681);
                    j = j + 1;
                };
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
            s4ysv1f = s4ysv1f + 1;
        };
    }
    {
        s4ysv1f = 750 - 750;
        while (BpGyemiQ > s4ysv1f) {
            {
                j = 0;
                while (y1 > j) {
                    cin >> a[s4ysv1f][j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            s4ysv1f++;
        };
    }
    cin >> x2 >> y2;
    {
        s4ysv1f = 0;
        while (s4ysv1f < x2) {
            for (j = 0; j < y2; j = j + 1) {
                cin >> b[s4ysv1f][j];
            }
            s4ysv1f++;
        };
    }
    {
        s4ysv1f = 0;
        while (s4ysv1f < BpGyemiQ) {
            {
                j = 0;
                while (j < y2) {
                    s = 0;
                    while (s < x2) {
                        c[s4ysv1f][j] = c[s4ysv1f][j] + a[s4ysv1f][s] * b[s][j];
                        s = s + 1;
                    }
                    j++;
                };
            }
            s4ysv1f++;
        };
    }
    for (s4ysv1f = 0; s4ysv1f < BpGyemiQ; s4ysv1f++) {
        for (j = 0; y2 - 1 > j; j++) {
            cout << c[s4ysv1f][j] << " ";
        }
        cout << c[s4ysv1f][y2 - 1] << endl;
    }
    cin >> k;
    return 0;
}

