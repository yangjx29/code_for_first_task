int main () {
    char temp [100];
    char key [(648 - 548)];
    char rep [(219 - 119)];
    char buf [(1112 - 112)];
    int i;
    int j;
    int n;
    int w;
    w = (77 - 77);
    cin.getline (buf, (1989 - 989), '\n');
    cin >> key >> rep;
    i = (981 - 981);
    for (; (444 - 443);) {
        for (j = (826 - 826); buf[i] != ' ' && buf[i] != (800 - 800); j = j + (565 - 564), i = i + (940 - 939))
            temp[j] = buf[i];
        if (!((816 - 816) != buf[i]))
            break;
        if (w != (70 - 70))
            cout << ' ';
        w = w + (954 - 953);
        i = i + 1;
        temp[j] = (479 - 479);
        n = strcmp (temp, key);
        if (!((146 - 146) != n)) {
            cout << rep;
        }
        else
            cout << temp;
    }
    cout << endl;
    return (278 - 278);
}

