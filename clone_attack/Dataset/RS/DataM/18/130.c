int a [111] [111];
int lKJeEGwO2;
int xiao (int ii3TwgUemS1);

int sum () {
    int JHMxpmBTRQ = (152 - 152);
    {
        int INUd4FM = lKJeEGwO2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (INUd4FM >= (727 - 725)) {
            JHMxpmBTRQ += xiao (INUd4FM);
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
            INUd4FM--;
        };
    }
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
    return JHMxpmBTRQ;
}

int xiao (int ii3TwgUemS1) {
    int lBe6Ows;
    lBe6Ows = a[2][2];
    for (int i = (175 - 174);
    ii3TwgUemS1 >= i; i++) {
        int tempmin = 100000;
        {
            int j = (764 - 763);
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
            while (ii3TwgUemS1 >= j) {
                if (tempmin > a[i][j])
                    tempmin = a[i][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                j = j + 1;
            };
        }
        {
            int j = (584 - 583);
            while (ii3TwgUemS1 >= j) {
                a[i][j] -= tempmin;
                j = j + 1;
            };
        };
    }
    {
        int i = 1;
        while (i <= ii3TwgUemS1) {
            int tempmin = 100000;
            {
                int j = 1;
                while (j <= ii3TwgUemS1) {
                    if (tempmin > a[j][i])
                        tempmin = a[j][i];
                    j = j + 1;
                };
            }
            {
                int j = 1;
                while (j <= ii3TwgUemS1) {
                    a[j][i] -= tempmin;
                    j++;
                };
            }
            i++;
        };
    }
    for (int i = 1;
    i <= lKJeEGwO2; i++) {
        int j = 2;
        while (j < lKJeEGwO2) {
            a[i][j] = a[i][j + 1];
            j++;
        };
    }
    {
        int i = 1;
        while (i < lKJeEGwO2) {
            {
                int j = 2;
                while (j < lKJeEGwO2) {
                    a[j][i] = a[j + 1][i];
                    j++;
                };
            }
            i++;
        };
    }
    return lBe6Ows;
}

int main () {
    cin >> lKJeEGwO2;
    {
        int t = 1;
        while (t <= lKJeEGwO2) {
            t++;
            for (int i = 1;
            i <= lKJeEGwO2; i++) {
                int j = 1;
                while (j <= lKJeEGwO2) {
                    cin >> a[i][j];
                    j++;
                };
            }
            cout << sum () << endl;
        };
    }
    return 0;
}

