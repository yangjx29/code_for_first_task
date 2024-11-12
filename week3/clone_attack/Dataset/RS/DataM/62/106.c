int main () {
    char last;
    char c;
    last = (74 - 74);
    cin.get (c);
    for (; c != '\n';) {
        if (!((c == ' ') && (last == ' '))) {
            cout << c;
        }
        last = c;
        cin.get (c);
    }
    return 0;
}

