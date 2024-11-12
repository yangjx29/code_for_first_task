int main () {
    char word [(698 - 658)];
    char lAB4aX1i [80];
    int RHuLZSrd, Z52KQeN3, m4RobsLBESP = (188 - 188), lC0JWu, c39tkvVKyzE, sum = (389 - 389);
    cin >> RHuLZSrd;
    for (Z52KQeN3 = (647 - 646); Z52KQeN3 <= RHuLZSrd; Z52KQeN3 = Z52KQeN3 +1) {
        cin >> word;
        sum = sum + strlen (word);
        if ((Z52KQeN3 != RHuLZSrd) && (80 >= sum)) {
            sum = sum + 1;
            {
                lC0JWu = 0;
                while (strlen (word) > lC0JWu) {
                    lAB4aX1i[m4RobsLBESP] = word[lC0JWu];
                    m4RobsLBESP = m4RobsLBESP + 1;
                    lC0JWu = lC0JWu + 1;
                };
            }
            lAB4aX1i[m4RobsLBESP] = ' ';
            m4RobsLBESP = m4RobsLBESP + 1;
        }
        else if (sum > 80) {
            for (c39tkvVKyzE = 0; c39tkvVKyzE < m4RobsLBESP - 1; c39tkvVKyzE = c39tkvVKyzE + 1)
                cout << lAB4aX1i[c39tkvVKyzE];
            cout << endl;
            memset (lAB4aX1i, 0, sizeof (lAB4aX1i));
            for (m4RobsLBESP = 0, lC0JWu = 0; lC0JWu < strlen (word); lC0JWu = lC0JWu + 1, m4RobsLBESP = m4RobsLBESP + 1)
                lAB4aX1i[m4RobsLBESP] = word[lC0JWu];
            sum = strlen (word) + 1;
            lAB4aX1i[m4RobsLBESP] = ' ';
            m4RobsLBESP = m4RobsLBESP + 1;
        }
        else {
            for (lC0JWu = 0; lC0JWu < strlen (word); lC0JWu = lC0JWu + 1, m4RobsLBESP = m4RobsLBESP + 1)
                lAB4aX1i[m4RobsLBESP] = word[lC0JWu];
            for (c39tkvVKyzE = 0; c39tkvVKyzE <= m4RobsLBESP - 1; c39tkvVKyzE = c39tkvVKyzE + 1)
                cout << lAB4aX1i[c39tkvVKyzE];
            cout << endl;
        };
    }
    return 0;
}

