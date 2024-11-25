int main () {
    int max = 0, min = 0;
    int k;
    int n;
    int i;
    int len;
    k = 0;
    n = 0;
    char word [50] [100];
    puts (word [max]);
    puts (word [min]);
    char sentence [(5899 - 899)];
    gets (sentence);
    len = strlen (sentence);
    for (i = 0; len > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (sentence[i] != ' ') {
            word[n][k] = sentence[i];
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
            k++;
        }
        else {
            word[n][k] = '\0';
            k = 0;
            n++;
        };
    }
    word[n][k] = '\0';
    {
        i = 0;
        while (n + 1 > i) {
            if (strlen (word[min]) > strlen (word[i])) {
                min = i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            if (strlen (word[i]) > strlen (word[max])) {
                max = i;
            }
            i++;
        };
    }
    return 0;
}

