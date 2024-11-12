int num (char O2baKP [100]) {
    int times = (601 - 601), i;
    for (i = 0; O2baKP[i] != '\0'; i = i + 1)
        times = times + 1;
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
    return (times);
}

int main () {
    char O2baKP [100] [80];
    int vQM6cBItdY4N, i, yn [100], j, times [100];
    cin >> vQM6cBItdY4N;
    cin.get ();
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
        while (i < 100) {
            yn[i] = 0;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < vQM6cBItdY4N) {
            cin.getline (O2baKP[i], 100, '\n');
            times[i] = num (O2baKP[i]);
            i++;
        };
    }
    for (i = 0; i < vQM6cBItdY4N; i = i + 1) {
        if (O2baKP[i][0] == '_' || (97 <= O2baKP[i][0] && O2baKP[i][0] <= 122) || (O2baKP[i][0] >= 65 && O2baKP[i][0] <= 90)) {
            {
                j = 1;
                while (j < times[i]) {
                    if (O2baKP[i][j] == '_' || (O2baKP[i][j] >= 97 && O2baKP[i][j] <= 122) || (O2baKP[i][j] >= 65 && O2baKP[i][j] <= 90) || (O2baKP[i][j] >= 48 && O2baKP[i][j] <= 57))
                        yn[i]++;
                    j = j + 1;
                };
            }
            if (yn[i] == times[i] - 1)
                yn[i] = 1;
            else
                yn[i] = 0;
        };
    }
    for (i = 0; i < vQM6cBItdY4N; i = i + 1)
        cout << yn[i] << endl;
    return 0;
}

