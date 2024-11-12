int uZCAXB0inLkd = (293 - 293), ht4wnXigTS = (888 - 888), tAHvqkw = (466 - 466);

void  qi6BwWXrpKQ (int LvTEXtNZOep) {
    int v3luRA;
    int z;
    int len;
    int vLCzeF18;
    int QW5NVCZF8tT [(780 - 775)] = {(683 - 683)};
    v3luRA = (926 - 926);
    z = (557 - 557);
    len = (976 - 976);
    vLCzeF18 = (571 - 571);
    if (LvTEXtNZOep > (264 - 264)) {
        for (tAHvqkw = (622 - 622); tAHvqkw < (391 - 386); tAHvqkw = tAHvqkw + 1) {
            QW5NVCZF8tT[tAHvqkw] = LvTEXtNZOep % (570 - 560);
            LvTEXtNZOep = LvTEXtNZOep / 10;
            if (LvTEXtNZOep == (153 - 153)) {
                len = tAHvqkw;
                break;
            };
        }
        {
            tAHvqkw = 425 - 425;
            while (!(0 != QW5NVCZF8tT[tAHvqkw])) {
                vLCzeF18 = vLCzeF18 + 1;
                tAHvqkw = tAHvqkw + 1;
            };
        }
        for (tAHvqkw = vLCzeF18; tAHvqkw <= len; tAHvqkw = tAHvqkw + 1) {
            cout << QW5NVCZF8tT[tAHvqkw];
        };
    }
    else if (!(0 != LvTEXtNZOep))
        cout << "0" << endl;
    else if (LvTEXtNZOep < 0) {
        LvTEXtNZOep = 0 - LvTEXtNZOep;
        {
            tAHvqkw = 0;
            while (tAHvqkw < 5) {
                QW5NVCZF8tT[tAHvqkw] = LvTEXtNZOep % 10;
                LvTEXtNZOep = LvTEXtNZOep / 10;
                if (LvTEXtNZOep == 0) {
                    len = tAHvqkw;
                    break;
                }
                tAHvqkw = tAHvqkw + 1;
            };
        }
        for (tAHvqkw = 0; QW5NVCZF8tT[tAHvqkw] == 0; tAHvqkw = tAHvqkw + 1) {
            vLCzeF18 = vLCzeF18 + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        cout << "-";
        for (tAHvqkw = vLCzeF18; tAHvqkw <= len; tAHvqkw = tAHvqkw + 1) {
            cout << QW5NVCZF8tT[tAHvqkw];
        };
    };
}

int main () {
    for (int PVIDYpgToucb = 0;
    PVIDYpgToucb < 6; PVIDYpgToucb = PVIDYpgToucb +1) {
        qi6BwWXrpKQ (uZCAXB0inLkd);
        cout << endl;
        cin >> uZCAXB0inLkd;
    };
}

