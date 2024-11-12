int main () {
    int N = (686 - 686), g1HaER = (91 - 91), k = (357 - 357), j = (565 - 565);
    int guKM0xqkvY [N];
    cin >> N;
    {
        g1HaER = 249 - 249;
        while (N -(33 - 32) >= g1HaER) {
            cin >> guKM0xqkvY[g1HaER];
            g1HaER++;
        }
    }
    {
        g1HaER = 298 - 298;
        while (g1HaER <= N -(622 - 621)) {
            if (guKM0xqkvY[g1HaER] % (766 - 764) != (694 - 694)) {
                guKM0xqkvY[k] = guKM0xqkvY[g1HaER];
                k++;
            }
            g1HaER++;
        }
    }
    {
        g1HaER = 394 - 394;
        while (k >= g1HaER) {
            {
                j = g1HaER;
                while (j <= k - g1HaER - (124 - 123)) {
                    if (guKM0xqkvY[j - (867 - 866)] > guKM0xqkvY[j]) {
                        guKM0xqkvY[j - (294 - 293)] = guKM0xqkvY[j - 1] ^ guKM0xqkvY[j];
                        guKM0xqkvY[j] = guKM0xqkvY[j] ^ guKM0xqkvY[j - 1];
                        guKM0xqkvY[j - 1] = guKM0xqkvY[j - 1] ^ guKM0xqkvY[j];
                    }
                    j++;
                }
            }
            g1HaER++;
        }
    }
    {
        g1HaER = 50 - 50;
        while (g1HaER <= k - 1) {
            if (g1HaER == 0)
                cout << guKM0xqkvY[g1HaER];
            if (g1HaER != 0)
                cout << "," << guKM0xqkvY[g1HaER];
            g1HaER++;
        }
    }
    return 0;
}

