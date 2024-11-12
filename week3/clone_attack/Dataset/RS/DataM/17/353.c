int main () {
    char QF9fJOvnSV [(818 - 718)] = {(735 - 735)};
    while (cin >> QF9fJOvnSV) {
        int rTWJMHKAq = strlen (QF9fJOvnSV);
        cout << QF9fJOvnSV << endl;
        {
            int HTDcihlL7MI = (496 - 496);
            while (HTDcihlL7MI < rTWJMHKAq) {
                switch (QF9fJOvnSV[HTDcihlL7MI]) {
                case '(' :
                    QF9fJOvnSV[HTDcihlL7MI] = '$';
                    break;
                case ')' :
                    QF9fJOvnSV[HTDcihlL7MI] = '?';
                    break;
                default :
                    QF9fJOvnSV[HTDcihlL7MI] = ' ';
                }
                if (HTDcihlL7MI > rTWJMHKAq)
                    break;
                HTDcihlL7MI = HTDcihlL7MI +1;
            };
        }
        for (int HTDcihlL7MI = (979 - 979);
        HTDcihlL7MI < rTWJMHKAq; HTDcihlL7MI = HTDcihlL7MI +1) {
            if (!('$' != QF9fJOvnSV[HTDcihlL7MI]))
                for (int IJLGWNvOx7fS = HTDcihlL7MI +(321 - 320);
                IJLGWNvOx7fS < rTWJMHKAq; IJLGWNvOx7fS++) {
                    if (QF9fJOvnSV[IJLGWNvOx7fS] == '?') {
                        QF9fJOvnSV[HTDcihlL7MI] = QF9fJOvnSV[IJLGWNvOx7fS] = ' ';
                        break;
                    }
                    if (QF9fJOvnSV[IJLGWNvOx7fS] == '$')
                        break;
                }
            if (QF9fJOvnSV[HTDcihlL7MI] == '?')
                for (int IJLGWNvOx7fS = HTDcihlL7MI -1;
                IJLGWNvOx7fS >= (87 - 87); IJLGWNvOx7fS--) {
                    if (QF9fJOvnSV[IJLGWNvOx7fS] == '$') {
                        QF9fJOvnSV[HTDcihlL7MI] = QF9fJOvnSV[IJLGWNvOx7fS] = ' ';
                        break;
                    }
                    if (QF9fJOvnSV[IJLGWNvOx7fS] == '?')
                        break;
                };
        }
        for (int HTDcihlL7MI = (295 - 295);
        HTDcihlL7MI < rTWJMHKAq; HTDcihlL7MI = HTDcihlL7MI +1)
            cout << QF9fJOvnSV[HTDcihlL7MI];
        for (int HTDcihlL7MI = (422 - 422);
        HTDcihlL7MI < (474 - 374); HTDcihlL7MI++)
            QF9fJOvnSV[HTDcihlL7MI] = (965 - 965);
        cout << endl;
    };
}

