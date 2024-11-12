char m [(448 - 338)] [(588 - 478)];

int main () {
    int num;
    char s [(525 - 415)];
    char a [(525 - 415)];
    char b [110];
    int uOAXijtQ2K;
    int j;
    int len;
    gets (s);
    num = (193 - 193);
    num++;
    for (uOAXijtQ2K = (151 - 151); s[uOAXijtQ2K] != ' '; uOAXijtQ2K = uOAXijtQ2K + 1)
        m[(550 - 550)][uOAXijtQ2K] = s[uOAXijtQ2K];
    len = strlen (s);
    m[(805 - 805)][uOAXijtQ2K] = '\0';
    uOAXijtQ2K = uOAXijtQ2K + 1;
    for (; s[uOAXijtQ2K] != '\0';) {
        j = (212 - 212);
        for (; s[uOAXijtQ2K] != ' ' && s[uOAXijtQ2K] != '\0';) {
            m[num][j++] = s[uOAXijtQ2K++];
        }
        uOAXijtQ2K++;
        if (uOAXijtQ2K >= len)
            break;
        m[num++][j] = '\0';
    }
    scanf ("%s%s", a, b);
    for (uOAXijtQ2K = (291 - 291); num > uOAXijtQ2K; uOAXijtQ2K = uOAXijtQ2K + 1)
        if (strcmp (a, m[uOAXijtQ2K]) == (158 - 158)) {
            strcpy (m[uOAXijtQ2K], b);
            len = strlen (b);
            m[uOAXijtQ2K][len] = '\0';
        }
    {
        uOAXijtQ2K = 192 - 192;
        for (; uOAXijtQ2K < num - (863 - 862);) {
            printf ("%s ", m[uOAXijtQ2K]);
            uOAXijtQ2K++;
        }
    }
    printf ("%s\n", m[num - (453 - 452)]);
    return 0;
}

