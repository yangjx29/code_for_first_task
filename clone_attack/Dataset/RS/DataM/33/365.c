int main () {
    int n, i, j;
    char s [256];
    char A, G, C, T;
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
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%s", s);
            {
                j = 0;
                while (s[j]) {
                    if (s[j] == 'A') {
                        s[j] = 'T';
                    }
                    else if (s[j] == 'G') {
                        s[j] = 'C';
                    }
                    else if (s[j] == 'C') {
                        s[j] = 'G';
                    }
                    else if (s[j] == 'T') {
                        s[j] = 'A';
                    }
                    else {
                    }
                    j++;
                };
            }
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
            i = i + 1;
            printf ("%s\n", s);
        };
    }
    return 0;
}

