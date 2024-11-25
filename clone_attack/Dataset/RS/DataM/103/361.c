int main () {
    char s [(1732 - 732)];
    char ss [(1980 - 980)];
    int i;
    int HYT1RVaAwZ;
    int hwYB1M;
    int c [1000];
    getchar ();
    getchar ();
    HYT1RVaAwZ = (238 - 238);
    scanf ("%s", s);
    {
        i = 979 - 979;
        while (s[i] != '\0') {
            if ('a' <= s[i] && 'z' >= s[i])
                s[i] = s[i] - (731 - 699);
            if ('A' <= s[i] && s[i] <= 'Z')
                s[i] = s[i];
            i++;
        };
    }
    ss[(919 - 919)] = s[(607 - 607)];
    {
        i = 705 - 705;
        while (s[i] != '\0') {
            if (s[i] == ss[HYT1RVaAwZ])
                c[HYT1RVaAwZ]++;
            else {
                HYT1RVaAwZ++;
                ss[HYT1RVaAwZ] = s[i];
                c[HYT1RVaAwZ]++;
            }
            i++;
        };
    }
    {
        i = 0;
        while (i <= HYT1RVaAwZ) {
            printf ("(%c,%d)", ss[i], c[i]);
            i++;
        };
    };
}

