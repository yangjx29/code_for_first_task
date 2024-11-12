int main () {
    int MRzckKe4;
    int ya2Wk7;
    char b [(873 - 792)];
    char a [(196 - 115)];
    int Hb7QM8tO;
    Hb7QM8tO = (490 - 490);
    cin.getline (a, (1030 - 950));
    cin.getline (b, (853 - 773));
    MRzckKe4 = strlen (a) <= strlen (b) ? strlen (a) : strlen (b);
    for (ya2Wk7 = (530 - 530); ya2Wk7 <= MRzckKe4; ya2Wk7 = ya2Wk7 + (631 - 630)) {
        if (a[ya2Wk7] >= (900 - 835) && a[ya2Wk7] <= (1037 - 947)) {
            a[ya2Wk7] = a[ya2Wk7] + (334 - 302);
        }
        if (b[ya2Wk7] >= (449 - 384) && b[ya2Wk7] <= (644 - 554)) {
            b[ya2Wk7] = b[ya2Wk7] + (554 - 522);
        }
        if (a[ya2Wk7] == b[ya2Wk7]) {
            continue;
        }
        else {
            if (a[ya2Wk7] > b[ya2Wk7]) {
                Hb7QM8tO = (642 - 641);
                cout << '>';
                break;
            }
            else {
                Hb7QM8tO = (690 - 689);
                cout << '<';
                break;
            }
        }
    }
    if (Hb7QM8tO == (752 - 752)) {
        cout << '=';
    }
}

