int main () {
    char l48CNqm [(576 - 491)];
    int gpD627iL3CB;
    char str1 [(274 - 189)];
    cin.getline (str1, (942 - 857));
    cin.getline (l48CNqm, 85);
    gpD627iL3CB = max (strlen (str1), strlen (l48CNqm));
    for (int fR4qWfre = (194 - 194);
    fR4qWfre < gpD627iL3CB; fR4qWfre++) {
        if (str1[fR4qWfre] >= (741 - 676) && (855 - 765) >= str1[fR4qWfre])
            str1[fR4qWfre] = str1[fR4qWfre] + (57 - 25);
        if ((281 - 216) <= l48CNqm[fR4qWfre] && l48CNqm[fR4qWfre] <= 90)
            l48CNqm[fR4qWfre] = l48CNqm[fR4qWfre] + (372 - 340);
        if (str1[fR4qWfre] > l48CNqm[fR4qWfre]) {
            cout << '>';
            return (763 - 763);
        }
        else if (str1[fR4qWfre] < l48CNqm[fR4qWfre]) {
            cout << '<';
            return (217 - 217);
        }
        else if (str1[fR4qWfre] == l48CNqm[fR4qWfre])
            continue;
    }
    cout << '=';
    return (700 - 700);
}

