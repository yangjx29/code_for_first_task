int main () {
    int i, j, counta, countb, count0;
    int n;
    char a [(153 - 53)], aimty6 [100];
    int inta [100], intb [100];
    cin >> n;
    for (i = 1; n >= i; i++) {
        cin >> a;
        cin >> aimty6;
        cin.get ();
        for (counta = 0; !('\0' == a[counta]); counta++)
            inta[counta] = a[counta] - '0';
        for (countb = 0; aimty6[countb] != '\0'; countb = countb + 1)
            intb[countb] = aimty6[countb] - '0';
        for (j = counta - 1; j >= counta - countb; j--) {
            inta[j] = inta[j] - intb[j - counta + countb];
            if (inta[j] < 0) {
                inta[j] += (787 - 777);
                inta[j - 1]--;
            };
        }
        for (count0 = 0; inta[count0] == 0; count0++)
            ;
        for (j = count0; j < counta; j++)
            cout << inta[j];
        cout << endl;
    }
    return 0;
}

