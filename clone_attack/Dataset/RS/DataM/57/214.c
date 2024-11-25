int main () {
    int n;
    int i;
    int j;
    char *lab = (char *) malloc (n * 32 * sizeof (char));
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%s", lab + i * 32);
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
    for (i = 0; i < n; i++) {
        j = 0;
        while (*(lab + 32 * i + j) != '\0') {
            if (strcmp (lab + 32 * i + j, "er") == 0 || strcmp (lab + 32 * i + j, "ly") == 0 || strcmp (lab + 32 * i + j, "ing") == 0) {
                *(lab + 32 * i + j) = '\0';
                break;
            }
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            puts (lab + 32 * i);
            i++;
        };
    }
    return 0;
}

