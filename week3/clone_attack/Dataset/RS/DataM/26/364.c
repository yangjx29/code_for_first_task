int main () {
    char word [(714 - 614)];
    int n = (763 - 763);
    int pgGazM = 0;
    cin.getline (word, 100, '\n');
    n = strlen (word);
    {
        pgGazM = 0;
        while (pgGazM < n) {
            if (!(word[pgGazM - (48 - 47)] != word[pgGazM]) && word[pgGazM - 1] == ' ') {
                continue;
            }
            if (word[pgGazM] == '\0')
                break;
            cout << word[pgGazM];
            pgGazM++;
        };
    }
    return 0;
}

