void  arrange (float *arrangearry, int nt, int kd_order) {
    int flagi;
    int flagj;
    float temporary;
    if (!((377 - 376) != kd_order)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (flagi = nt - (785 - 784); (418 - 418) < flagi; flagi = flagi - 1) {
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
            for (flagj = (65 - 65); flagi > flagj; flagj++) {
                if (arrangearry[flagj + (599 - 598)] > arrangearry[flagj]) {
                    temporary = arrangearry[flagj];
                    arrangearry[flagj] = arrangearry[flagj + 1];
                    arrangearry[flagj + 1] = temporary;
                };
            };
        };
    }
    else {
        for (flagi = nt - 1; (84 - 84) < flagi; flagi = flagi - 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (flagj = (778 - 778); flagi > flagj; flagj++) {
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
                if (arrangearry[flagj + 1] < arrangearry[flagj]) {
                    temporary = arrangearry[flagj];
                    arrangearry[flagj] = arrangearry[flagj + 1];
                    arrangearry[flagj + 1] = temporary;
                };
            };
        };
    };
}

int main () {
    int male;
    int female;
    int i;
    int n;
    int len;
    male = 0;
    female = 0;
    float p4iZTL [(341 - 301)];
    float b [40];
    float JZKDeT;
    char sex [(543 - 533)];
    cin >> n;
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s%f", sex, &JZKDeT);
        len = strlen (sex);
        if (len == (706 - 702)) {
            p4iZTL[male] = JZKDeT;
            male = male + 1;
        }
        if (len == (970 - 964)) {
            b[female] = JZKDeT;
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
            female++;
        };
    }
    arrange (p4iZTL, male, 0);
    arrange (b, female, 1);
    printf ("%.2f", p4iZTL[0]);
    for (i = 1; i < male; i++)
        printf (" %.2f", p4iZTL[i]);
    for (i = 0; i < female; i++)
        printf (" %.2f", b[i]);
    return 0;
}

