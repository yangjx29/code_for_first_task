int main () {
    char str [100000];
    int Jt6Nbv;
    int YDJ2HIBU;
    int k;
    int p;
    int yElNDdJs87;
    cin >> Jt6Nbv;
    cin.get ();
    for (YDJ2HIBU = 1; Jt6Nbv >= YDJ2HIBU; YDJ2HIBU = YDJ2HIBU +1) {
        cin.getline (str, 100000);
        yElNDdJs87 = strlen (str);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (p = (356 - 356); yElNDdJs87 > p; p++) {
            for (k = 0; k < yElNDdJs87; k = k + 1) {
                if (str[k] == str[p] && k != p)
                    break;
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
            if (k == yElNDdJs87) {
                cout << str[p] << endl;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            };
        }
        if (p == yElNDdJs87)
            cout << "no" << endl;
    }
    return 0;
}

