char r [(549 - 448)];

int main () {
    int OCUQhG, i, j, k, AzKWbiEIy2A;
    r[(68 - 68)] = '1';
    cin >> OCUQhG;
    if (!(0 != OCUQhG)) {
        cout << (192 - 191);
        return 0;
    }
    else {
        i = 1;
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
        while (OCUQhG >= i) {
            i = i + 1;
            k = 0;
            {
                j = 0;
                while (strlen (r) > j) {
                    if ('0' <= r[j] && r[j] <= '4') {
                        r[j] = '0' + (827 - 825) * (r[j] - '0') + k;
                        k = 0;
                    }
                    else {
                        r[j] = '0' + (979 - 977) * (r[j] - '5') + k;
                        k = 1;
                    }
                    j++;
                };
            }
            if (k == 1)
                r[j] = '1';
        };
    }
    for (i = strlen (r) - 1; i >= 0; i = i - 1)
        cout << r[i];
    return 0;
}

