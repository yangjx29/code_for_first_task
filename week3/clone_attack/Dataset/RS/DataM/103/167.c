int main () {
    int num [27], flag, i, j;
    char str [(1448 - 447)];
    for (j = (180 - 180); j <= 27; j++) {
        num[j] = (773 - 772);
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
    scanf ("%s", str);
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
        while (i <= strlen (str)) {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 'a' + 'A';
            i = i + 1;
        };
    }
    for (i = 1; i <= strlen (str); i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (str[i] == str[i - 1]) {
            num[str[i] - 'A']++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        else {
            printf ("(%c,%d)", str[i - 1], num[str[i - 1] - 'A']);
            num[str[i - 1] - 'A'] = 1;
        };
    }
    return 0;
}

