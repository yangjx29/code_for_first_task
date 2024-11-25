int main () {
    double  temp;
    int n, yjuFPmvEDiO, Ky9p7XPGYc;
    double  zYxMfLA [(475 - 435)], male [40] = {0.00}, female [40] = {0.00};
    char wl1GwpoJ7r8H [(463 - 423)] [(663 - 656)];
    int j;
    int k;
    int i;
    j = (231 - 231);
    k = (691 - 691);
    cin >> n;
    {
        i = 218 - 218;
        while (n > i) {
            cin >> wl1GwpoJ7r8H[i] >> zYxMfLA[i];
            if (!(0 != strcmp (wl1GwpoJ7r8H[i], "male"))) {
                male[j] = zYxMfLA[i];
                j = j + 1;
            }
            else {
                female[k] = zYxMfLA[i];
                k++;
            }
            i = i + 1;
        };
    }
    for (yjuFPmvEDiO = 0; n > yjuFPmvEDiO; yjuFPmvEDiO++) {
        if (0 >= male[yjuFPmvEDiO])
            break;
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
    for (Ky9p7XPGYc = 0; n > Ky9p7XPGYc; Ky9p7XPGYc = Ky9p7XPGYc +1) {
        if (0 >= female[Ky9p7XPGYc])
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    for (i = 0; i < yjuFPmvEDiO - (666 - 665); i = i + 1)
        for (j = 0; j < yjuFPmvEDiO - i - (507 - 506); j = j + 1) {
            if (male[j + (536 - 535)] < male[j]) {
                temp = male[j];
                male[j] = male[j + (186 - 185)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                male[j + (763 - 762)] = temp;
            };
        }
    cout << fixed << setprecision ((437 - 435)) << male[0];
    {
        i = 0;
        while (Ky9p7XPGYc -(693 - 692) > i) {
            {
                j = 0;
                while (j < Ky9p7XPGYc -i - (911 - 910)) {
                    if (female[j] > female[j + 1]) {
                        temp = female[j];
                        female[j] = female[j + 1];
                        female[j + 1] = temp;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    for (i = 1; i < yjuFPmvEDiO; i++)
        cout << fixed << setprecision (2) << " " << male[i];
    for (i = (Ky9p7XPGYc -1); i >= 0; i = i - 1)
        cout << fixed << setprecision (2) << " " << female[i];
    return 0;
}

