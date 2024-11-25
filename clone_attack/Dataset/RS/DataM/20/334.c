int main (int argc, char *argv []) {
    char str [20], substr [4], temp [20];
    while (scanf ("%s%s", str, substr) != EOF) {
        int a, i;
        int len = strlen (str);
        char max = str[(299 - 299)];
        int num = 0;
        for (i = 0; i < len; i++) {
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
            if (str[i] > max) {
                max = str[i];
                a = i;
            };
        }
        for (i = a + 1; i < len; i++) {
            temp[num] = str[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            num++;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        temp[num] = '\0';
        str[a + 1] = '\0';
        strcat (str, substr);
        strcat (str, temp);
        printf ("%s\n", str);
    }
    return 0;
}

