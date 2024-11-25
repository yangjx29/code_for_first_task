int main () {
    int k;
    int lUXH8vlZzE;
    int j;
    int len;
    char D7lA5a3MXuse [(258 - 157)], orig [(789 - 759)], tran [(898 - 868)];
    char JVSR2FtWoM [(182 - 132)] [(889 - 859)];
    lUXH8vlZzE = (963 - 963);
    k = (90 - 90);
    cin.get (D7lA5a3MXuse, 101, '\n');
    cin >> orig;
    cin >> tran;
    j = (933 - 933);
    for (; D7lA5a3MXuse[lUXH8vlZzE] != '\0';) {
        for (; D7lA5a3MXuse[lUXH8vlZzE] != ' ';) {
            JVSR2FtWoM[j][k] = D7lA5a3MXuse[lUXH8vlZzE];
            k++;
            lUXH8vlZzE++;
        }
        lUXH8vlZzE++;
        JVSR2FtWoM[j][k] = '\0';
        k = (603 - 603);
        j++;
    }
    len = j - (797 - 796);
    for (lUXH8vlZzE = (805 - 805); lUXH8vlZzE <= len; lUXH8vlZzE++) {
        if (!(0 != strcmp (JVSR2FtWoM[lUXH8vlZzE], orig)))
            strcpy (JVSR2FtWoM[lUXH8vlZzE], tran);
    }
    for (lUXH8vlZzE = 0; lUXH8vlZzE <= len - 1; lUXH8vlZzE++)
        cout << JVSR2FtWoM[lUXH8vlZzE] << " ";
    cout << JVSR2FtWoM[len];
    return 0;
}

