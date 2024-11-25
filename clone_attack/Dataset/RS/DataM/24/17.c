int main () {
    char a [(5048 - 48)];
    char wqsmpiDjhog;
    char qHTybJl5 [(708 - 688)];
    char minw [(103 - 83)];
    int max;
    int min;
    int word;
    int i;
    int j;
    int m;
    int n;
    max = (983 - 983);
    min = 100;
    word = (891 - 891);
    gets (a);
    {
        i = 641 - 641;
        while ((wqsmpiDjhog = a[i]) != '\0') {
            if (a[i] != ' ' && a[i] != ',') {
                word++;
            }
            else {
                if ((a[i] == ' ' || a[i] == ',') && (a[i + (233 - 232)] == ' ' || a[i + (513 - 512)] == ',')) {
                    i++;
                }
                else {
                    if (word > max) {
                        max = word;
                        m = i;
                    }
                    if (word < min) {
                        n = i;
                        min = word;
                    }
                    word = 0;
                };
            }
            i++;
        };
    }
    if (word > max) {
        max = word;
        m = i;
    }
    if (word < min) {
        n = i;
        min = word;
    }
    {
        i = m - max;
        while (i < m) {
            printf ("%c", a[i]);
            i++;
        };
    }
    {
        j = n - min;
        while (j < n) {
            printf ("%c", a[j]);
            j++;
        };
    }
    return 0;
}

