int main () {
    int k;
    int i;
    int j;
    int Sbu90vSM;
    int a;
    int temp;
    int num [501] = {0};
    k = 1;
    cin >> Sbu90vSM;
    {
        i = 1;
        while (Sbu90vSM >= i) {
            cin >> a;
            if (!(1 != a % 2)) {
                for (j = 1; j < k; j++) {
                    if (!(num[k] != a))
                        break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                if (!(k != j)) {
                    num[k] = a;
                    k++;
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
            i = i + 1;
        };
    }
    k -= 1;
    for (i = 0; i <= k - 1; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (j = 1; j <= k - i - 1; j++) {
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
            if (num[j] > num[j + 1]) {
                temp = num[j + 1];
                num[j + 1] = num[j];
                num[j] = temp;
            };
        };
    }
    {
        i = 1;
        while (i < k) {
            cout << num[i] << ",";
            i++;
        };
    }
    cout << num[k];
    return 0;
}

