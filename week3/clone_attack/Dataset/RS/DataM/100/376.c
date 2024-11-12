int main () {
    char z [300];
    gets (z);
    char mLd87OmQY231 [(71 - 41)];
    int num [(421 - 395)] = {(568 - 568)};
    int len;
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
    int i, j = 0;
    len = strlen (z);
    for (i = 0; len > i; i = i + 1) {
        if (z[i] >= 'a' && z[i] <= 'z') {
            num[z[i] - 'a']++;
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
            };
        };
    }
    for (i = 0; i < 26; i = i + 1) {
        if (num[i] != 0) {
            printf ("%c=%d\n", i + 'a', num[i]);
            j = j + 1;
        };
    }
    if (j == 0) {
        printf ("No");
    }
    return 0;
}

