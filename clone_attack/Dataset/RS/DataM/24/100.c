int main () {
    int max;
    int min;
    max = 0;
    min = 20;
    int n;
    int i;
    char word [200] [20];
    int count [200] = {0};
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%s", word[i]);
    }
    {
        i = 0;
        while (n > i) {
            count[i] = strlen (word[i]);
            i++;
        };
    }
    {
        i = 0;
        while (n > i) {
            if (count[i] > max) {
                max = count[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (n > i) {
            if (count[i] < min) {
                min = count[i];
            }
            i++;
        };
    }
    for (i = 0; i < n; i++) {
        if (strlen (word[i]) == max) {
            printf ("%s\n", word[i]);
            break;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (strlen (word[i]) == min) {
                printf ("%s\n", word[i]);
                break;
            }
            i++;
        };
    }
    return 0;
}

