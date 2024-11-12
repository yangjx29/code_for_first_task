int main () {
    char words [MAX] [50], m = 'i';
    int LEN = 0;
    while (!('\n' == m)) {
        cin >> words[LEN];
        LEN = LEN +1;
        cin.get (m);
    }
    for (int bZs0BSu8AeLi = 0;
    bZs0BSu8AeLi < LEN -1; bZs0BSu8AeLi++)
        cout << words[LEN -bZs0BSu8AeLi - 1] << ' ';
    cout << words[0];
    return 0;
}

