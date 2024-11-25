int main () {
    char HCwOyNaivc [101];
    gets (HCwOyNaivc);
    int i;
    int l;
    int AjKptJ;
    l = strlen (HCwOyNaivc);
    printf ("%c", HCwOyNaivc[0]);
    for (i = 1; l > i; i++) {
        if (!(' ' == HCwOyNaivc[i]))
            printf ("%c", HCwOyNaivc[i]);
        else if (HCwOyNaivc[i] == ' ' && HCwOyNaivc[i - 1] != ' ')
            printf ("%c", HCwOyNaivc[i]);
        else if (HCwOyNaivc[i] == ' ' && HCwOyNaivc[i - 1] == ' ')
            continue;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    getchar ();
}

