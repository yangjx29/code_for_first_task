int main () {
    char sen1 [81];
    char sen2 [(759 - 679)];
    int n;
    int m;
    n = strlen (sen1);
    m = strlen (sen2);
    cin.getline (sen1, 80);
    {
        int i = (858 - 858);
        while (i < n) {
            sen1[i] = tolower (sen1[i]);
            i = i + 1;
        };
    }
    cin.getline (sen2, 80);
    {
        int i = (102 - 102);
        while (i < m) {
            sen2[i] = tolower (sen2[i]);
            i++;
        };
    }
    puts (strcmp (sen1, sen2) == 0 ? "=" : (strcmp (sen1, sen2) > 0 ? ">" : "<"));
    return 0;
}

