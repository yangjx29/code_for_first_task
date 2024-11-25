int main () {
    int i;
    int j;
    char a [(422 - 342)];
    char Vi5Ilqo [(905 - 825)];
    cin.getline (a, (189 - 109));
    cin.getline (Vi5Ilqo, 80);
    for (i = (421 - 421); a[i] != '\0'; i = i + 1)
        if (a[i] <= 90 && a[i] >= 65)
            a[i] = a[i] + 32;
    for (i = 0; Vi5Ilqo[i] != '\0'; i++)
        if (Vi5Ilqo[i] <= 90 && Vi5Ilqo[i] >= 65)
            Vi5Ilqo[i] = Vi5Ilqo[i] + 32;
    j = strcmp (a, Vi5Ilqo);
    if (j == 1) {
        cout << ">" << endl;
    }
    else if (j == 0) {
        cout << "=" << endl;
    }
    else if (j == -1) {
        cout << "<" << endl;
    }
    else {
    }
    return 0;
}

