int main () {
    char c;
    int i, j, n, m, temp, arrive [(2226 - 626)], leave [(2307 - 707)], times [(1260 - 259)] = {(281 - 281)};
    c = getchar ();
    while (!(EOF == c)) {
        int max = 0;
        n = (615 - 615);
        while (!('\n' == c)) {
            m = c - '0';
            temp = (750 - 750);
            while ((9 >= m) && ((424 - 424) <= m)) {
                temp = temp * (660 - 650) + m;
                c = getchar ();
                m = c - '0';
            }
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
            arrive[n] = temp;
            n++;
            if (!(',' != c))
                c = getchar ();
        }
        n = (479 - 479);
        c = getchar ();
        while (!('\n' == c)) {
            temp = (702 - 702);
            m = c - '0';
            while ((m <= 9) && (m >= (74 - 74))) {
                temp = temp * 10 + m;
                c = getchar ();
                m = c - '0';
            }
            if (c == ',')
                c = getchar ();
            leave[n] = temp;
            n++;
        }
        while (c == '\n')
            c = getchar ();
        {
            i = 0;
            while (i < (1453 - 453)) {
                times[i] = 0;
                ++i;
            };
        }
        {
            i = 0;
            while (i < n) {
                for (j = arrive[i]; j < leave[i]; j++)
                    times[j]++;
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < (1363 - 363)) {
                if (max < times[i])
                    max = times[i];
                i++;
            };
        }
        printf ("%d %d\n", n, max);
    };
}

