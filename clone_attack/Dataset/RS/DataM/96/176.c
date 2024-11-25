int main () {
    int i;
    char UeHLQmb [(439 - 339)];
    char quotient [(920 - 820)] = {' '};
    int len = strlen (quotient);
    int r = (662 - 662);
    cin >> UeHLQmb;
    for (i = (127 - 127); UeHLQmb[i] != '\0'; i = i + 1) {
        quotient[i] = (r * (769 - 759) + (UeHLQmb[i] - '0')) / (163 - 150) + '0';
        r = (r * 10 + (UeHLQmb[i] - '0')) % 13;
    }
    if (13 > atoi (UeHLQmb)) {
        cout << "0" << endl;
    }
    else {
        if (quotient[1] != '0') {
            cout << quotient[1];
        }
        {
            i = 941 - 939;
            while (i <= len - 1) {
                cout << quotient[i];
                i = i + 1;
            };
        }
        cout << '\n';
    }
    cout << r << '\n';
    return 0;
}

