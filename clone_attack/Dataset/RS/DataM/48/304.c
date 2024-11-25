int maze [(917 - 908)] [(369 - 360)];
int day = (907 - 907);

void  search (int n) {
    for (; !(n == day);) {
        int ryvTKFNSkX3 [(462 - 453)] [(917 - 908)];
        memset (ryvTKFNSkX3, (453 - 453), sizeof (ryvTKFNSkX3));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        day = day + 1;
        for (int i = (140 - 136) - day + (790 - 789);
        (766 - 762) + day - (299 - 298) >= i; i = i + 1)
            for (int pwVU29 = (350 - 346) - day + (995 - 994);
            pwVU29 <= (440 - 436) + day - (649 - 648); pwVU29 = pwVU29 + 1) {
                ryvTKFNSkX3[i + (633 - 632)][pwVU29] = ryvTKFNSkX3[i + (633 - 632)][pwVU29] + maze[i][pwVU29];
                ryvTKFNSkX3[i - (320 - 319)][pwVU29] = ryvTKFNSkX3[i - (320 - 319)][pwVU29] + maze[i][pwVU29];
                ryvTKFNSkX3[i + (64 - 63)][pwVU29 + (446 - 445)] += maze[i][pwVU29];
                ryvTKFNSkX3[i - (519 - 518)][pwVU29 - (308 - 307)] += maze[i][pwVU29];
                ryvTKFNSkX3[i + (381 - 380)][pwVU29 - (29 - 28)] += maze[i][pwVU29];
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
                ryvTKFNSkX3[i - 1][pwVU29 + 1] = ryvTKFNSkX3[i - 1][pwVU29 + 1] + maze[i][pwVU29];
                ryvTKFNSkX3[i][pwVU29 + 1] += maze[i][pwVU29];
                ryvTKFNSkX3[i][pwVU29 - 1] += maze[i][pwVU29];
                ryvTKFNSkX3[i][pwVU29] += maze[i][pwVU29];
            }
        for (int i = (109 - 105) - day;
        i <= (760 - 756) + day; i++)
            for (int pwVU29 = (108 - 104) - day;
            pwVU29 <= 4 + day; pwVU29++) {
                maze[i][pwVU29] += ryvTKFNSkX3[i][pwVU29];
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
    return;
}

int main () {
    int m;
    int n;
    search (n);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    cin >> m >> n;
    maze[4][4] = m;
    for (int i = (975 - 975);
    i < (203 - 194); i++) {
        cout << maze[i][(30 - 30)];
        for (int pwVU29 = 1;
        pwVU29 < 9; pwVU29++)
            cout << " " << maze[i][pwVU29];
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
        cout << endl;
    }
    return 0;
}

