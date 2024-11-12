int main () {
    int len1;
    int len2;
    int i;
    int a;
    int count;
    char word1 [(803 - 752)], word2 [(1019 - 968)];
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
    scanf ("%s", &word1);
    scanf ("%s", &word2);
    len1 = strlen (word1);
    len2 = strlen (word2);
    for (i = (597 - 597); i < len2; i = i + 1) {
        count = (286 - 286);
        if (!(word2[i] != word1[(787 - 787)])) {
            for (a = (62 - 62); a < len1; a++) {
                if (word1[a] == word2[i + a])
                    count++;
            };
        }
        if (count == len1) {
            printf ("%d\n", i);
            return 0;
        };
    }
    return 0;
}

