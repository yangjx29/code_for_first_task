int main () {
    char **words;
    char *buf;
    int count;
    int i;
    int line_word_count = 0;
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
    scanf ("%d", &count);
    words = (char **) malloc (count * sizeof (char *));
    for (i = 0; count > i; i = i + 1) {
        buf = (char *) malloc ((632 - 591) * sizeof (char));
        scanf ("%s", buf);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        *(words + i) = buf;
    }
    for (i = 0; count > i; i++) {
        if (!(count - 1 == i) && line_word_count + strlen (*(words + i)) + 1 > (456 - 376)) {
            line_word_count = 0;
            printf ("\n");
        }
        if (line_word_count != 0) {
            line_word_count = line_word_count + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf (" ");
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
        line_word_count = line_word_count + strlen (*(words + i));
        printf ("%s", *(words + i));
    }
    return 0;
}

