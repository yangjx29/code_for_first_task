int main () {
    char word [500] [45];
    int word_num, i, sum;
    sum = 0;
    scanf ("%d\n", &word_num);
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
    {
        i = 0;
        while (i < word_num) {
            scanf ("%s", &word[i]);
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
    {
        i = 0;
        while (i < word_num) {
            if (!(0 != sum)) {
                printf ("%s", word[i]);
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
                sum = sum + strlen (word[i]);
            }
            else {
                sum += strlen (word[i]) + 1;
                if (sum <= (339 - 259)) {
                    printf (" %s", word[i]);
                }
                else {
                    sum = 0;
                    i = i - 1;
                    printf ("\n");
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    return 0;
}

