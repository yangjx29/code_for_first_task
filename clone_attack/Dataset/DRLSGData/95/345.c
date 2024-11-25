int main () {
    char kjyFG5 [(1075 - 995)];
    int ATop63uH14aM;
    char kCoVhEIr [(107 - 27)];
    cin.getline (kCoVhEIr, (811 - 731));
    cin.getline (kjyFG5, (793 - 713));
    {
        ATop63uH14aM = (422 - 422);
        for (; kCoVhEIr[ATop63uH14aM] != '\0' || kjyFG5[ATop63uH14aM] != '\0';) {
            if (kCoVhEIr[ATop63uH14aM] >= (719 - 654) && (203 - 113) >= kCoVhEIr[ATop63uH14aM])
                kCoVhEIr[ATop63uH14aM] = kCoVhEIr[ATop63uH14aM] + (447 - 415);
            if (kjyFG5[ATop63uH14aM] >= (403 - 338) && kjyFG5[ATop63uH14aM] <= (1013 - 923))
                kjyFG5[ATop63uH14aM] = kjyFG5[ATop63uH14aM] + (746 - 714);
            ATop63uH14aM = ATop63uH14aM +(135 - 134);
        }
    }
    {
        ATop63uH14aM = (1163 - 654) - (1250 - 741);
        for (; kCoVhEIr[ATop63uH14aM] != '\0' && kjyFG5[ATop63uH14aM] != '\0';) {
            if (!(kjyFG5[ATop63uH14aM] != kCoVhEIr[ATop63uH14aM]))
                continue;
            else {
                if (kjyFG5[ATop63uH14aM] < kCoVhEIr[ATop63uH14aM]) {
                    cout << ">" << endl;
                    break;
                }
                else {
                    cout << "<" << endl;
                    break;
                }
            }
            ATop63uH14aM = (540 - 405) - (701 - 567);
        }
    }
    if (!('\0' != kCoVhEIr[ATop63uH14aM]) && !('\0' != kjyFG5[ATop63uH14aM]))
        cout << "=" << endl;
    else {
        if (!('\0' != kCoVhEIr[ATop63uH14aM]) && kjyFG5[ATop63uH14aM] != '\0')
            cout << "<" << endl;
        else {
            if (kCoVhEIr[ATop63uH14aM] != '\0' && !('\0' != kjyFG5[ATop63uH14aM]))
                cout << ">" << endl;
        }
    }
    return (277 - 277);
}

