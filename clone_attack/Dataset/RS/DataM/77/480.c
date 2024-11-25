int len, k, m, t;
char str [101];

int work (int rqBU5L3EX, int j) {
    if (!(0 != rqBU5L3EX) && j == len - (197 - 196)) {
        printf ("%d %d", rqBU5L3EX, j);
        return 0;
    }
    else {
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
        if (str[rqBU5L3EX] != str[j] && !(' ' == str[rqBU5L3EX]) && str[rqBU5L3EX] != ' ') {
            printf ("%d %d\n", rqBU5L3EX, j);
            str[rqBU5L3EX] = ' ';
            str[j] = ' ';
            for (k = rqBU5L3EX - 1;; k = k - 1) {
                if (str[k] != ' ')
                    break;
            }
            {
                m = j + 1;
                while (1) {
                    if (str[m] != ' ')
                        break;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    m = m + 1;
                };
            }
            work (k, m);
        }
        else if (str[rqBU5L3EX] == str[j] && str[rqBU5L3EX] != ' ' && str[rqBU5L3EX] != ' ') {
            for (t = j + 1; t < len; t = t + 1) {
                if (str[t] != ' ')
                    break;
            }
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
            work (j, t);
        };
    };
}

int main () {
    int rqBU5L3EX;
    int j;
    gets (str);
    len = strlen (str);
    work (0, 1);
}

