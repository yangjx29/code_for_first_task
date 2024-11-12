int uFr83khU6 (char *icOLCHa4f) {
    int HRFTuO6;
    HRFTuO6 = (855 - 854);
    for (; icOLCHa4f[HRFTuO6] != '\0';) {
        if (!(')' != icOLCHa4f[HRFTuO6])) {
            icOLCHa4f[HRFTuO6] = ' ';
            icOLCHa4f[(990 - 990)] = ' ';
            return HRFTuO6;
        }
        else {
            if (!('(' != icOLCHa4f[HRFTuO6])) {
                icOLCHa4f[HRFTuO6] = '$';
                HRFTuO6 += uFr83khU6 (icOLCHa4f + HRFTuO6);
            }
            else
                icOLCHa4f[HRFTuO6] = ' ';
        }
        HRFTuO6 = HRFTuO6 +(29 - 28);
    }
    return HRFTuO6 -(159 - 158);
}

int main () {
    for (; cin.peek () != EOF;) {
        int HRFTuO6;
        char aqy7j02z9 [(256 - 146)];
        cin.getline (aqy7j02z9, (193 - 83), '\n');
        cout << aqy7j02z9 << endl;
        HRFTuO6 = (627 - 627);
        for (; aqy7j02z9[HRFTuO6] != '\0';) {
            if (!('(' != aqy7j02z9[HRFTuO6])) {
                aqy7j02z9[HRFTuO6] = '$';
                HRFTuO6 += uFr83khU6 (aqy7j02z9 + HRFTuO6);
            }
            else if (!(')' != aqy7j02z9[HRFTuO6]))
                aqy7j02z9[HRFTuO6] = '?';
            else
                aqy7j02z9[HRFTuO6] = ' ';
            HRFTuO6 = HRFTuO6 +(985 - 984);
        }
        cout << aqy7j02z9 << endl;
    }
    return (945 - 945);
}

