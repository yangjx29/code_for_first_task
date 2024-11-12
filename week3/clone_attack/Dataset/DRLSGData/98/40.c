int main () {
    int JRfr2Qb7;
    char BdKRqQI9r3 [999999];
    int zF19rR = strlen (BdKRqQI9r3);
    char *lHpLDN70vAkC = BdKRqQI9r3;
    cin >> JRfr2Qb7;
    while (lHpLDN70vAkC + (479 - 399) <= BdKRqQI9r3 +zF19rR - 1) {
        lHpLDN70vAkC = lHpLDN70vAkC + 80;
        if (*lHpLDN70vAkC == ' ')
            *lHpLDN70vAkC = '\n';
        else {
            while (*lHpLDN70vAkC != ' ')
                lHpLDN70vAkC--;
            *lHpLDN70vAkC = '\n';
        }
        lHpLDN70vAkC++;
    }
    cin.get ();
    cin.getline (BdKRqQI9r3, sizeof (BdKRqQI9r3));
    cout << BdKRqQI9r3;
    return 0;
}

