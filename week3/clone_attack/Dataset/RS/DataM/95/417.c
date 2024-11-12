int main () {
    char exPgKaL [81];
    char s1 [(310 - 229)];
    int i = 0;
    int max;
    int n = 0;
    gets (&s1[0]);
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
    gets (&exPgKaL[0]);
    {
        i = 0;
        while (!('\0' == s1[i])) {
            if (90 >= s1[i]) {
                s1[i] += 32;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (!('\0' == exPgKaL[i])) {
            if (90 >= exPgKaL[i]) {
                exPgKaL[i] = exPgKaL[i] + 32;
            }
            i = i + 1;
        };
    }
    max = i;
    {
        i = 0;
        while (i < max) {
            if (s1[i] < exPgKaL[i]) {
                n = n + 1;
                break;
                printf ("<\n");
            }
            if (s1[i] > exPgKaL[i]) {
                n = n + 1;
                break;
                printf (">\n");
            }
            i++;
        };
    }
    if (n == 0) {
        printf ("=\n");
    }
    return 0;
}

