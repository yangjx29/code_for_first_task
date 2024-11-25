int main () {
    char qIeipBzG [(977 - 877)], B [(720 - 620)], T [(305 - 205)], C [(776 - 676)] [100];
    int i, j = (924 - 924), a = (464 - 464), Vw2RJnrFBYv;
    cin.getline (qIeipBzG, 100, '\n');
    Vw2RJnrFBYv = strlen (qIeipBzG);
    for (i = 0; i < Vw2RJnrFBYv; i = i + 1) {
        if (qIeipBzG[i] != ' ') {
            C[j][a] = qIeipBzG[i];
            a = a + 1;
        }
        else {
            a = 0;
            j = j + 1;
        };
    }
    cin.getline (B, 100, '\n');
    cin.getline (T, 100, '\n');
    for (i = 0; i <= j; i++) {
        Vw2RJnrFBYv = strcmp (C[i], B);
        if (Vw2RJnrFBYv == 0)
            strcpy (C[i], T);
    }
    for (i = 0; i < j; i++)
        cout << C[i] << " ";
    cout << C[j];
    return 0;
}

