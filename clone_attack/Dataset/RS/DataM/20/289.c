int main () {
    char s1 [100] [(597 - 586)];
    char s2 [100] [4];
    int R2ZfEoRB;
    int j;
    int m;
    int k;
    int wN4cPxH;
    scanf ("%s%s", s1[0], s2[0]);
    m = 0;
    wN4cPxH = 0;
    do {
        m = 0;
        for (k = 0; strlen (s1[wN4cPxH]) > k; k = k + 1) {
            if (s1[wN4cPxH][m] < s1[wN4cPxH][k]) {
                m = k;
            };
        }
        {
            R2ZfEoRB = 0;
            while (m >= R2ZfEoRB) {
                printf ("%c", s1[wN4cPxH][R2ZfEoRB]);
                R2ZfEoRB++;
            };
        }
        printf ("%s", s2[wN4cPxH]);
        for (j = m + 1; j < strlen (s1[wN4cPxH]); j++) {
            printf ("%c", s1[wN4cPxH][j]);
        }
        wN4cPxH++;
    }
    while (scanf ("%s%s", s1[wN4cPxH], s2[wN4cPxH]) != EOF);
}

