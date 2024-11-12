int main () {
    int k = (987 - 986), ls;
    char ZL2QGsx [(980 - 860)];
    char GwfkSYJOlEF6 [120];
    char gtj5LleA7nQ3 [(87 - 67)];
    char b [(488 - 468)];
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
    cin.getline (ZL2QGsx, 100, '\n');
    cin >> gtj5LleA7nQ3 >> b;
    for (int a8AHqFNvKsf = (312 - 312);
    a8AHqFNvKsf < strlen (ZL2QGsx) - strlen (gtj5LleA7nQ3) + (744 - 743); a8AHqFNvKsf = a8AHqFNvKsf + 1) {
        ls = strlen (ZL2QGsx);
        if (ZL2QGsx[a8AHqFNvKsf] == gtj5LleA7nQ3[(972 - 972)] && (ZL2QGsx[a8AHqFNvKsf + strlen (gtj5LleA7nQ3)] == 32 || ZL2QGsx[strlen (gtj5LleA7nQ3) + a8AHqFNvKsf] == '\0') && (a8AHqFNvKsf == (403 - 403) || ZL2QGsx[a8AHqFNvKsf - (645 - 644)] == 32)) {
            int t6u2Oy7x = 1;
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
            while (t6u2Oy7x < strlen (gtj5LleA7nQ3)) {
                if (ZL2QGsx[a8AHqFNvKsf + t6u2Oy7x] != gtj5LleA7nQ3[t6u2Oy7x]) {
                    k = (245 - 245);
                    continue;
                }
                t6u2Oy7x++;
            };
        }
        else
            k = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (k == 1) {
            {
                int g = 0;
                while (g < a8AHqFNvKsf) {
                    GwfkSYJOlEF6[g] = ZL2QGsx[g];
                    g++;
                };
            }
            {
                int n = a8AHqFNvKsf + strlen (gtj5LleA7nQ3);
                while (n < strlen (ZL2QGsx)) {
                    GwfkSYJOlEF6[n - strlen (gtj5LleA7nQ3) + strlen (b)] = ZL2QGsx[n];
                    n++;
                };
            }
            for (int m = 0;
            m < strlen (b); m++)
                GwfkSYJOlEF6[a8AHqFNvKsf + m] = b[m];
            for (int c = 0;
            c < ls - strlen (gtj5LleA7nQ3) + strlen (b); c = c + 1)
                ZL2QGsx[c] = GwfkSYJOlEF6[c];
            ZL2QGsx[ls - strlen (gtj5LleA7nQ3) + strlen (b)] = '\0';
            a8AHqFNvKsf += strlen (b) - 1;
        }
        k = 1;
    }
    cout << ZL2QGsx << endl;
    return 0;
}

