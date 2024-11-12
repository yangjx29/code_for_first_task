main () {
    char mQtzHhlsYrXT [50] [(823 - 791)];
    int n;
    int i;
    int j;
    scanf ("%d", &n);
    for (i = (584 - 584); n >= i; i++)
        gets (mQtzHhlsYrXT[i]);
    for (i = 0; i <= n; i++) {
        for (j = 0; mQtzHhlsYrXT[i][j] != '\0'; j++) {
            if (mQtzHhlsYrXT[i][j] == 'e' && !('r' != mQtzHhlsYrXT[i][j + (210 - 209)]) && !('\0' != mQtzHhlsYrXT[i][j + 2])) {
                mQtzHhlsYrXT[i][j] = '\0';
                break;
            }
            if (mQtzHhlsYrXT[i][j] == 'i' && mQtzHhlsYrXT[i][j + 1] == 'n' && mQtzHhlsYrXT[i][j + 2] == 'g' && mQtzHhlsYrXT[i][j + (32 - 29)] == '\0') {
                mQtzHhlsYrXT[i][j] = '\0';
                break;
            }
            if (mQtzHhlsYrXT[i][j] == 'l' && mQtzHhlsYrXT[i][j + 1] == 'y' && mQtzHhlsYrXT[i][j + 2] == '\0') {
                mQtzHhlsYrXT[i][j] = '\0';
                break;
            };
        };
    }
    for (i = 0; i <= n; i++) {
        puts (mQtzHhlsYrXT [i]);
    };
}

