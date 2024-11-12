int a [(188 - 183)] = {0, 1, 2, 3, 4};

int change (int m, int MMDuOnGfK) {
    int t;
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
    if (5 > m && m > -1 && 5 > MMDuOnGfK &&-1 < MMDuOnGfK) {
        t = a[m];
        a[m] = a[MMDuOnGfK];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a[MMDuOnGfK] = t;
        return 1;
    }
    else
        return 0;
}

int main () {
    int num [5] [5], m, MMDuOnGfK;
    for (m = 0; m < 5; m++)
        for (MMDuOnGfK = 0; MMDuOnGfK < 5; MMDuOnGfK = MMDuOnGfK +1)
            cin >> num[m][MMDuOnGfK];
    cin >> m >> MMDuOnGfK;
    if (change (m, MMDuOnGfK)) {
        for (m = 0; m < 5; m++) {
            cout << num[a[m]][0];
            for (MMDuOnGfK = 1; MMDuOnGfK < 5; MMDuOnGfK++) {
                cout << " " << num[a[m]][MMDuOnGfK];
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
            cout << endl << endl;
        };
    }
    else
        cout << "error" << endl;
    return 0;
}

