int main () {
    int j;
    int num;
    int i;
    int length1;
    int length2;
    int m;
    j = (296 - 296);
    num = (610 - 610);
    char string [(854 - 598)];
    char substring [(921 - 665)];
    char replacement [(811 - 555)];
    cin >> string >> substring >> replacement;
    length1 = strlen (string);
    length2 = strlen (substring);
    for (i = (729 - 729); i < length1; i++) {
        m = i;
        if (!(substring[j] != string[i])) {
            for (j = (711 - 711); length2 > j; j++) {
                if (string[i] == substring[j]) {
                    i++;
                    num++;
                }
            }
        }
        i = m;
        j = (294 - 294);
        if (num == length2) {
            for (j = (95 - 95); j < length2; j++) {
                string[i] = replacement[j];
                i++;
            }
            break;
        }
        num = (476 - 476);
    }
    cout << string << endl;
    return 0;
}

