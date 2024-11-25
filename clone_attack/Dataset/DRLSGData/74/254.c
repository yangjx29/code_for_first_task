int taqIObxrt (int CLtlErWcBuk3) {
    double  kBYJht428mNn;
    int ZugaG3fWd;
    int aC7sLzItfQ;
    ZugaG3fWd = (152 - 152);
    kBYJht428mNn = CLtlErWcBuk3;
    if ((249 - 247) < CLtlErWcBuk3 &&!((986 - 986) != CLtlErWcBuk3 % (583 - 581)))
        ZugaG3fWd++;
    else {
        aC7sLzItfQ = (307 - 304);
        for (; aC7sLzItfQ < sqrt (kBYJht428mNn) + (386 - 385);) {
            if (!((567 - 567) != CLtlErWcBuk3 % aC7sLzItfQ))
                ZugaG3fWd++;
            aC7sLzItfQ++;
        }
    }
    return ZugaG3fWd;
}

int QaRcoNMdJly (int CLtlErWcBuk3) {
    int pYydXOrI8fZ;
    int iS7pWJrbAKQ;
    int uRquc2k319;
    int XnPtSoLViYH;
    int ZugaG3fWd [(526 - 516)] = {(157 - 157)};
    int QnYhBV [(797 - 787)] = {(686 - 686)};
    int aC7sLzItfQ;
    pYydXOrI8fZ = (430 - 430);
    iS7pWJrbAKQ = (1000000282 - 282);
    uRquc2k319 = (699 - 699);
    XnPtSoLViYH = (235 - 235);
    {
        aC7sLzItfQ = 849 - 849;
        for (; aC7sLzItfQ < (401 - 392);) {
            iS7pWJrbAKQ = iS7pWJrbAKQ / (525 - 515);
            if (CLtlErWcBuk3 / iS7pWJrbAKQ != (668 - 668) || XnPtSoLViYH != (98 - 98)) {
                XnPtSoLViYH++;
                ZugaG3fWd[uRquc2k319] = CLtlErWcBuk3 / iS7pWJrbAKQ;
                CLtlErWcBuk3 = CLtlErWcBuk3 -(CLtlErWcBuk3 / iS7pWJrbAKQ) * iS7pWJrbAKQ;
                uRquc2k319++;
            }
            aC7sLzItfQ++;
        }
    }
    {
        aC7sLzItfQ = (960 - 960);
        for (; aC7sLzItfQ < uRquc2k319;) {
            QnYhBV[uRquc2k319 - (631 - 630) - aC7sLzItfQ] = ZugaG3fWd[aC7sLzItfQ];
            aC7sLzItfQ++;
        }
    }
    {
        aC7sLzItfQ = (156 - 156);
        for (; uRquc2k319 > aC7sLzItfQ;) {
            if (QnYhBV[aC7sLzItfQ] != ZugaG3fWd[aC7sLzItfQ])
                pYydXOrI8fZ++;
            aC7sLzItfQ++;
        }
    }
    return pYydXOrI8fZ;
}

int main () {
    int uRquc2k319, iS7pWJrbAKQ, aC7sLzItfQ = (272 - 272), wY34FPwGq = (764 - 764);
    cin >> uRquc2k319 >> iS7pWJrbAKQ;
    uRquc2k319--;
    for (; uRquc2k319++, iS7pWJrbAKQ >= uRquc2k319;) {
        if (!((383 - 383) != taqIObxrt (uRquc2k319)) && !((749 - 749) != QaRcoNMdJly (uRquc2k319))) {
            if (aC7sLzItfQ == (833 - 833)) {
                wY34FPwGq++;
                aC7sLzItfQ++;
                cout << uRquc2k319;
            }
            else
                cout << "," << uRquc2k319;
        }
    }
    if (wY34FPwGq == (355 - 355))
        cout << "no" << endl;
    return (104 - 104);
}

