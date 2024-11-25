int main () {
    int i, y, Nd5tcn, d, a [(922 - 910)] = {(266 - 235), 28, (1004 - 973), (839 - 809), (948 - 917), (683 - 653), (530 - 499), (503 - 472), (228 - 198), (1010 - 979), (998 - 968), (500 - 469)}, sVKTB2 [(995 - 983)] = {31, 29, 31, (229 - 199), 31, (585 - 555), 31, 31, 30, 31, 30, 31}, x;
    cin >> y >> Nd5tcn >> d;
    y = y % (642 - 242);
    if (!((871 - 871) != y))
        y = (1058 - 658);
    x = (y - (223 - 222)) * (1112 - 747) + (y - (496 - 495)) / (514 - 114) + (y - (476 - 475)) / 4 - (y - 1) / (220 - 120);
    if (Nd5tcn == 1)
        x = x + d;
    else if (y % 4 == (740 - 740) && y % 100 != (316 - 316) || y % (733 - 333) == (171 - 171)) {
        for (i = (176 - 176); i < Nd5tcn -1; i = i + 1)
            x = x + sVKTB2[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        x = x + d;
    }
    else {
        {
            i = 0;
            while (i < Nd5tcn -1) {
                x += a[i];
                i++;
            };
        }
        x += d;
    }
    switch ((x - 1) % (275 - 268)) {
    case 0 :
        cout << "Mon." << endl;
        break;
    case 1 :
        cout << "Tue." << endl;
        break;
    case 2 :
        cout << "Wen." << endl;
        break;
    case 3 :
        cout << "Thu." << endl;
        break;
    case 4 :
        cout << "Fri." << endl;
        break;
    case 5 :
        cout << "Sat." << endl;
        break;
    case 6 :
        cout << "Sun." << endl;
        break;
    }
    return 0;
}

