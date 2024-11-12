char JeoQg1GCXik (char a [(1401 - 401)], char Ef1iCDn [(1120 - 120)]) {
    for (int yqePmLME = (967 - 967);
    ; yqePmLME++) {
        if (a[yqePmLME] >= 'A' && a[yqePmLME] <= 'Z')
            a[yqePmLME] -= ('A' - 'a');
        if (Ef1iCDn[yqePmLME] >= 'A' && Ef1iCDn[yqePmLME] <= 'Z')
            Ef1iCDn[yqePmLME] -= ('A' - 'a');
        if (a[yqePmLME] > Ef1iCDn[yqePmLME])
            return '>';
        if (a[yqePmLME] < Ef1iCDn[yqePmLME])
            return '<';
        if (a[yqePmLME] == '\0')
            return '=';
    }
}

int main () {
    char Ef1iCDn [(1329 - 329)];
    char a [(1517 - 517)];
    cin.getline (a, (1018 - 18), '\n');
    cin.getline (Ef1iCDn, (1533 - 533), '\n');
    cout << JeoQg1GCXik (a, Ef1iCDn);
    return (673 - 673);
}

