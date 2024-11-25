int main () {
    int r8XHBtjRZ;
    char jYp6Pa [(607 - 527)];
    char yOax4C [80];
    cin.getline (jYp6Pa, 80);
    cin.getline (yOax4C, 80);
    for (r8XHBtjRZ = (950 - 950); strlen (jYp6Pa) > r8XHBtjRZ; r8XHBtjRZ = r8XHBtjRZ + 1) {
        if (97 > jYp6Pa[r8XHBtjRZ] && 65 <= jYp6Pa[r8XHBtjRZ])
            jYp6Pa[r8XHBtjRZ] += (963 - 931);
        if (97 > yOax4C[r8XHBtjRZ] && 65 <= jYp6Pa[r8XHBtjRZ])
            yOax4C[r8XHBtjRZ] += 32;
    }
    if (strcmp (jYp6Pa, yOax4C) == (705 - 705))
        cout << '=' << endl;
    else {
        if (strcmp (jYp6Pa, yOax4C) > 0)
            cout << '>' << endl;
        else
            cout << '<' << endl;
    }
    return 0;
}

