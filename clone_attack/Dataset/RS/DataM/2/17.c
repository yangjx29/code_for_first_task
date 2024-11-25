struct   book {
    long  int HHDMNpcSgZ;
    char name [(313 - 287)];
}
book [(1906 - 906)];

int main () {
    int m;
    int i;
    int KFqXfw;
    int tFVQNHpywIc;
    int writer [26] = {(423 - 423), (208 - 208), (834 - 834), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int qlmduUc = 0;
    char YblTpIs;
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
    YblTpIs = 'A';
    scanf ("%d", &m);
    for (i = 0; m > i; i = i + 1) {
        scanf ("%ld ", &book[i].HHDMNpcSgZ);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", book[i].name);
    }
    for (i = 0; m > i; i = i + 1) {
        tFVQNHpywIc = strlen (book[i].name);
        {
            KFqXfw = 0;
            while (tFVQNHpywIc > KFqXfw) {
                writer[book[i].name[KFqXfw] - 'A']++;
                KFqXfw = KFqXfw +1;
            };
        };
    }
    for (i = 0; i < 26; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (writer[i] > qlmduUc) {
            qlmduUc = writer[i];
            YblTpIs = i + 'A';
        };
    }
    printf ("%c\n", YblTpIs);
    printf ("%d\n", qlmduUc);
    for (i = 0; i < m; i++) {
        KFqXfw = 0;
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
        while (tFVQNHpywIc > KFqXfw) {
            tFVQNHpywIc = strlen (book[i].name);
            if (book[i].name[KFqXfw] == YblTpIs) {
                printf ("%ld\n", book[i].HHDMNpcSgZ);
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
            KFqXfw = KFqXfw +1;
        };
    }
    return 0;
}

