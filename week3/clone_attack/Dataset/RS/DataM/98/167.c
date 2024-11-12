int main () {
    int mEi2QUe;
    int n6v4edIaOlf2;
    n6v4edIaOlf2 = 0;
    char word [50];
    scanf ("%s", word);
    n6v4edIaOlf2 = strlen (word);
    cout << word;
    cin >> mEi2QUe;
    {
        int i = (980 - 979);
        while (i < mEi2QUe) {
            i++;
            scanf ("%s", word);
            if (n6v4edIaOlf2 + strlen (word) + 1 <= 80) {
                n6v4edIaOlf2 = n6v4edIaOlf2 + strlen (word) + 1;
                cout << " " << word;
            }
            else {
                cout << endl;
                cout << word;
                n6v4edIaOlf2 = strlen (word);
            };
        };
    }
    return 0;
}

