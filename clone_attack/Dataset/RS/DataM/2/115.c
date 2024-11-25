struct   Book {
    int BD9V63F4vT;
    char lzQsJgLa [26];
    int LGQCwo9;
}
jzmWAGHVQ [1000];

int main () {
    int num = 0;
    int n;
    int i;
    int j;
    int xHe75QGcmM8Y;
    int max;
    int If6ynD1pwg;
    int a [26] = {0};
    printf ("%c\n", If6ynD1pwg +65);
    max = 0;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d %s", &jzmWAGHVQ[i].BD9V63F4vT, jzmWAGHVQ[i].lzQsJgLa);
            xHe75QGcmM8Y = strlen (jzmWAGHVQ[i].lzQsJgLa);
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
            {
                j = 0;
                while (xHe75QGcmM8Y > j) {
                    a[jzmWAGHVQ[i].lzQsJgLa[j] - 65]++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    If6ynD1pwg = 0;
    for (i = 0; i < 26; i = i + 1) {
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
        if (max < a[i]) {
            max = a[i];
            If6ynD1pwg = i;
        };
    }
    {
        i = 0;
        while (i < n) {
            jzmWAGHVQ[i].LGQCwo9 = 0;
            xHe75QGcmM8Y = strlen (jzmWAGHVQ[i].lzQsJgLa);
            {
                j = 0;
                while (j < xHe75QGcmM8Y) {
                    if (jzmWAGHVQ[i].lzQsJgLa[j] == If6ynD1pwg +65) {
                        jzmWAGHVQ[i].LGQCwo9 = 1;
                        num = num + 1;
                        break;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    printf ("%d\n", num);
    {
        i = 0;
        while (i < n) {
            if (jzmWAGHVQ[i].LGQCwo9 == 1)
                printf ("%d\n", jzmWAGHVQ[i].BD9V63F4vT);
            i = i + 1;
        };
    }
    return 0;
}

