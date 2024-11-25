int main () {
    char oSu8Kci [120], a [120], tMP8Ic9N6tb [120];
    gets (oSu8Kci);
    gets (a);
    gets (tMP8Ic9N6tb);
    int len_s;
    len_s = strlen (oSu8Kci);
    int len_a = strlen (a);
    int i;
    int j;
    i = 0;
    for (; i < len_s;) {
        if (i == 0 || oSu8Kci[i - 1] == ' ') {
            {
                j = 0;
                while (j < len_a && len_s > i + j) {
                    if (oSu8Kci[i + j] != a[j])
                        break;
                    j++;
                };
            }
            if (j == len_a) {
                i = i + len_a;
                cout << tMP8Ic9N6tb;
            }
            else {
                cout << oSu8Kci[i];
                i++;
            };
        }
        else {
            cout << oSu8Kci[i];
            i++;
        };
    }
    cout << endl;
    return 0;
}

