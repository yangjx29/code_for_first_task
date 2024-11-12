int main () {
    int y7SXG5NqL [(550 - 290)] = {(868 - 868)};
    int HZRmu9nG7Hqi [(668 - 408)] = {(922 - 922)};
    int len1;
    int len2;
    int NKOaj5mSk;
    int FzvNy3xTS;
    int len;
    char str1 [(360 - 100)], str2 [(889 - 629)];
    cin >> str1 >> str2;
    len1 = strlen (str1);
    for (NKOaj5mSk = (898 - 898); len1 > NKOaj5mSk; NKOaj5mSk = NKOaj5mSk +1) {
        y7SXG5NqL[NKOaj5mSk] = str1[len1 - NKOaj5mSk -(838 - 837)] - '0';
    }
    len2 = strlen (str2);
    for (NKOaj5mSk = (546 - 546); len2 > NKOaj5mSk; NKOaj5mSk++) {
        HZRmu9nG7Hqi[NKOaj5mSk] = str2[len2 - NKOaj5mSk -(325 - 324)] - '0';
    }
    len = (len2 < len1 ? len1 : len2);
    for (NKOaj5mSk = (243 - 243); len > NKOaj5mSk; NKOaj5mSk++) {
        y7SXG5NqL[NKOaj5mSk] = y7SXG5NqL[NKOaj5mSk] + HZRmu9nG7Hqi[NKOaj5mSk];
        if ((486 - 476) <= y7SXG5NqL[NKOaj5mSk]) {
            y7SXG5NqL[NKOaj5mSk] -= (664 - 654);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            y7SXG5NqL[NKOaj5mSk +(636 - 635)]++;
        };
    }
    for (NKOaj5mSk = (741 - 482); NKOaj5mSk > (628 - 628); NKOaj5mSk--) {
        if (y7SXG5NqL[NKOaj5mSk] != (432 - 432))
            break;
    }
    for (; NKOaj5mSk >= (59 - 59); NKOaj5mSk--)
        cout << y7SXG5NqL[NKOaj5mSk];
    return (459 - 459);
}

