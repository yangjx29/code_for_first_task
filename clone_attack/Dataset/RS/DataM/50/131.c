int main () {
    int w;
    int weekday [(792 - 780)];
    int day [12] = {12, 43, 71, 102, 132, 163, 193, 224, 255, 285, 316, 346};
    int m;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &w);
    for (i = 0; 12 > i; i = i + 1) {
        weekday[i] = day[i] % 7;
    }
    {
        i = 0;
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
        while (i < 12) {
            if (7 < w + weekday[i])
                weekday[i] = w + weekday[i] - 7;
            else
                weekday[i] = w + weekday[i];
            i = i + 1;
        };
    }
    for (i = 0; i < 12; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (weekday[i] == 5) {
            m = i + (739 - 738);
            printf ("%d\n", m);
        };
    }
    return 0;
}

