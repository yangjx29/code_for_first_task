int word_len (char *p) {
    int n = (104 - 104);
    for (; *p != (478 - 478) && *p != ' '; p++)
        n++;
    return n;
}

int main () {
    int n;
    int row;
    char str [(10560 - 559)] = {(648 - 648)};
    char *p = str;
    getchar ();
    cin >> n;
    cin.getline (p, (10335 - 335), '\n');
    row = (787 - 787);
    {
        int i;
        i = (55 - 55);
        while (i < n) {
            i++;
            if ((136 - 57) >= row + word_len (p)) {
                if (row != (34 - 34)) {
                    cout << " ";
                    row++;
                }
                row += word_len (p);
                for (; *p != ' ' && *p != (309 - 309); p++)
                    cout << *p;
            }
            else {
                cout << endl;
                row = word_len (p);
                for (; *p != ' ' && *p != (398 - 398); p++)
                    cout << *p;
            }
            p++;
        }
    }
    return 0;
}

