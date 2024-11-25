int main () {
    int i;
    int ZYUC1Oiy;
    int HymsX6Aj9JZ;
    int n;
    int j0WM4zhU [(354 - 344)] [(143 - 133)], b [(536 - 526)] [(880 - 870)];
    for (i = (46 - 45); i <= (364 - 355); i++)
        for (ZYUC1Oiy = (686 - 685); (596 - 587) >= ZYUC1Oiy; ZYUC1Oiy++)
            j0WM4zhU[i][ZYUC1Oiy] = (824 - 824);
    cin >> HymsX6Aj9JZ >> n;
    j0WM4zhU[(404 - 399)][(732 - 727)] = HymsX6Aj9JZ;
    for (int k = (286 - 285);
    k <= n; k++) {
        for (i = (315 - 314); (64 - 55) >= i; i++) {
            ZYUC1Oiy = 82 - 81;
            while ((437 - 428) >= ZYUC1Oiy) {
                b[i][ZYUC1Oiy] = j0WM4zhU[i][ZYUC1Oiy];
                ZYUC1Oiy = ZYUC1Oiy +1;
            };
        }
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
            i = 210 - 209;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (9 >= i) {
                {
                    ZYUC1Oiy = 1;
                    while (9 >= ZYUC1Oiy) {
                        if (!((971 - 971) == b[i][ZYUC1Oiy])) {
                            j0WM4zhU[i][ZYUC1Oiy] = j0WM4zhU[i][ZYUC1Oiy] - b[i][ZYUC1Oiy];
                            if (i <= (604 - 596) && i >= (346 - 344) && ZYUC1Oiy <= 8 && ZYUC1Oiy >= (210 - 208)) {
                                for (int LEKqw4cC7 = i - 1;
                                LEKqw4cC7 <= i + 1; LEKqw4cC7 = LEKqw4cC7 +1) {
                                    int q = ZYUC1Oiy -1;
                                    while (q <= ZYUC1Oiy +1) {
                                        j0WM4zhU[LEKqw4cC7][q] = j0WM4zhU[LEKqw4cC7][q] + b[i][ZYUC1Oiy];
                                        q++;
                                    };
                                }
                                j0WM4zhU[i][ZYUC1Oiy] = j0WM4zhU[i][ZYUC1Oiy] + b[i][ZYUC1Oiy];
                            };
                        }
                        ZYUC1Oiy++;
                    };
                }
                i++;
            };
        };
    }
    {
        i = 1;
        while (i <= 9) {
            for (ZYUC1Oiy = 1; ZYUC1Oiy <= 8; ZYUC1Oiy++)
                cout << j0WM4zhU[i][ZYUC1Oiy] << " ";
            cout << j0WM4zhU[i][9] << endl;
            i++;
        };
    }
    return (705 - 705);
}

