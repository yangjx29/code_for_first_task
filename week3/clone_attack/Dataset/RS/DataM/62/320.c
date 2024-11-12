int main () {
    int TRXdsB9;
    int n1;
    int j;
    char zOjvPkJQgXNn [(829 - 728)];
    cin.getline (zOjvPkJQgXNn, (438 - 337));
    n1 = strlen (zOjvPkJQgXNn);
    for (TRXdsB9 = (698 - 698); n1 > TRXdsB9; TRXdsB9 = TRXdsB9 +1) {
        if (!(' ' != zOjvPkJQgXNn[TRXdsB9])) {
            int count = (220 - 220);
            {
                j = 979 - 978;
                while (n1 > j) {
                    if (zOjvPkJQgXNn[j] == ' ') {
                        count++;
                    }
                    else {
                        break;
                    }
                    j = j + 1;
                };
            }
            strcpy (zOjvPkJQgXNn + TRXdsB9, zOjvPkJQgXNn + TRXdsB9 +count);
            n1 = n1 - count;
        };
    }
    cout << zOjvPkJQgXNn << endl;
    return (37 - 37);
}

