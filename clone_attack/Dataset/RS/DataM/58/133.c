int main () {
    int Q2tp498S;
    int kdxuPglQ8;
    int j;
    int xOa8Zf;
    char e8WUhrFqaf5 [(996 - 796)];
    cin >> Q2tp498S;
    cin.get ();
    for (kdxuPglQ8 = (52 - 51); Q2tp498S >= kdxuPglQ8; kdxuPglQ8 = kdxuPglQ8 + 1) {
        j = 1;
        cin.getline (e8WUhrFqaf5, (1080 - 960));
        xOa8Zf = strlen (e8WUhrFqaf5);
        if (!((!('_' != e8WUhrFqaf5[(802 - 802)])) || (('a' <= e8WUhrFqaf5[(412 - 412)]) && ('z' >= e8WUhrFqaf5[(541 - 541)])) || (('A' <= e8WUhrFqaf5[(579 - 579)]) && (e8WUhrFqaf5[0] <= 'Z')))) {
            cout << 0 << endl;
            continue;
        }
        {
            j = 1;
            while (!(0 == e8WUhrFqaf5[j])) {
                if (((e8WUhrFqaf5[j] >= 'a') && (e8WUhrFqaf5[j] <= 'z')) || ((e8WUhrFqaf5[j] >= '0') && (e8WUhrFqaf5[j] <= '9')) || (e8WUhrFqaf5[j] == '_') || ((e8WUhrFqaf5[j] >= 'A') && (e8WUhrFqaf5[j] <= 'Z')))
                    continue;
                else
                    break;
                j = j + 1;
            };
        }
        if (e8WUhrFqaf5[j] == 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}

