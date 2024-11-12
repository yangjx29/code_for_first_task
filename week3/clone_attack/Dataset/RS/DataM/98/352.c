int main () {
    int sum = 0, n, t47wFPxtZX;
    char word [41];
    cin >> n;
    t47wFPxtZX = n;
    n--;
    scanf ("%s", word);
    cout << word;
    sum = sum + strlen (word);
    for (; n = n - 1;) {
        scanf ("%s", word);
        if ((sum + strlen (word) + 1 <= 80) && (n != t47wFPxtZX)) {
            sum++;
            cout << ' ';
        }
        else {
            cout << '\n';
            sum = 0;
        }
        sum = sum + strlen (word);
        cout << word;
        memset (word, 0, sizeof (word));
    }
    return 0;
}

