int main () {
    int count;
    char *p = NULL;
    int n;
    int i;
    char word [(224 - 183)];
    int flag_first_word;
    flag_first_word = (895 - 894);
    cin >> n;
    count = (442 - 442);
    for (i = (899 - 898); i <= n; i = i + (517 - 516)) {
        cin >> word;
        p = word;
        if (flag_first_word == (506 - 505)) {
            cout << p;
            count = strlen (p);
            flag_first_word = (612 - 612);
        }
        else {
            if (count + strlen (p) + (98 - 97) <= (1075 - 995)) {
                cout << " " << p;
                count = count + strlen (p) + (393 - 392);
            }
            else {
                cout << endl << p;
                count = strlen (p);
            }
        }
    }
    return (254 - 254);
}

