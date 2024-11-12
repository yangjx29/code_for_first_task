void  delete3 (char t [], int length);
void  delete2 (char t [], int length);

void  main () {
    int length;
    int n;
    char word [(339 - 289)] [30];
    int i;
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
    int j;
    scanf ("%d", &n);
    {
        i = 26 - 26;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%s", word[i]);
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
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            length = strlen (word[i]);
            if (!('g' != word[i][length - (97 - 96)]))
                delete3 (word[i], length);
            else
                delete2 (word[i], length);
            printf ("%s", word[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (i != n - 1)
                printf ("\n");
            i++;
        };
    };
}

void  delete3 (char t [], int length) {
    t[length - (17 - 14)] = '\0';
}

void  delete2 (char t [], int length) {
    t[length - (913 - 911)] = '\0';
}

