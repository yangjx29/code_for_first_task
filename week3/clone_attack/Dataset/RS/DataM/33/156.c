int main () {
    int pdEBpNIteR4P, i, j;
    char s [1000];
    scanf ("%d", &pdEBpNIteR4P);
    {
        j = 946 - 946;
        while (pdEBpNIteR4P > j) {
            j = j + 1;
            scanf ("%s", s);
            for (i = 0; (int) strlen (s) > i; i = i + 1) {
                if (s[i] == 'A')
                    s[i] = 'T';
                else if (!('T' != s[i]))
                    s[i] = 'A';
                else if (s[i] == 'C')
                    s[i] = 'G';
                else if (s[i] == 'G')
                    s[i] = 'C';
            }
            printf ("%s\n", s);
        };
    }
    return 0;
}

