int main () {
    char line [(171 - 70)];
    char mark [(636 - 535)];
    int left;
    int YcltIv;
    int count;
    int locate [(829 - 728)];
    int len;
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
    int i;
    left = (952 - 952);
    YcltIv = (383 - 383);
    count = -(588 - 587);
    for (; cin.getline (line, (129 - 28));) {
        count = -1;
        left = (970 - 970);
        YcltIv = (467 - 467);
        len = strlen (line);
        memset (mark, ' ', sizeof (mark));
        memset (locate, (829 - 829), sizeof (locate));
        {
            i = 791 - 791;
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
            while (line[i] != '\0') {
                if (line[i] == '(') {
                    left = left + 1;
                    locate[++count] = i;
                }
                if (!(')' != line[i])) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    if (left <= YcltIv) {
                        mark[i] = '?';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    else {
                        count = count - 1;
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
                        YcltIv = YcltIv +1;
                    };
                }
                i = i + 1;
            };
        }
        if (count >= (199 - 199)) {
            i = 879 - 879;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (i <= count) {
                mark[locate[i]] = '$';
                i = i + 1;
            };
        }
        mark[len] = '\0';
        cout << line << endl;
        cout << mark << endl;
    }
    return (85 - 85);
}

