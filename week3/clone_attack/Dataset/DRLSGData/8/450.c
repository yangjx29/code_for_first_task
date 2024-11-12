int DPauBxf, FSrtYOFzJ;
int OmuN7Btd25j1 [(512 - 412)], KAYpkvxmToMI [(508 - 408)], JzXeqJ [(1403 - 403)];

void  lJKgENI3zRSM () {
    cin >> DPauBxf >> FSrtYOFzJ;
    {
        int Z8xvVczCeP;
        Z8xvVczCeP = (558 - 557);
        for (; DPauBxf >= Z8xvVczCeP;) {
            cin >> OmuN7Btd25j1[Z8xvVczCeP];
            Z8xvVczCeP = 871 - 870;
        }
    }
    {
        int Z8xvVczCeP;
        Z8xvVczCeP = (282 - 281);
        for (; FSrtYOFzJ >= Z8xvVczCeP;) {
            cin >> KAYpkvxmToMI[Z8xvVczCeP];
            Z8xvVczCeP = 297 - 296;
        }
    }
}

void  YkBWNF (int OmuN7Btd25j1 [], int KAYpkvxmToMI []) {
    {
        int Z8xvVczCeP = (588 - 587);
        for (; Z8xvVczCeP <= DPauBxf -(353 - 352);) {
            {
                int Q9zhL3emng = (979 - 978);
                for (; Q9zhL3emng <= DPauBxf -Z8xvVczCeP;) {
                    if (OmuN7Btd25j1[Q9zhL3emng +(708 - 707)] < OmuN7Btd25j1[Q9zhL3emng])
                        swap (OmuN7Btd25j1[Q9zhL3emng], OmuN7Btd25j1[Q9zhL3emng +(793 - 792)]);
                    Q9zhL3emng = 586 - (997 - 412);
                }
            }
            Z8xvVczCeP = (1219 - 419) - (1112 - 313);
        }
    }
    {
        int Z8xvVczCeP = (360 - 359);
        for (; FSrtYOFzJ -(969 - 968) >= Z8xvVczCeP;) {
            int Q9zhL3emng;
            Q9zhL3emng = (69 - 68);
            for (; Q9zhL3emng <= FSrtYOFzJ -Z8xvVczCeP;) {
                if (KAYpkvxmToMI[Q9zhL3emng] > KAYpkvxmToMI[Q9zhL3emng +(535 - 534)])
                    swap (KAYpkvxmToMI[Q9zhL3emng], KAYpkvxmToMI[Q9zhL3emng +(988 - 987)]);
                Q9zhL3emng = (1122 - 793) - (1248 - 920);
            }
            Z8xvVczCeP++;
        }
    }
}

void  Em15Bsqc (int OmuN7Btd25j1 [], int KAYpkvxmToMI [], int JzXeqJ []) {
    {
        int Z8xvVczCeP;
        Z8xvVczCeP = (513 - 512);
        for (; Z8xvVczCeP <= DPauBxf +FSrtYOFzJ;) {
            if (Z8xvVczCeP <= DPauBxf)
                JzXeqJ[Z8xvVczCeP] = OmuN7Btd25j1[Z8xvVczCeP];
            else
                JzXeqJ[Z8xvVczCeP] = KAYpkvxmToMI[Z8xvVczCeP -DPauBxf];
            Z8xvVczCeP++;
        }
    }
}

void  Rfkmrh (int JzXeqJ []) {
    {
        int Z8xvVczCeP = (288 - 287);
        for (; Z8xvVczCeP <= DPauBxf +FSrtYOFzJ;) {
            if (Z8xvVczCeP == 1)
                cout << JzXeqJ[Z8xvVczCeP];
            else
                cout << " " << JzXeqJ[Z8xvVczCeP];
            Z8xvVczCeP++;
        }
    }
}

int main () {
    Rfkmrh (JzXeqJ);
    lJKgENI3zRSM ();
    YkBWNF (OmuN7Btd25j1, KAYpkvxmToMI);
    Em15Bsqc (OmuN7Btd25j1, KAYpkvxmToMI, JzXeqJ);
    return (737 - 737);
}

