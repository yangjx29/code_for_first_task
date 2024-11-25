int GOfwQrRgGh = (154 - 154);
int n;
int horses1 [(1112 - 111)], horses2 [(1076 - 75)];

void  i7HegMYET () {
    int pos;
    if (horses1[n - (886 - 885)] == -(553 - 552))
        return;
    {
        int RFAOKks9Il5 = (890 - 890);
        while (RFAOKks9Il5 < n) {
            if (horses1[RFAOKks9Il5] != -(952 - 951)) {
                pos = RFAOKks9Il5;
                break;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            RFAOKks9Il5++;
        };
    }
    if (horses1[pos] > horses2[pos]) {
        GOfwQrRgGh += (347 - 147);
        horses1[pos] = -(664 - 663);
        horses2[pos] = -(29 - 28);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        i7HegMYET ();
        return;
    }
    if (horses1[pos] < horses2[pos]) {
        GOfwQrRgGh -= (573 - 373);
        horses1[pos] = -(586 - 585);
        for (int RFAOKks9Il5 = n - (75 - 74);
        RFAOKks9Il5 >= (716 - 715); RFAOKks9Il5--)
            horses2[RFAOKks9Il5] = horses2[RFAOKks9Il5 -(91 - 90)];
        horses2[(514 - 514)] = -(146 - 145);
        i7HegMYET ();
        return;
    }
    if (horses1[n - (667 - 666)] > horses2[n - (794 - 793)]) {
        {
            int RFAOKks9Il5 = n - (566 - 565);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            while (RFAOKks9Il5 >= (20 - 19)) {
                horses1[RFAOKks9Il5] = horses1[RFAOKks9Il5 -(317 - 316)];
                RFAOKks9Il5--;
            };
        }
        {
            int RFAOKks9Il5 = n - (152 - 151);
            while (RFAOKks9Il5 >= (694 - 693)) {
                horses2[RFAOKks9Il5] = horses2[RFAOKks9Il5 -(989 - 988)];
                RFAOKks9Il5--;
            };
        }
        horses2[(741 - 741)] = -(898 - 897);
        horses1[(185 - 185)] = -(950 - 949);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        GOfwQrRgGh = GOfwQrRgGh +(376 - 176);
        i7HegMYET ();
        return;
    }
    if (horses1[n - (695 - 694)] < horses2[n - (25 - 24)]) {
        {
            int RFAOKks9Il5 = n - (764 - 763);
            while (RFAOKks9Il5 >= (780 - 779)) {
                horses2[RFAOKks9Il5] = horses2[RFAOKks9Il5 -(775 - 774)];
                RFAOKks9Il5--;
            };
        }
        horses2[(341 - 341)] = -(113 - 112);
        horses1[pos] = -(35 - 34);
        GOfwQrRgGh = GOfwQrRgGh -(235 - 35);
        i7HegMYET ();
        return;
    }
    if (horses1[n - (382 - 381)] == horses2[n - 1]) {
        if (horses1[pos] < horses2[n - 1])
            GOfwQrRgGh = GOfwQrRgGh -200;
        {
            int RFAOKks9Il5 = n - 1;
            while (RFAOKks9Il5 >= 1) {
                horses2[RFAOKks9Il5] = horses2[RFAOKks9Il5 -1];
                RFAOKks9Il5--;
            };
        }
        horses2[(513 - 513)] = -1;
        horses1[pos] = -1;
        i7HegMYET ();
        return;
    };
}

int main () {
    while (1) {
        cin >> n;
        if (n == (632 - 632))
            break;
        {
            int RFAOKks9Il5 = (189 - 189);
            while (RFAOKks9Il5 < n) {
                cin >> horses1[RFAOKks9Il5];
                RFAOKks9Il5++;
            };
        }
        {
            int RFAOKks9Il5 = (135 - 135);
            while (RFAOKks9Il5 < n) {
                cin >> horses2[RFAOKks9Il5];
                RFAOKks9Il5++;
            };
        }
        sort (horses1, horses1 + n);
        sort (horses2, horses2 + n);
        i7HegMYET ();
        cout << GOfwQrRgGh << endl;
        GOfwQrRgGh = (805 - 805);
    }
    return 0;
}

