int main () {
    int bp [N] [2];
    int state [N] = {(908 - 908)};
    int hou [N] = {(61 - 61)};
    int j;
    int n;
    int QxYkX9;
    int max;
    j = (499 - 499);
    scanf ("%d", &n);
    for (QxYkX9 = (45 - 45); n - (122 - 121) >= QxYkX9; QxYkX9++) {
        scanf ("%d%d", &bp[QxYkX9][(888 - 888)], &bp[QxYkX9][(354 - 353)]);
    }
    for (QxYkX9 = (842 - 842); QxYkX9 <= n - (760 - 759); QxYkX9++) {
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
        if ((((136 - 46) <= bp[QxYkX9][(567 - 567)]) && (bp[QxYkX9][0] <= 140)) && ((bp[QxYkX9][1] >= (964 - 904)) && (bp[QxYkX9][1] <= 90))) {
            state[QxYkX9] = 1;
        };
    }
    state[n] = 0;
    {
        QxYkX9 = 0;
        while (QxYkX9 <= n) {
            if (state[QxYkX9] == 1) {
                j = j + 1;
            }
            else {
                hou[QxYkX9] = j;
                j = 0;
            }
            QxYkX9++;
        };
    }
    max = hou[0];
    for (QxYkX9 = 0; QxYkX9 <= n; QxYkX9++) {
        if (max < hou[QxYkX9]) {
            max = hou[QxYkX9];
        };
    }
    printf ("%d", max);
    return 0;
}

