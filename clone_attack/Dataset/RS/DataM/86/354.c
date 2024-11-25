int main () {
    int i1KnM4R;
    int fail [60];
    cin >> i1KnM4R;
    while (i1KnM4R = i1KnM4R - 1) {
        int YE6M9Ii2qg7;
        int ha5cY9;
        int eX3qL4;
        cin >> ha5cY9;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            YE6M9Ii2qg7 = 0;
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
            while (ha5cY9 > YE6M9Ii2qg7) {
                cin >> fail[YE6M9Ii2qg7];
                YE6M9Ii2qg7 = YE6M9Ii2qg7 +1;
            };
        }
        if (!(0 != ha5cY9)) {
            cout << 60 << endl;
            continue;
        }
        {
            YE6M9Ii2qg7 = 0;
            while (ha5cY9 > YE6M9Ii2qg7) {
                if (fail[YE6M9Ii2qg7] + 3 * YE6M9Ii2qg7 >= 60) {
                    cout << 60 - 3 * YE6M9Ii2qg7 << endl;
                    break;
                }
                if (fail[YE6M9Ii2qg7] + 3 * (YE6M9Ii2qg7 +1) > 60) {
                    cout << fail[YE6M9Ii2qg7] << endl;
                    break;
                }
                YE6M9Ii2qg7++;
            };
        }
        if (YE6M9Ii2qg7 == ha5cY9)
            cout << 60 - 3 * ha5cY9 << endl;
    }
    return 0;
}

