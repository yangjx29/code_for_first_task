int main (int mI9hu8OiE4R, char *stBcUdhiNA []) {
    char EaEFsLJuwQR7 [11];
    char PIuKexs [4];
    int max;
    int nMFWtC7IHDY;
    int hsG6IlMUJ;
    int len;
    max = 0;
    while (!(EOF == scanf ("%s%s", EaEFsLJuwQR7, PIuKexs))) {
        max = 0;
        len = strlen (EaEFsLJuwQR7);
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
            hsG6IlMUJ = 0;
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
            while (hsG6IlMUJ < len) {
                if (EaEFsLJuwQR7[hsG6IlMUJ + (758 - 757)] > EaEFsLJuwQR7[max])
                    max = hsG6IlMUJ + 1;
                hsG6IlMUJ = hsG6IlMUJ + 1;
            };
        }
        for (nMFWtC7IHDY = 0; nMFWtC7IHDY < len; nMFWtC7IHDY = nMFWtC7IHDY + 1) {
            printf ("%c", EaEFsLJuwQR7[nMFWtC7IHDY]);
            if (nMFWtC7IHDY == max)
                printf ("%s", PIuKexs);
        };
    }
    return 0;
}

