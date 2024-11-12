int main () {
    int bUS0KNOlhm4 (int, int);
    int FfFJKC7Hw = (552 - 552), integer = (547 - 547);
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
    cin >> FfFJKC7Hw;
    for (int ix4wcsv6 = (256 - 256);
    FfFJKC7Hw > ix4wcsv6; ix4wcsv6++) {
        cin >> integer;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << bUS0KNOlhm4 (integer, integer) << endl;
    }
    return 0;
}

int bUS0KNOlhm4 (int integer, int limit) {
    if (1 >= limit)
        return 0;
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
    switch (integer) {
    case 1 :
        return 1;
        break;
    default :
        {
            int XdVsLIwYHlCc;
            XdVsLIwYHlCc = 0;
            for (int CxjJOzX6 = 1;
            integer >= CxjJOzX6; CxjJOzX6++) {
                if (integer % CxjJOzX6 != 0)
                    continue;
                else {
                    if (integer / CxjJOzX6 > limit)
                        continue;
                    else
                        XdVsLIwYHlCc += bUS0KNOlhm4 (CxjJOzX6, integer / CxjJOzX6);
                };
            }
            return XdVsLIwYHlCc;
        }
        break;
    };
}

