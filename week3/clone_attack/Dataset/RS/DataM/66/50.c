int main () {
    long  long  yej8fUHN [(619 - 606)] = {(375 - 375), (536 - 505), (589 - 561), (45 - 14), (517 - 487), (588 - 557), 30, 31, 31, 30, 31, 30, 31};
    long  long  year, aKg2SMDWJ, day;
    long  long  zDA0MjV = (year / (1010 - 910)) % (721 - 717);
    char week [(134 - 127)] [(45 - 39)] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
    long  long  num = (870 - 870);
    long  long  EctgAD7KLeTM = (556 - 556);
    cin >> year >> aKg2SMDWJ >> day;
    num = year / 4 - (year / (386 - 286) - zDA0MjV) * (129 - 126) / 4 - zDA0MjV;
    if (!((988 - 988) != year % 4) && year % 100 != (257 - 257) || year % 400 == (446 - 446)) {
        yej8fUHN[2] = 29;
        num = num - 1;
    }
    EctgAD7KLeTM = EctgAD7KLeTM +num * 366 + (year - num - (152 - 151)) * 365;
    {
        int i = 1;
        while (i < aKg2SMDWJ) {
            EctgAD7KLeTM = EctgAD7KLeTM +yej8fUHN[i];
            i = i + 1;
        };
    }
    EctgAD7KLeTM = EctgAD7KLeTM +day;
    EctgAD7KLeTM = EctgAD7KLeTM % (975 - 968);
    cout << week[EctgAD7KLeTM] << endl;
    return 0;
}

