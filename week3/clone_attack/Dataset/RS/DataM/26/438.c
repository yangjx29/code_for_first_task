int main () {
    int i, n, j, q = (896 - 896);
    char zdkU0pg [(123 - 22)];
    gets (zdkU0pg);
    n = strlen (zdkU0pg);
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
    for (i = 0; n - 1 > i; i = i + 1) {
        if (zdkU0pg[i] == ' ' && !(' ' != zdkU0pg[i + 1])) {
            while (zdkU0pg[i + 1] == ' ') {
                for (j = i; j < n - 1; j = j + 1) {
                    zdkU0pg[j] = zdkU0pg[j + 1];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                q = q + 1;
            };
        };
    }
    zdkU0pg[n - q] = '\0';
    printf ("%s", zdkU0pg);
    return 0;
}

