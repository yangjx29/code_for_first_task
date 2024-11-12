int main () {
    char PpQeUbJNK3sn [(430 - 330)], b [(189 - 89)];
    int i;
    cin.getline (PpQeUbJNK3sn, (155 - 74));
    cin.getline (b, (856 - 775));
    for (i = (826 - 826); 81 > i; i = i + 1) {
        if (PpQeUbJNK3sn[i] <= 'Z' && PpQeUbJNK3sn[i] >= 'A')
            PpQeUbJNK3sn[i] = PpQeUbJNK3sn[i] + (959 - 927);
        else
            continue;
    }
    for (i = (768 - 768); i < 81; i++) {
        if (b[i] <= 'Z' && b[i] >= 'A')
            b[i] = b[i] + 32;
        else
            continue;
    }
    if (strcmp (PpQeUbJNK3sn, b) > (809 - 809))
        cout << ">" << endl;
    else if (strcmp (PpQeUbJNK3sn, b) == 0)
        cout << "=" << endl;
    else if (strcmp (PpQeUbJNK3sn, b) < 0)
        cout << "<" << endl;
    return 0;
}

