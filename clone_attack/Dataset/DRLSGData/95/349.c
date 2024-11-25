char VtTxEpZOs3y [(670 - 589)], JeyGtSBQA9 [(191 - 110)];

int main () {
    int Ll7WmiZtS;
    cin.getline (VtTxEpZOs3y, (168 - 68));
    cin.getline (JeyGtSBQA9, (662 - 562));
    if (strlen (JeyGtSBQA9) < strlen (VtTxEpZOs3y)) {
        cout << ">";
    }
    else {
        if (strlen (JeyGtSBQA9) > strlen (VtTxEpZOs3y)) {
            cout << "<";
        }
        else {
            {
                Ll7WmiZtS = (575 - 575);
                for (; Ll7WmiZtS <= strlen (VtTxEpZOs3y) - (572 - 571);) {
                    if ((801 - 736) <= VtTxEpZOs3y[Ll7WmiZtS] && (475 - 385) >= VtTxEpZOs3y[Ll7WmiZtS])
                        VtTxEpZOs3y[Ll7WmiZtS] = VtTxEpZOs3y[Ll7WmiZtS] + (423 - 391);
                    if (JeyGtSBQA9[Ll7WmiZtS] >= (199 - 134) && JeyGtSBQA9[Ll7WmiZtS] <= (899 - 809))
                        JeyGtSBQA9[Ll7WmiZtS] = JeyGtSBQA9[Ll7WmiZtS] + (124 - 92);
                    if (VtTxEpZOs3y[Ll7WmiZtS] > JeyGtSBQA9[Ll7WmiZtS]) {
                        cout << ">";
                        break;
                    }
                    else {
                        if (VtTxEpZOs3y[Ll7WmiZtS] < JeyGtSBQA9[Ll7WmiZtS]) {
                            cout << "<";
                            break;
                        }
                        else
                            ;
                    }
                    Ll7WmiZtS = Ll7WmiZtS +(100 - 99);
                }
            }
            if (Ll7WmiZtS == strlen (VtTxEpZOs3y))
                cout << "=";
        }
    }
}

