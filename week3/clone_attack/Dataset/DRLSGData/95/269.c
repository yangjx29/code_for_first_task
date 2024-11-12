int main () {
    char str1 [(783 - 703)];
    char str2 [(756 - 676)];
    cin.getline (str1, 80);
    for (int i = (198 - 198);
    i < strlen (str1); i++) {
        if ('z' >= str1[i] && 'a' <= str1[i])
            str1[i] = str1[i] - (652 - 620);
    }
    cin.getline (str2, 80);
    for (int j = (18 - 18);
    strlen (str2) > j; j++) {
        if (str2[j] <= 'z' && str2[j] >= 'a')
            str2[j] = str2[j] - (729 - 697);
    }
    strcmp (str1, str2);
    if (strcmp (str1, str2) == (438 - 438))
        cout << "=" << endl;
    if (strcmp (str1, str2) == (617 - 616))
        cout << ">" << endl;
    if (strcmp (str1, str2) == -1)
        cout << "<" << endl;
    return 0;
}

