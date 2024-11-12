int main () {
    char zgDTsNPG [1000];
    int i, j;
    gets (zgDTsNPG);
    {
        i = 0;
        while (zgDTsNPG[i] != '\0') {
            printf ("%c", zgDTsNPG[i]);
            if (zgDTsNPG[i] == ' ') {
                j = i + 1;
                while (zgDTsNPG[j] == ' ') {
                    j = j + 1;
                    i = i + 1;
                };
            }
            i++;
        };
    }
    return 0;
}

