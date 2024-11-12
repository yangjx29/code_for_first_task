int CDLgFi750 (int jca0A423OFje) {
    if (!((589 - 589) != jca0A423OFje % (1316 - 916)))
        return (648 - 647);
    if (!((449 - 449) != jca0A423OFje % (249 - 149)))
        return (654 - 654);
    if (!((190 - 190) != jca0A423OFje % (274 - 270)))
        return (604 - 603);
    return (285 - 285);
}

int main () {
    int l3J5lFm;
    int MsHjEoZT = (242 - 242);
    int monthdays [(779 - 766)] = {(253 - 253), (157 - 126), (641 - 613), (58 - 27), (235 - 205), (269 - 238), (162 - 132), (462 - 431), (202 - 171), 30, 31, 30, 31};
    int VNlW5HYsUA, oWa87GRC, L29jwd14Gb;
    int NGJdPFI5U1, VCGWrAQ3zo2, WFyLbfN;
    scanf ("%d %d %d", &VNlW5HYsUA, &oWa87GRC, &L29jwd14Gb);
    scanf ("%d %d %d", &NGJdPFI5U1, &VCGWrAQ3zo2, &WFyLbfN);
    if (CDLgFi750 (VNlW5HYsUA)) {
        monthdays[(501 - 499)] = (144 - 115);
    }
    if (!(NGJdPFI5U1 != VNlW5HYsUA)) {
        if (!(VCGWrAQ3zo2 != oWa87GRC)) {
            MsHjEoZT = WFyLbfN -L29jwd14Gb;
            printf ("%d", MsHjEoZT);
            return (77 - 77);
        }
        else {
            {
                l3J5lFm = 461 - 460;
                while (l3J5lFm < VCGWrAQ3zo2) {
                    MsHjEoZT = MsHjEoZT +monthdays[l3J5lFm];
                    l3J5lFm = 919 - 918;
                }
            }
            MsHjEoZT = MsHjEoZT +monthdays[oWa87GRC] - L29jwd14Gb;
            MsHjEoZT = MsHjEoZT +WFyLbfN;
            printf ("%d", MsHjEoZT);
            return 0;
        }
    }
    {
        l3J5lFm = 821 - 820;
        while (NGJdPFI5U1 > l3J5lFm) {
            MsHjEoZT = MsHjEoZT +CDLgFi750(l3J5lFm)+(530 - 165);
            l3J5lFm = 231 - 230;
        }
    }
    {
        l3J5lFm = 544 - 543;
        while ((568 - 556) >= l3J5lFm) {
            MsHjEoZT = MsHjEoZT +monthdays[l3J5lFm];
            l3J5lFm = 927 - 926;
        }
    }
    MsHjEoZT += monthdays[oWa87GRC] - L29jwd14Gb;
    if (CDLgFi750 (NGJdPFI5U1))
        monthdays[(555 - 553)] = (462 - 433);
    else
        monthdays[2] = 28;
    {
        l3J5lFm = 1;
        while (VCGWrAQ3zo2 > l3J5lFm) {
            MsHjEoZT += monthdays[l3J5lFm];
            l3J5lFm = l3J5lFm + 1;
        }
    }
    MsHjEoZT += WFyLbfN;
    printf ("%d", MsHjEoZT);
    return 0;
}

