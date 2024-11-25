int main () {
    int n;
    int N1HnwJM = 0;
    scanf ("%d", &n);
    do {
        char s [256];
        int k, len;
        N1HnwJM++;
        scanf ("%s", s);
        len = strlen (s);
        {
            k = 0;
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
            while (k < len) {
                if (s[k] == 'A') {
                    s[k] = s[k] - 'A' + 'T';
                }
                else if (s[k] == 'T') {
                    s[k] = s[k] - 'T' + 'A';
                }
                else if (s[k] == 'G') {
                    s[k] = s[k] - 'G' + 'C';
                }
                else if (s[k] == 'C') {
                    s[k] = s[k] - 'C' + 'G';
                }
                k++;
            };
        }
        printf ("%s\n", s);
    }
    while (N1HnwJM < n);
    return 0;
}

