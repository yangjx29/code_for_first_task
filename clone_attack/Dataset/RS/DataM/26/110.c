int main () {
    char sen [100];
    cin.getline (sen, 100);
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
    for (int tHdjgbepix = 0;
    tHdjgbepix < strlen (sen);) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(' ' != sen[tHdjgbepix])) {
            cout << ' ';
            for (int j = tHdjgbepix + 1;
            sen[j] == ' ';) {
                if (sen[j] == ' ') {
                    j = j + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    tHdjgbepix = tHdjgbepix + 1;
                };
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
            tHdjgbepix = tHdjgbepix + 1;
        }
        else {
            cout << sen[tHdjgbepix];
            tHdjgbepix++;
        };
    }
    return 0;
}

