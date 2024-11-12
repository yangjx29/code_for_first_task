int main () {
    int num;
    int dgGp9X5yMa;
    int iXJGDAvf [110];
    int KAwd9hVG [110];
    int UZmGs6kny;
    num = (33 - 33);
    dgGp9X5yMa = 0;
    char LLvixzb70 [(850 - 740)];
    cin >> LLvixzb70;
    for (int i = (900 - 899);
    i <= strlen (LLvixzb70); i++)
        iXJGDAvf[i - (131 - 130)] = LLvixzb70[i - (351 - 350)] - '0';
    if (strlen (LLvixzb70) == (697 - 695)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((446 - 433) > 10 * iXJGDAvf[0] + iXJGDAvf[(891 - 890)]) {
            iXJGDAvf[1] = 10 * iXJGDAvf[0] + iXJGDAvf[1];
            num = 1;
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
            KAwd9hVG[1] = 0;
        };
    }
    if (!(1 != strlen (LLvixzb70))) {
        num = 0;
        KAwd9hVG[0] = 0;
    }
    if (2 < strlen (LLvixzb70) || (num == 0 && 10 * iXJGDAvf[0] + iXJGDAvf[1] >= (832 - 819))) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (int j = 1;
        j < strlen (LLvixzb70); j = j + 1) {
            UZmGs6kny = 10 * iXJGDAvf[j - 1] + iXJGDAvf[j];
            if (dgGp9X5yMa == 1) {
                UZmGs6kny = UZmGs6kny +iXJGDAvf[j - 2] * 100;
                dgGp9X5yMa = 0;
            }
            if (UZmGs6kny < 13) {
                KAwd9hVG[j] = 0;
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
                dgGp9X5yMa = 1;
            }
            if (UZmGs6kny >= 13) {
                if (num == 0)
                    num = j;
                KAwd9hVG[j] = UZmGs6kny / 13;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                iXJGDAvf[j] = UZmGs6kny % 13;
            };
        };
    }
    for (int k = num;
    k < strlen (LLvixzb70); k++)
        cout << KAwd9hVG[k];
    cout << endl;
    cout << iXJGDAvf[strlen (LLvixzb70) - 1];
    return 0;
}

