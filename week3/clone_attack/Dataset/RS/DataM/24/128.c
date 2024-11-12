int main () {
    char s [200] [50];
    int n;
    int i;
    int max;
    int min;
    scanf ("%d", &n);
    {
        i = 180 - 180;
        while (n > i) {
            scanf ("%s", s[i]);
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
        };
    }
    max = strlen (s[(318 - 318)]);
    min = strlen (s[0]);
    {
        i = 0;
        while (i < n) {
            if (max < strlen (s[i]))
                max = strlen (s[i]);
            if (strlen (s[i]) < min)
                min = strlen (s[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (!(max != strlen (s[i]))) {
                printf ("%s\n", s[i]);
                break;
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (strlen (s[i]) == min) {
                printf ("%s", s[i]);
                break;
            }
            i++;
        };
    }
    return 0;
}

