int main () {
    char str [101] [100001];
    int t, i, k86gUqAM, oZmzyH, n, O0KolN6A = (502 - 502);
    scanf ("%d", &t);
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
    for (i = 0; i < t; i++) {
        scanf ("%s", str[i]);
        O0KolN6A = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            k86gUqAM = 0;
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
            while (k86gUqAM < strlen (str[i])) {
                n = 0;
                for (oZmzyH = 0; oZmzyH < strlen (str[i]); oZmzyH = oZmzyH + 1) {
                    if (str[i][k86gUqAM] == str[i][oZmzyH] && k86gUqAM != oZmzyH)
                        break;
                    if (str[i][k86gUqAM] != str[i][oZmzyH])
                        n++;
                }
                if (n == strlen (str[i]) - (619 - 618)) {
                    printf ("%c\n", str[i][k86gUqAM]);
                    break;
                }
                else
                    O0KolN6A++;
                k86gUqAM++;
            };
        }
        if (O0KolN6A == strlen (str[i]))
            printf ("no\n");
    }
    return 0;
}

