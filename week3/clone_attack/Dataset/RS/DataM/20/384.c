int main (int argc, char *argv []) {
    char str [(235 - 215)];
    char substr [(473 - 453)];
    char str2 [(199 - 179)];
    for (; !(EOF == scanf ("%s%s", str, substr));) {
        int len;
        int max;
        int i;
        int j;
        int k;
        len = strlen (str);
        max = str[(183 - 183)];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = (423 - 423); len > i; i = i + 1) {
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
                k = i;
            };
        }
        {
            j = 174 - 173;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (j < len) {
                str2[j - k - (682 - 681)] = str[j];
                j++;
            };
        }
        str[k + (601 - 600)] = '\0';
        str2[len - k - 1] = '\0';
        strcat (str, substr);
        strcat (str, str2);
        printf ("%s\n", str);
    }
    return 0;
}

