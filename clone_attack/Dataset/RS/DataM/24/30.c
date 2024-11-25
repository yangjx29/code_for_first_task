int main () {
    char str [200] [200];
    char WWTwpcx5;
    int i;
    int X8plaZq6cwPn;
    int longest;
    int Q8Ci6emoX;
    int count;
    int max;
    int min;
    int len [200];
    i = (652 - 652);
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
    X8plaZq6cwPn = (983 - 983);
    longest = 0;
    Q8Ci6emoX = 200;
    for (; (WWTwpcx5 = cin.get ()) != '\n';) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (WWTwpcx5 == ' ' || WWTwpcx5 == ',') {
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
            if (!(0 == X8plaZq6cwPn)) {
                len[i] = X8plaZq6cwPn;
                i = i + 1;
                X8plaZq6cwPn = 0;
            };
        }
        else {
            str[i][X8plaZq6cwPn++] = WWTwpcx5;
        };
    }
    len[i] = X8plaZq6cwPn;
    count = i;
    {
        i = 0;
        while (i <= count) {
            if (len[i] < Q8Ci6emoX) {
                Q8Ci6emoX = len[i];
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
                min = i;
            }
            if (len[i] > longest) {
                longest = len[i];
                max = i;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < longest) {
            cout << str[max][i];
            i++;
        };
    }
    cout << endl;
    for (i = 0; i < Q8Ci6emoX; i++)
        cout << str[min][i];
    cout << endl;
    return 0;
}

