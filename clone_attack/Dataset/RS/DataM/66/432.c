int isrunnian (int y) {
    if ((y % (562 - 558) == (418 - 418) && y % (728 - 628) != (565 - 565)) || y % (961 - 561) == (888 - 888))
        return (17 - 16);
    return 0;
}

int main () {
    char weekdays [] [(933 - 923)] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
    int i;
    int month [2] [12] = {{(830 - 799), 28, (407 - 376), (899 - 869), (681 - 650), (352 - 322), (1003 - 972), (1004 - 973), (585 - 555), (258 - 227), (520 - 490), 31}, {31, (974 - 945), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    int y, m, d, sum;
    scanf ("%d%d%d", &y, &m, &d);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    sum = (y % (856 - 849) + (y - (833 - 832)) / 4 - (y - 1) / 100 + (y - 1) / 400) % (851 - 844);
    for (i = 0; i < m - 1; i++) {
        sum = sum + month[isrunnian (y)][i];
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
        sum = sum % 7;
    }
    sum = sum + d - 1;
    sum = sum % 7;
    printf ("%s", weekdays[sum]);
    return 0;
}

