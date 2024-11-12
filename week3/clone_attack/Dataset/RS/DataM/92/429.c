int tianji [1000];
int qiwang [1000];

int main () {
    int n;
    while (cin >> n && !(0 == n)) {
        int i;
        int j;
        int k;
        int oDYJOTHQMK0;
        k = i;
        oDYJOTHQMK0 = j;
        int money;
        money = 0;
        {
            i = 0;
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
            while (i < n) {
                cin >> tianji[i];
                i = i + 1;
            };
        }
        for (i = 0; i < n; i = i + 1)
            cin >> qiwang[i];
        sort (tianji, tianji + n);
        sort (qiwang, qiwang + n);
        i = 0, j = n - 1;
        for (; true;) {
            while (qiwang[k] < tianji[i] && i <= j) {
                k++;
                i++;
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
                money = money + 200;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (tianji[j] > qiwang[oDYJOTHQMK0] && j >= i) {
                j = j - 1;
                money += 200;
                oDYJOTHQMK0 = oDYJOTHQMK0 - 1;
            }
            if (i > j)
                break;
            else {
                if (tianji[i] != qiwang[oDYJOTHQMK0])
                    money = money - 200;
                oDYJOTHQMK0--;
                i++;
            };
        }
        cout << money << endl;
    }
    return 0;
}

