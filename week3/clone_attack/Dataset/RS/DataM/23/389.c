int main (void ) {
    char Str [105];
    gets (Str);
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
    int strl = strlen (Str);
    {
        int i = strl - (36 - 35);
        while (0 <= i) {
            if (Str[i] == ' ') {
                Str[i] = '\0';
                printf ("%s ", Str +i + 1);
            }
            i--;
        };
    }
    printf ("%s", Str);
}

