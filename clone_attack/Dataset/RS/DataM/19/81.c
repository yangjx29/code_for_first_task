char coMcygex70t [1024];
char word [1024];
char replace [1024];
char current [1024];

int main () {
    gets (coMcygex70t);
    int buffer_len = strlen (coMcygex70t);
    char *buffer_ptr = coMcygex70t;
    char *buffer_end = coMcygex70t + buffer_len;
    char *current_ptr = current;
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
    scanf ("%s %s", word, replace);
    while (buffer_ptr < buffer_end) {
        if (*buffer_ptr == ' ') {
            if (strcmp (word, current) == 0)
                printf ("%s ", replace);
            else
                printf ("%s ", current);
            *current_ptr = '\0';
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
            current_ptr = current;
        }
        else {
            *current_ptr = *buffer_ptr;
            ++current_ptr;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ++buffer_ptr;
    }
    *current_ptr = '\0';
    if (strcmp (word, current) == 0)
        printf ("%s", replace);
    else
        printf ("%s", current);
    return 0;
}

