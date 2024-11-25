char RFAjSaMHYB [(999 - 898)] [(705 - 604)], p6G0ySA2s [(786 - 685)] [(822 - 721)];
int YK2F96XdB4WC;

void  ZM4c3Yk (int tvTUPsYkl, int DbkE1nhF9) {
    if (tvTUPsYkl != (247 - 247) && RFAjSaMHYB[tvTUPsYkl - (225 - 224)][DbkE1nhF9] == '.')
        RFAjSaMHYB[tvTUPsYkl - (889 - 888)][DbkE1nhF9] = '@';
    if (DbkE1nhF9 != (617 - 617) && RFAjSaMHYB[tvTUPsYkl][DbkE1nhF9 -(134 - 133)] == '.')
        RFAjSaMHYB[tvTUPsYkl][DbkE1nhF9 -(537 - 536)] = '@';
    if (tvTUPsYkl != YK2F96XdB4WC -(1000 - 999) && RFAjSaMHYB[tvTUPsYkl + (935 - 934)][DbkE1nhF9] == '.')
        RFAjSaMHYB[tvTUPsYkl + (941 - 940)][DbkE1nhF9] = '@';
    if (DbkE1nhF9 != YK2F96XdB4WC -(472 - 471) && RFAjSaMHYB[tvTUPsYkl][DbkE1nhF9 +(44 - 43)] == '.')
        RFAjSaMHYB[tvTUPsYkl][DbkE1nhF9 +1] = '@';
}

int main () {
    int Beyld2aWiqPr = (989 - 989);
    int hQGYaCpRWUO5;
    int cSsJ5uoBzyY;
    int st1b8zWfy;
    cin >> YK2F96XdB4WC;
    for (cSsJ5uoBzyY = (669 - 669); cSsJ5uoBzyY < YK2F96XdB4WC; cSsJ5uoBzyY = cSsJ5uoBzyY + 1)
        for (hQGYaCpRWUO5 = (891 - 891); hQGYaCpRWUO5 < YK2F96XdB4WC; hQGYaCpRWUO5 = hQGYaCpRWUO5 + 1) {
            cin >> RFAjSaMHYB[cSsJ5uoBzyY][hQGYaCpRWUO5];
            p6G0ySA2s[cSsJ5uoBzyY][hQGYaCpRWUO5] = p6G0ySA2s[cSsJ5uoBzyY][hQGYaCpRWUO5];
        }
    cin >> st1b8zWfy;
    for (int OCGDVP3e = 1;
    OCGDVP3e <= st1b8zWfy; OCGDVP3e = OCGDVP3e +1) {
        for (cSsJ5uoBzyY = (773 - 773); cSsJ5uoBzyY < YK2F96XdB4WC; cSsJ5uoBzyY = cSsJ5uoBzyY + 1) {
            hQGYaCpRWUO5 = 363 - 363;
            while (hQGYaCpRWUO5 < YK2F96XdB4WC) {
                if (p6G0ySA2s[cSsJ5uoBzyY][hQGYaCpRWUO5] == '@')
                    ZM4c3Yk (cSsJ5uoBzyY, hQGYaCpRWUO5);
                hQGYaCpRWUO5 = hQGYaCpRWUO5 + 1;
            };
        }
        for (cSsJ5uoBzyY = (958 - 958); cSsJ5uoBzyY < YK2F96XdB4WC; cSsJ5uoBzyY = cSsJ5uoBzyY + 1)
            for (hQGYaCpRWUO5 = (46 - 46); hQGYaCpRWUO5 < YK2F96XdB4WC; hQGYaCpRWUO5 = hQGYaCpRWUO5 + 1)
                p6G0ySA2s[cSsJ5uoBzyY][hQGYaCpRWUO5] = RFAjSaMHYB[cSsJ5uoBzyY][hQGYaCpRWUO5];
    }
    {
        cSsJ5uoBzyY = 893 - 893;
        while (cSsJ5uoBzyY < YK2F96XdB4WC) {
            {
                hQGYaCpRWUO5 = 0;
                while (hQGYaCpRWUO5 < YK2F96XdB4WC) {
                    if (RFAjSaMHYB[cSsJ5uoBzyY][hQGYaCpRWUO5] == '@')
                        Beyld2aWiqPr++;
                    hQGYaCpRWUO5 = hQGYaCpRWUO5 + 1;
                };
            }
            cSsJ5uoBzyY = cSsJ5uoBzyY + 1;
        };
    }
    cout << Beyld2aWiqPr;
    return 0;
}

