int main () {
    char j3mOuwSG = 0;
    int time [3] [(1341 - 336)] = {(79 - 79)}, i = 1, j, num, tmax = 0;
    int count [1005] = {0}, countmax = 0;
    while (!('\n' == j3mOuwSG)) {
        cin >> time[1][i];
        i = i + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        j3mOuwSG = cin.get ();
    }
    j3mOuwSG = 0, i = 1;
    while (!('\n' == j3mOuwSG)) {
        cin >> time[(314 - 312)][i];
        j3mOuwSG = cin.get ();
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
        i++;
    }
    num = i - 1;
    for (i = 1; num >= i; i = i + 1)
        if (tmax < time[2][i])
            tmax = time[2][i];
    for (i = 1; i <= tmax; i = i + 1) {
        for (j = 1; j <= num; j = j + 1) {
            if (time[2][j] > i && time[1][j] <= i)
                count[i]++;
        };
    }
    for (i = 1; i <= tmax; i = i + 1)
        if (count[i] > countmax)
            countmax = count[i];
    cout << num << " " << countmax << endl;
    return 0;
}

