int main () {
    char zfc [101], VCSxjByZh [101];
    gets (zfc);
    int i, m = 0;
    for (i = 0; zfc[i] != '\0'; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (zfc[i] != ' ') {
            VCSxjByZh[m] = zfc[i];
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
            m = m + 1;
        }
        else if (zfc[i] == ' ' && zfc[i + 1] != ' ') {
            VCSxjByZh[m] = zfc[i];
            m += 1;
        }
        else {
            continue;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
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
    VCSxjByZh[m] = '\0';
    printf ("%s\n", VCSxjByZh);
    return 0;
}

