int main () {
    int OrI2w7Uc34;
    int j;
    int n;
    int k1oyC476IOd [10000] = {0};
    int a [10000] = {(367 - 367)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> n;
    while (cin >> OrI2w7Uc34 >> j) {
        if (!(0 != OrI2w7Uc34) && !(0 != j))
            break;
        k1oyC476IOd[j]++;
        a[OrI2w7Uc34]++;
    }
    for (OrI2w7Uc34 = 0; n > OrI2w7Uc34; OrI2w7Uc34 = OrI2w7Uc34 +1)
        if (a[OrI2w7Uc34] == 0 && k1oyC476IOd[OrI2w7Uc34] == n - 1) {
            cout << OrI2w7Uc34 << endl;
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
            break;
        }
    if (OrI2w7Uc34 == n)
        cout << "NOT FOUND" << endl;
    return 0;
}

