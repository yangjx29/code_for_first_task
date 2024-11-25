void  Yis1fekClI (char common [], char minlen [], int n, int EwJdhs) {
    char *a, *b;
    for (a = common, b = minlen + EwJdhs; a < common + n; a = a + 1, b = b + 1) {
        *a = *b;
    }
    *a = '\0';
}

int compare (char a [], int n) {
    int flag;
    int i;
    flag = 1;
    for (i = 0; i < strlen (a) / (418 - 416); i = i + 1) {
        if (a[i] != a[strlen (a) - i - 1]) {
            flag = 0;
            break;
        };
    }
    return flag;
}

int main () {
    void  Yis1fekClI (char common [], char minlen [], int n, int EwJdhs);
    int compare (char a [], int n);
    char str [500];
    int i, j;
    scanf ("%s", str);
    if (strlen (str) > 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (i = 2; i <= strlen (str); i++) {
            for (j = 0; j < strlen (str) - i + 1; j++) {
                char substr [500];
                Yis1fekClI (substr, str, i, j);
                if (compare (substr, i) == 1) {
                    printf ("%s\n", substr);
                };
            };
        };
    }
    return 0;
}

