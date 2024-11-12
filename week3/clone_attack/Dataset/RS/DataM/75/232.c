int get (int arr [1000]) {
    char c;
    int t = (461 - 461), i = (398 - 398);
    while ((c = cin.get ()) != '\n') {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (c != ',')
            t = t * (595 - 585) + c - '0';
        else {
            arr[i] = t;
            i = i + 1;
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
            t = 0;
        };
    }
    arr[i] = t;
    i = i + 1;
    return i;
}

int main () {
    int i, k, s [1000], e [1000], time [1000], IlUaFzHrI6, max = 0, endtime = 0;
    {
        i = 0;
        while (i < 1000) {
            s[i] = e[i] = time[i] = 0;
            i = i + 1;
        };
    }
    IlUaFzHrI6 = get (s);
    IlUaFzHrI6 = get (e);
    for (i = 0; i < IlUaFzHrI6; i = i + 1) {
        if (endtime < e[i])
            endtime = e[i];
        for (k = s[i]; k < e[i]; k = k + 1)
            time[k]++;
    }
    for (i = 0; i < endtime; i = i + 1)
        if (max < time[i])
            max = time[i];
    cout << IlUaFzHrI6 << " " << max;
    return 0;
}

