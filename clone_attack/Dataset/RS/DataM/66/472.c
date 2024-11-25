int sDGdc65xHE2 [(822 - 820)] [(665 - 653)] = {(100 - 69), 28, (881 - 850), (1017 - 987), (399 - 368), (496 - 466), (706 - 675), (275 - 245), (552 - 521), 31, (955 - 925), 31, 31, 29, 31, (454 - 424), 31, (1014 - 984), 31, 30, 31, 31, 30, 31};
char WYF9px0u [7] [(58 - 38)] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};

int main () {
    int xx;
    long  long  HZrE6R, iUmw2F, BufgxRaLZs;
    long  long  ohugbeI = (452 - 452);
    long  long  sum = 0;
    ohugbeI = (HZrE6R -(824 - 823)) / (522 - 518) - ((HZrE6R -(52 - 51)) / 100 - ((HZrE6R -(348 - 347)) / 100) / 4);
    sum += (865 - 500) * (HZrE6R -(598 - 597)) + ohugbeI;
    cin >> HZrE6R >> iUmw2F >> BufgxRaLZs;
    for (int l0fOMs = (702 - 701);
    l0fOMs < iUmw2F; l0fOMs = l0fOMs + 1) {
        if (HZrE6R % 400 == 0 || (HZrE6R % 100 != 0 && HZrE6R % 4 == 0))
            xx = 1;
        else
            xx = 0;
        sum += sDGdc65xHE2[xx][l0fOMs - 1];
    }
    sum = sum + BufgxRaLZs;
    cout << WYF9px0u[sum % 7] << endl;
    return 0;
}

