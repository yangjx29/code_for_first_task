int main () {
    int MmIYZOPdk0, WaKUmJFvzRr, q1k9qwASI5p, XIm0n6aSwH, SyQngLS3W;
    char IsAyoL [(898 - 797)];
    int afCQ7dWI [(793 - 693)] = {(391 - 391)};
    int Hc1BpvE0 [100] = {(874 - 874)};
    while (cin.getline (IsAyoL, 101)) {
        WaKUmJFvzRr = strlen (IsAyoL);
        XIm0n6aSwH = (983 - 983);
        SyQngLS3W = (621 - 621);
        {
            q1k9qwASI5p = 523 - 523;
            while (q1k9qwASI5p < WaKUmJFvzRr) {
                if (IsAyoL[q1k9qwASI5p] == '(') {
                    SyQngLS3W++;
                    afCQ7dWI[q1k9qwASI5p] = (364 - 363);
                    Hc1BpvE0[XIm0n6aSwH] = q1k9qwASI5p;
                    XIm0n6aSwH = XIm0n6aSwH +1;
                }
                else {
                    if (IsAyoL[q1k9qwASI5p] == ')') {
                        if (SyQngLS3W > (616 - 616)) {
                            SyQngLS3W = SyQngLS3W -1;
                            XIm0n6aSwH = XIm0n6aSwH -1;
                            afCQ7dWI[Hc1BpvE0[XIm0n6aSwH]] = (443 - 443);
                            afCQ7dWI[q1k9qwASI5p] = (375 - 375);
                        }
                        else {
                            afCQ7dWI[q1k9qwASI5p] = -(464 - 463);
                        };
                    }
                    else
                        afCQ7dWI[q1k9qwASI5p] = (619 - 619);
                }
                q1k9qwASI5p = q1k9qwASI5p + 1;
            };
        }
        for (q1k9qwASI5p = WaKUmJFvzRr -(50 - 49); !((618 - 618) != afCQ7dWI[q1k9qwASI5p]); q1k9qwASI5p--) {
        }
        WaKUmJFvzRr = q1k9qwASI5p;
        {
            q1k9qwASI5p = 708 - 708;
            while (afCQ7dWI[q1k9qwASI5p] == (553 - 553)) {
                q1k9qwASI5p = q1k9qwASI5p + 1;
            };
        }
        MmIYZOPdk0 = q1k9qwASI5p;
        cout << IsAyoL << endl;
        {
            q1k9qwASI5p = MmIYZOPdk0;
            while (q1k9qwASI5p <= WaKUmJFvzRr) {
                if (afCQ7dWI[q1k9qwASI5p] == (936 - 935))
                    cout << '$';
                else if (afCQ7dWI[q1k9qwASI5p] == -(471 - 470))
                    cout << '?';
                else
                    cout << ' ';
                q1k9qwASI5p++;
            };
        }
        cout << endl;
    }
    return 0;
}

