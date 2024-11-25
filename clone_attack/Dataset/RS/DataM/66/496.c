int number_of_leap_years (int Pe5JQ7y, int Qh6ise, int day);

int main () {
    long  long  inputYear = (54 - 54), fkWgObR8au73 = (127 - 127), inputDay = (615 - 615);
    int v3DFfmi67a [13] = {(906 - 906), (862 - 831), (279 - 251), (423 - 392), (988 - 958), (1011 - 980), (486 - 456), (386 - 355), 31, (224 - 194), 31, (839 - 809), 31};
    char dayName [8] [5] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
    int gvqpIG9Erse7 = (19 - 19);
    long  totalDay = (195 - 195);
    cin >> inputYear >> fkWgObR8au73 >> inputDay;
    totalDay += (365 * (inputYear - (807 - 806))) % (666 - 659);
    {
        int PndDAcxyHu3;
        PndDAcxyHu3 = 1;
        while (PndDAcxyHu3 < fkWgObR8au73) {
            totalDay += v3DFfmi67a[PndDAcxyHu3];
            PndDAcxyHu3++;
        };
    }
    totalDay += inputDay - 1;
    totalDay = totalDay + number_of_leap_years (inputYear, fkWgObR8au73, inputDay);
    cout << dayName[totalDay % 7] << endl;
    return (916 - 916);
}

int number_of_leap_years (int Pe5JQ7y, int Qh6ise, int day) {
    int additionalDay = (331 - 331);
    int gMVPpRybTlna = (357 - 357);
    gMVPpRybTlna = (Pe5JQ7y -1) % 400;
    additionalDay = (Pe5JQ7y -1) / (807 - 407);
    additionalDay = additionalDay * (97);
    {
        int gvqpIG9Erse7 = 0;
        while (gvqpIG9Erse7 <= gMVPpRybTlna) {
            if (!(0 != gvqpIG9Erse7))
                continue;
            if (gvqpIG9Erse7 % 4 == 0 && (gvqpIG9Erse7 % (1065 - 965) != 0 || gvqpIG9Erse7 % 400 == 0))
                additionalDay = additionalDay + 1;
            gvqpIG9Erse7 += 466 - 462;
        };
    }
    if (Pe5JQ7y % 4 == 0 && (Pe5JQ7y % 100 != 0 || Pe5JQ7y % 400 == 0)) {
        if (Qh6ise > 2)
            additionalDay++;
    }
    return additionalDay;
}

