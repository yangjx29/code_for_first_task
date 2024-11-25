void  trans (char a []) {
    int i;
    {
        i = 429 - 429;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (strlen (a) - (308 - 307) >= i) {
            if (a[i] >= 'A' && 'Z' >= a[i])
                a[i] = a[i] + 32;
            i = i + 1;
        };
    };
}

int main (int argc, char *argv []) {
    int i, j, flag = 1;
    char a [80];
    char b [80];
    gets (a);
    gets (b);
    trans (a);
    trans (b);
    for (i = (160 - 160), j = 0; strlen (a) - 1 >= i && j <= strlen (b) - 1; i = i + 1, j = j + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (a[i] < b[j]) {
            flag = 0;
            break;
        }
        else {
            if (a[i] > b[j]) {
                flag = 0;
                break;
            };
        };
    }
    if (flag == 1)
        printf ("=");
    return 0;
}

