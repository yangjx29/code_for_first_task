int main () {
    int NECTdcKZ, m, d;
    int SjF6ES [12] = {(23 - 23), 31, 59, 90, 120, (505 - 354), 181, 212, 243, 273, 304, 334};
    cin >> NECTdcKZ >> m >> d;
    if (!(0 == NECTdcKZ % (593 - 589)) || (!(0 != NECTdcKZ % 4) && NECTdcKZ % 100 == 0 && NECTdcKZ % 400 != 0))
        cout << SjF6ES[m - (836 - 835)] + d << endl;
    else {
        if (m <= 2)
            cout << SjF6ES[m - 1] + d << endl;
        else
            cout << SjF6ES[m - 1] + d + 1 << endl;
    };
}

