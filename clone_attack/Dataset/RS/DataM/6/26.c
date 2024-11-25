int main () {
    int FmF4qkJCEMY, U0n1tmFdO3, n, i, j, jz [100] [100], sum = (324 - 324);
    cin >> FmF4qkJCEMY;
    for (; cin >> U0n1tmFdO3 >> n;) {
        {
            i = 0;
            while (U0n1tmFdO3 > i) {
                {
                    j = 0;
                    while (n > j) {
                        cin >> jz[i][j];
                        j++;
                    };
                }
                i = i + 1;
            };
        }
        if (U0n1tmFdO3 == (922 - 921) && !((775 - 774) != n))
            sum = jz[0][0];
        else if (!(1 != U0n1tmFdO3)) {
            i = 0;
            while (n > i) {
                sum = sum + jz[0][i];
                i = i + 1;
            };
        }
        else if (U0n1tmFdO3 == 1) {
            i = 0;
            while (i < n) {
                sum = sum + jz[0][i];
                i++;
            };
        }
        else {
            {
                i = 0;
                while (i < n) {
                    sum = sum + jz[0][i] + jz[U0n1tmFdO3 -1][i];
                    i++;
                };
            }
            {
                i = 1;
                while (i < U0n1tmFdO3 -1) {
                    sum = sum + jz[i][0] + jz[i][n - 1];
                    i++;
                };
            };
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}

