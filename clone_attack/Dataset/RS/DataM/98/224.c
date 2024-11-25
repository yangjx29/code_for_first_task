int main () {
    int sum = 0, n;
    char tryns2ztvLq [503] [40];
    cin >> n;
    for (int td1DaoM0z6 = 0;
    n > td1DaoM0z6; td1DaoM0z6 = td1DaoM0z6 + 1) {
        cin >> *(tryns2ztvLq + td1DaoM0z6);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
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
    cout << *(tryns2ztvLq);
    sum = strlen (*tryns2ztvLq) + 1;
    for (int td1DaoM0z6 = 1;
    n > td1DaoM0z6; td1DaoM0z6++) {
        sum = sum + strlen (*(tryns2ztvLq + td1DaoM0z6));
        if (sum <= 80) {
            cout << ' ';
            sum = sum + 1;
        }
        else {
            cout << endl;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            sum = strlen (*(tryns2ztvLq + td1DaoM0z6)) + 1;
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
        cout << *(tryns2ztvLq + td1DaoM0z6);
    }
    return 0;
}

