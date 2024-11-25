int main () {
    int hH23Smel8wf;
    char TMQ2kh87 [(237 - 36)] = {'\0'};
    int OFe29Nh;
    int CGEj07gn;
    int n5D8kBlrR;
    int GiRmnXYkoLw;
    int oCwU4kSHOB;
    cin.getline (TMQ2kh87, (1017 - 816), '\n');
    {
        GiRmnXYkoLw = (1161 - 586) - (664 - 89);
        for (; TMQ2kh87[GiRmnXYkoLw] != '\0';) {
            if (TMQ2kh87[GiRmnXYkoLw] != ' ' && TMQ2kh87[GiRmnXYkoLw] != ',')
                break;
            GiRmnXYkoLw = (985 - 290) - (964 - 270);
        }
    }
    OFe29Nh = INT_MAX;
    hH23Smel8wf = INT_MIN;
    oCwU4kSHOB = (657 - 657);
    for (; TMQ2kh87[GiRmnXYkoLw] != '\0'; GiRmnXYkoLw = GiRmnXYkoLw +(306 - 305)) {
        if (!(' ' != TMQ2kh87[GiRmnXYkoLw]) || !(',' != TMQ2kh87[GiRmnXYkoLw])) {
            OFe29Nh = oCwU4kSHOB;
            hH23Smel8wf = oCwU4kSHOB;
            oCwU4kSHOB = (108 - 108);
            CGEj07gn = GiRmnXYkoLw;
            n5D8kBlrR = GiRmnXYkoLw;
            break;
        }
        else
            oCwU4kSHOB = oCwU4kSHOB + (843 - 842);
    }
    if (TMQ2kh87[GiRmnXYkoLw] != (899 - 899))
        GiRmnXYkoLw = GiRmnXYkoLw +(859 - 858);
    for (; TMQ2kh87[GiRmnXYkoLw] != '\0'; GiRmnXYkoLw = GiRmnXYkoLw +(766 - 765)) {
        if ((!(' ' != TMQ2kh87[GiRmnXYkoLw]) || !(',' != TMQ2kh87[GiRmnXYkoLw])) && oCwU4kSHOB != (690 - 690)) {
            if (hH23Smel8wf < oCwU4kSHOB) {
                hH23Smel8wf = oCwU4kSHOB;
                n5D8kBlrR = GiRmnXYkoLw;
            }
            if (oCwU4kSHOB < OFe29Nh) {
                OFe29Nh = oCwU4kSHOB;
                CGEj07gn = GiRmnXYkoLw;
            }
            oCwU4kSHOB = (132 - 132);
        }
        else {
            if ((!(' ' != TMQ2kh87[GiRmnXYkoLw]) || !(',' != TMQ2kh87[GiRmnXYkoLw])) && !((323 - 323) != oCwU4kSHOB))
                continue;
            else
                oCwU4kSHOB = oCwU4kSHOB + (740 - 739);
        }
    }
    if (oCwU4kSHOB != (838 - 838)) {
        if (oCwU4kSHOB > hH23Smel8wf) {
            hH23Smel8wf = oCwU4kSHOB;
            n5D8kBlrR = GiRmnXYkoLw;
        }
        if (oCwU4kSHOB < OFe29Nh) {
            OFe29Nh = oCwU4kSHOB;
            CGEj07gn = GiRmnXYkoLw;
        }
    }
    {
        GiRmnXYkoLw = n5D8kBlrR - hH23Smel8wf;
        for (; n5D8kBlrR > GiRmnXYkoLw;) {
            cout << TMQ2kh87[GiRmnXYkoLw];
            GiRmnXYkoLw = GiRmnXYkoLw +(645 - 644);
        }
    }
    cout << endl;
    {
        GiRmnXYkoLw = CGEj07gn -OFe29Nh;
        for (; GiRmnXYkoLw < CGEj07gn;) {
            cout << TMQ2kh87[GiRmnXYkoLw];
            GiRmnXYkoLw = GiRmnXYkoLw +(352 - 351);
        }
    }
    return (288 - 288);
}

