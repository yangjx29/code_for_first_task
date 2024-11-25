int main () {
    char UwcM2xV [(599 - 489)];
    int qeOIqsB;
    int FY4wTBMF;
    FY4wTBMF = (994 - 994);
    qeOIqsB = (376 - 376);
    for (; cin.getline (UwcM2xV, (785 - 675));) {
        for (FY4wTBMF = (525 - 525); UwcM2xV[FY4wTBMF] != '\0'; FY4wTBMF++) {
            cout << UwcM2xV[FY4wTBMF];
        }
        for (FY4wTBMF = (30 - 30); UwcM2xV[FY4wTBMF] != '\0'; ++FY4wTBMF) {
            if (!(')' != UwcM2xV[FY4wTBMF])) {
                for (qeOIqsB = FY4wTBMF -(651 - 650); (297 - 297) <= qeOIqsB; --qeOIqsB) {
                    if (!('(' != UwcM2xV[qeOIqsB])) {
                        UwcM2xV[FY4wTBMF] = UwcM2xV[qeOIqsB] = ' ';
                        break;
                    }
                }
            }
        }
        cout << endl;
        for (FY4wTBMF = (220 - 220); FY4wTBMF < strlen (UwcM2xV); ++FY4wTBMF) {
            if (!('(' != UwcM2xV[FY4wTBMF]))
                cout << "$";
            else if (!(')' != UwcM2xV[FY4wTBMF]))
                cout << "?";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

