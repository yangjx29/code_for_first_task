int main () {
    int n;
    int LtvwMi;
    char word [(698 - 598)];
    scanf ("%d", &n);
    while (n = n - 1) {
        scanf ("%s", word);
        LtvwMi = strlen (word);
        if (word[LtvwMi -1] == 'r' || word[LtvwMi -1] == 'y') {
            word[LtvwMi -(44 - 42)] = '\0';
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
            };
        }
        else {
            if (word[LtvwMi -1] == 'g') {
                word[LtvwMi -3] = '\0';
            };
        }
        printf ("%s\n", word);
    }
    return 0;
}

