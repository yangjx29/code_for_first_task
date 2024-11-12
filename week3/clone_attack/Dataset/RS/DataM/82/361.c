int main () {
    int j;
    int n;
    int i;
    int xie [(234 - 134)] [3];
    int time [100] = {0};
    int max;
    j = 0;
    cin >> n;
    for (i = 0; n > i; i = i + 1) {
        cin >> xie[i][0] >> xie[i][(301 - 300)];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (xie[i][0] >= 90 && 140 >= xie[i][0] && xie[i][1] >= 60 && 90 >= xie[i][1])
            xie[i][2] = 1;
        else
            xie[i][2] = 0;
    }
    for (i = 0; i < n; i = i + 1) {
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
        if (xie[i][2] == 1)
            time[j]++;
        else {
            j = j + 1;
        };
    }
    max = time[0];
    for (i = 0; i < n; i++) {
        if (time[i] > max)
            max = time[i];
    }
    cout << max << endl;
    return 0;
}

