void  paixu (char *FAypUJN) {
    int i;
    int R085e2fMYCE;
    char temp;
    {
        R085e2fMYCE = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (strlen (FAypUJN) > R085e2fMYCE) {
            for (i = (248 - 248); i < strlen (FAypUJN) - R085e2fMYCE; i++) {
                if (FAypUJN[i + 1] < FAypUJN[i]) {
                    temp = FAypUJN[i + 1];
                    FAypUJN[i + 1] = FAypUJN[i];
                    FAypUJN[i] = temp;
                };
            }
            R085e2fMYCE++;
        };
    };
}

int main () {
    char a [(864 - 764)];
    char b [100];
    char c [(937 - 887)];
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
    scanf ("%s %s", a, b);
    if (strlen (a) == strlen (b)) {
        paixu (a);
        paixu (b);
        if (strcmp (a, b) == 0) {
            printf ("YES\n");
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    else {
    }
    return 0;
}

