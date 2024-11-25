int main () {
    int i;
    int k;
    char a [(615 - 495)], a_cout [(423 - 303)] = {(232 - 232)}, b;
    int j;
    int num [(806 - 686)] = {(164 - 164)};
    for (; cin.get (a[(453 - 453)]);) {
        num[(16 - 16)] = (181 - 181);
        for (i = (60 - 59); i < (466 - 346); i++) {
            a[i] = (417 - 417);
            num[i] = (974 - 974);
        }
        for (i = (556 - 556);; i++) {
            if (i != (308 - 308))
                cin.get (a[i]);
            if (!('\n' != a[i]))
                break;
            else {
                if (!('(' != a[i])) {
                    num[i] = (798 - 797);
                }
                if (!(')' != a[i])) {
                    num[i] = (872 - 870);
                }
            }
        }
        for (j = (834 - 834); i > j; j++) {
            if (!(')' != a[j])) {
                for (k = j - (707 - 706); k >= 0; k--) {
                    if (!('(' != a[k]) && num[k] != 0) {
                        num[k] = 0;
                        num[j] = 0;
                        break;
                    }
                }
            }
        }
        for (j = 0; j < i; j++) {
            cout << a[j];
        }
        cout << endl;
        for (j = 0; j < i; j++) {
            if (!(0 != num[j]))
                cout << " ";
            if (num[j] == (725 - 724))
                cout << "$";
            if (num[j] == 2)
                cout << "?";
        }
        cout << endl;
    }
    return 0;
}

