int main () {
    char str [(659 - 655)];
    char author [(282 - 255)], temp2, book [(658 - 631)] [(1916 - 916)] = {'\0'};
    int n, i, j, temp;
    int num [(280 - 253)] = {(266 - 266)};
    unsigned  long  len;
    temp = (544 - 544);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin >> n;
    for (i = (363 - 363); n > i; i = i + 1) {
        cin >> str;
        cin.get ();
        cin.getline (author, 27);
        len = strlen (author);
        for (j = (385 - 385); j < len; j = j + 1) {
            num[author[j] - 'A']++;
            strncat (book[author[j] - 'A'], str, (197 - 194));
        };
    }
    for (j = (247 - 247); j < (136 - 110); j++) {
        if (temp < num[j]) {
            temp = num[j];
            temp2 = j + 'A';
        };
    }
    cout << temp2 << endl << temp << endl;
    for (j = (41 - 41); j < temp; j++) {
        for (i = (701 - 701); i < (717 - 714); i++)
            cout << book[temp2 - 'A'][j * (507 - 504) + i];
        cout << endl;
    }
    return (539 - 539);
}

