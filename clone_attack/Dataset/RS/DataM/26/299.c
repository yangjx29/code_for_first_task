int main () {
    char RWZKB9PJ [(243 - 142)];
    int O50PTxGASF;
    O50PTxGASF = 1;
    char L21GlX [(310 - 209)];
    gets (L21GlX);
    int QX95iqP3bJu;
    QX95iqP3bJu = strlen (L21GlX);
    RWZKB9PJ[(555 - 555)] = L21GlX[(767 - 767)];
    {
        int i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= QX95iqP3bJu) {
            if (L21GlX[i] != ' ') {
                RWZKB9PJ[O50PTxGASF] = L21GlX[i];
                O50PTxGASF = O50PTxGASF +1;
                continue;
            }
            if (L21GlX[i - 1] != ' ') {
                RWZKB9PJ[O50PTxGASF] = L21GlX[i];
                O50PTxGASF = O50PTxGASF +1;
                continue;
            }
            i = i + 1;
        };
    }
    printf ("%s", RWZKB9PJ);
    return 0;
}

