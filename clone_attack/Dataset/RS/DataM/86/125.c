int main () {
    int time;
    int i, eOoYjhXuGy61, s54k0t2, N9b62DvCO, k;
    int eiOrYujwES;
    int times [eiOrYujwES];
    int tSd4prFH [30] [30];
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
    scanf ("%d", &eiOrYujwES);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (eiOrYujwES > i) {
            scanf ("%d", &s54k0t2);
            times[i] = 60;
            for (eOoYjhXuGy61 = 0; eOoYjhXuGy61 < s54k0t2; eOoYjhXuGy61++)
                scanf ("%d", &tSd4prFH[i][eOoYjhXuGy61]);
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
            for (k = 0; k < s54k0t2; k++) {
                if (times[i] <= tSd4prFH[i][k])
                    times[i] = times[i] + 3;
                else {
                    if (!(1 != times[i] - tSd4prFH[i][k]))
                        times[i] += 2;
                    else if (times[i] - tSd4prFH[i][k] == 2)
                        times[i] = times[i] + 1;
                }
                times[i] -= 3;
            }
            i++;
        };
    }
    for (i = 0; i < eiOrYujwES; i = i + 1)
        printf ("%d\n", times[i]);
    return 0;
}

