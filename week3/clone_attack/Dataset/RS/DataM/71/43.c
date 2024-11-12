int main () {
    int irvOQ6UEdf, mnCzVZ;
    cin >> irvOQ6UEdf;
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
    for (mnCzVZ = 0; irvOQ6UEdf > mnCzVZ; mnCzVZ = mnCzVZ + 1) {
        int PtNxKc;
        int year;
        int f7EnW1 [(865 - 853)] = {(892 - 861), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int a;
        int b;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        int j;
        PtNxKc = 0;
        cin >> year >> a >> b;
        if ((!(0 != year % 4) && !(0 == year % 100)) || !(0 != year % 400))
            f7EnW1[1] = 29;
        else
            f7EnW1[1] = 28;
        if (b < a) {
            for (j = b - 1; a - 1 > j; j = j + 1) {
                PtNxKc = PtNxKc +f7EnW1[j];
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
            if (PtNxKc % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (a < b) {
                {
                    j = a - 1;
                    while (j < b - 1) {
                        PtNxKc = PtNxKc +f7EnW1[j];
                        j++;
                    };
                }
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
                if (PtNxKc % 7 == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            };
        };
    }
    return 0;
}

