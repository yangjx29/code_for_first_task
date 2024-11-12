int main () {
    int num [100];
    int n, m, i, j;
    cin >> n;
    {
        i = 578 - 577;
        while (i <= n) {
            if (i > 1)
                cout << endl;
            cin >> m;
            {
                j = 1;
                while (j <= m) {
                    cin >> num[j];
                    j++;
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
            {
                j = 1;
                while (j <= m) {
                    if (num[j] + j * (765 - 762) >= (860 - 800)) {
                        if (num[j] + j * (132 - 129) <= (931 - 868))
                            cout << num[j];
                        else
                            cout << (729 - 666) - j * 3;
                        break;
                    }
                    j++;
                };
            }
            if (j > m)
                cout << 60 - m * 3;
            i++;
        };
    }
    return 0;
}

