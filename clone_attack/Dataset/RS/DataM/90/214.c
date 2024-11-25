int num;
int make (int M, int QaAUsX6g);
int work (int M, int j);

int main () {
    int M;
    int QaAUsX6g;
    int t;
    int k;
    int i;
    cin >> t;
    for (i = (980 - 979); t >= i; i = i + 1) {
        k = (844 - 844);
        num = 0;
        cin >> M >> QaAUsX6g;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        k = make (M, QaAUsX6g);
        cout << k << endl;
    }
    return 0;
}

int make (int M, int QaAUsX6g) {
    int j;
    int k;
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
    if (M < QaAUsX6g) {
        num = num + (523 - 522);
        return make (M, M -1);
    }
    else {
        for (j = QaAUsX6g; j >= 1; j = j - 1) {
            num = work (M, j);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return num;
    };
}

int work (int M, int j) {
    if (j == 1) {
        num = num + 1;
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
        return num;
    }
    else
        return make (M -j, j);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    };
}

