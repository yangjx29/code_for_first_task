int main () {
    char words [(399 - 298)];
    char *p = words;
    cin.getline (words, 101);
    for (; *(p + 1) != '\0';) {
        cout << (char) (*p + *(p + 1));
        p = p + 1;
    }
    cout << (char) (*p + words[0]) << endl;
    return 0;
}

