int main () {
    int i, len1, len2, j, k, a = 0;
    char string [(523 - 266)], substring [257], t0rt8OwiTmZ [257];
    gets (string);
    puts (string);
    gets (substring);
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
    gets (t0rt8OwiTmZ);
    len1 = strlen (string);
    len2 = strlen (substring);
    for (i = 0; i < len1; i++) {
        if (string[i] == substring[0]) {
            for (j = 1; j < len2; j++) {
                if (substring[j] == string[j + i])
                    a = a + 1;
                else
                    break;
            }
            if (a == len2 - 1) {
                {
                    k = 0;
                    while (k < len2) {
                        string[k + i] = t0rt8OwiTmZ[k];
                        k = k + 1;
                    };
                }
                break;
            };
        };
    }
    return 0;
}

