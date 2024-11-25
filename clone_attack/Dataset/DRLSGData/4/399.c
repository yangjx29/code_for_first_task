int main () {
    int mbvqpZDYaQ, KW3QJeAb;
    int H3PyhuU2ekWr [mbvqpZDYaQ + (696 - 695)] [KW3QJeAb +(733 - 732)];
    cin >> mbvqpZDYaQ >> KW3QJeAb;
    for (int DrHj8k = (232 - 231);
    DrHj8k <= mbvqpZDYaQ; DrHj8k = DrHj8k +1)
        for (int lyp5I38rNoc = (998 - 997);
        lyp5I38rNoc <= KW3QJeAb; lyp5I38rNoc = lyp5I38rNoc + 1)
            cin >> H3PyhuU2ekWr[DrHj8k][lyp5I38rNoc];
    if (mbvqpZDYaQ == (58 - 57))
        for (int DrHj8k = (941 - 940);
        DrHj8k <= KW3QJeAb; DrHj8k = DrHj8k +1)
            cout << H3PyhuU2ekWr[(728 - 727)][DrHj8k] << endl;
    else {
        if (KW3QJeAb == (919 - 918))
            for (int DrHj8k = (600 - 599);
            DrHj8k <= mbvqpZDYaQ; DrHj8k = DrHj8k +1)
                cout << H3PyhuU2ekWr[DrHj8k][(652 - 651)] << endl;
        else {
            if (mbvqpZDYaQ < KW3QJeAb) {
                for (int DrHj8k = (140 - 138);
                DrHj8k <= mbvqpZDYaQ; DrHj8k = DrHj8k +1)
                    for (int lyp5I38rNoc = (290 - 289);
                    lyp5I38rNoc < DrHj8k; lyp5I38rNoc = lyp5I38rNoc + 1)
                        cout << H3PyhuU2ekWr[lyp5I38rNoc][DrHj8k -lyp5I38rNoc] << endl;
                for (int DrHj8k = mbvqpZDYaQ + (45 - 44);
                DrHj8k <= KW3QJeAb +(135 - 134); DrHj8k = DrHj8k +1) {
                    int lyp5I38rNoc = DrHj8k -1;
                    while (lyp5I38rNoc >= DrHj8k -mbvqpZDYaQ) {
                        cout << H3PyhuU2ekWr[DrHj8k -lyp5I38rNoc][lyp5I38rNoc] << endl;
                        lyp5I38rNoc = lyp5I38rNoc - 1;
                    }
                }
                for (int DrHj8k = KW3QJeAb +2;
                DrHj8k <= KW3QJeAb +mbvqpZDYaQ; DrHj8k++)
                    for (int lyp5I38rNoc = KW3QJeAb;
                    DrHj8k -lyp5I38rNoc <= mbvqpZDYaQ; lyp5I38rNoc = lyp5I38rNoc - 1)
                        cout << H3PyhuU2ekWr[DrHj8k -lyp5I38rNoc][lyp5I38rNoc] << endl;
            }
            else {
                if (mbvqpZDYaQ >= KW3QJeAb) {
                    for (int DrHj8k = 2;
                    DrHj8k <= KW3QJeAb; DrHj8k++)
                        for (int lyp5I38rNoc = 1;
                        lyp5I38rNoc < DrHj8k; lyp5I38rNoc++)
                            cout << H3PyhuU2ekWr[lyp5I38rNoc][DrHj8k -lyp5I38rNoc] << endl;
                    for (int DrHj8k = KW3QJeAb +1;
                    DrHj8k <= mbvqpZDYaQ + 1; DrHj8k++)
                        for (int lyp5I38rNoc = KW3QJeAb;
                        lyp5I38rNoc >= 1; lyp5I38rNoc--)
                            cout << H3PyhuU2ekWr[DrHj8k -lyp5I38rNoc][lyp5I38rNoc] << endl;
                    {
                        int DrHj8k = mbvqpZDYaQ + 2;
                        while (DrHj8k <= mbvqpZDYaQ + KW3QJeAb) {
                            for (int lyp5I38rNoc = KW3QJeAb;
                            DrHj8k -lyp5I38rNoc <= mbvqpZDYaQ; lyp5I38rNoc--)
                                cout << H3PyhuU2ekWr[DrHj8k -lyp5I38rNoc][lyp5I38rNoc] << endl;
                            DrHj8k++;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

