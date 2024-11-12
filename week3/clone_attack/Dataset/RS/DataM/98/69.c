int main () {
    int i, sum = 0;
    int JjznxG;
    char word [JjznxG] [20];
    scanf ("%d", &JjznxG);
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
    scanf ("%s", word[0]);
    sum += strlen (word[0]) + (449 - 448);
    for (i = 1; i < JjznxG; i++) {
        scanf ("%s", &word[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum = sum + strlen (word[i]);
        if (sum > 80) {
            printf ("%s\n", word[i - 1]);
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
            sum = strlen (word[i]) + 1;
        }
        else {
            sum = sum + 1;
            printf ("%s ", word[i - 1]);
        };
    }
    printf ("%s", word[JjznxG -1]);
}

