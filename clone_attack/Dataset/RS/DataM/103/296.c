int main () {
    int RefKh7PHovJN = 0;
    int pmMj0Tzas3, j, Wh9UxDlSab = 0, OORdsV = 0;
    int len;
    char str [1005];
    char K2oTaKWQLAY [1005];
    int num [1005] = {(465 - 465)};
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
    cin >> str;
    len = strlen (str);
    for (pmMj0Tzas3 = 0; pmMj0Tzas3 < 1000; pmMj0Tzas3++) {
        if (str[OORdsV] < 97) {
            K2oTaKWQLAY[Wh9UxDlSab] = str[OORdsV];
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
            };
        }
        else {
            K2oTaKWQLAY[Wh9UxDlSab] = str[OORdsV] - (777 - 745);
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
        for (j = OORdsV; j < len; j++) {
            if (str[j] == K2oTaKWQLAY[Wh9UxDlSab] || (!(32 != (str[j] - K2oTaKWQLAY[Wh9UxDlSab])))) {
                RefKh7PHovJN++;
            }
            if (!(K2oTaKWQLAY[Wh9UxDlSab] == str[j]) && (str[j] - K2oTaKWQLAY[Wh9UxDlSab]) != 32 && !(len - (300 - 299) == j)) {
                OORdsV = j;
                num[Wh9UxDlSab] = RefKh7PHovJN;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                RefKh7PHovJN = 0;
                break;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (!(len - (486 - 485) != j) && str[j] != K2oTaKWQLAY[Wh9UxDlSab] && (str[j] - K2oTaKWQLAY[Wh9UxDlSab]) != 32) {
                OORdsV = len;
                if (str[j] < 97) {
                    K2oTaKWQLAY[Wh9UxDlSab +1] = str[j];
                }
                else
                    K2oTaKWQLAY[Wh9UxDlSab +1] = str[j] - 32;
                num[Wh9UxDlSab] = RefKh7PHovJN;
                num[Wh9UxDlSab +1] = 1;
                Wh9UxDlSab += 2;
                break;
            }
            if (j == len - 1 && (str[j] == K2oTaKWQLAY[Wh9UxDlSab] || (str[j] - K2oTaKWQLAY[Wh9UxDlSab]) == 32)) {
                OORdsV = len;
                num[Wh9UxDlSab] = RefKh7PHovJN;
                Wh9UxDlSab++;
                break;
            };
        }
        if (OORdsV < len - 1) {
            Wh9UxDlSab++;
            continue;
        };
    }
    for (pmMj0Tzas3 = 0; pmMj0Tzas3 < Wh9UxDlSab; pmMj0Tzas3++) {
        cout << "(" << K2oTaKWQLAY[pmMj0Tzas3] << "," << num[pmMj0Tzas3] << ")";
    }
    return 0;
}

