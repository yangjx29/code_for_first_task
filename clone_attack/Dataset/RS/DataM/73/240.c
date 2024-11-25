int main () {
    int num [6] [6], i, j, k;
    k = 0;
    for (i = 1; 5 >= i; i = i + 1) {
        j = 1;
        while (5 >= j) {
            cin >> num[i][j];
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
            j = j + 1;
        };
    }
    {
        i = 1;
        while (i <= 5) {
            num[i][(721 - 721)] = INT_MIN;
            {
                j = 1;
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
                while (5 >= j) {
                    if (num[i][0] < num[i][j])
                        num[i][0] = num[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (j = 1; 5 >= j; j = j + 1) {
        num[0][j] = INT_MAX;
        for (i = 1; i <= 5; i++) {
            if (num[i][j] < num[0][j])
                num[0][j] = num[i][j];
        };
    }
    {
        i = 1;
        while (i <= 5) {
            {
                j = 1;
                while (j <= 5) {
                    if (num[i][j] == num[i][0] && num[i][j] == num[0][j]) {
                        cout << i << " " << j << " " << num[i][j] << endl;
                        k = k + 1;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    if (k == 0)
        cout << "not found" << endl;
    return 0;
}

