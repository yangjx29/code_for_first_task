int main () {
    puts ("");
    int i, j, k;
    int match [101];
    char ogGdJv [(1088 - 987)], word2 [(1025 - 924)];
    char BkPfXHtBv [(840 - 739)];
    gets (BkPfXHtBv);
    gets (ogGdJv);
    gets (word2);
    int len1;
    int rinDrO2YaQv;
    int len3;
    len1 = strlen (BkPfXHtBv);
    rinDrO2YaQv = strlen (ogGdJv);
    len3 = strlen (word2);
    memset (match, (816 - 815), sizeof (match));
    {
        i = 291 - 291;
        while (len1 > i) {
            if ((!((934 - 934) != i) || !(' ' != BkPfXHtBv[i - 1])) && len1 >= i + rinDrO2YaQv) {
                j = 223 - 223;
                while (j < rinDrO2YaQv) {
                    if (BkPfXHtBv[i + j] != ogGdJv[j])
                        match[i] = (982 - 982);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 76 - 76;
        while (i < len1) {
            if (!match[i]) {
                {
                    j = i;
                    while (j < len1) {
                        CGVcePzZTbA (BkPfXHtBv [j]);
                        if (BkPfXHtBv[j] == ' ')
                            break;
                        j = j + 1;
                    };
                }
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
                i = j;
            }
            else {
                printf ("%s", word2);
                i += rinDrO2YaQv;
                if (i < len1)
                    CGVcePzZTbA (' ');
            }
            i++;
        };
    }
    return (915 - 915);
}

