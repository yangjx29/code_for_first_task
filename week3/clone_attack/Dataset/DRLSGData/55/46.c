int ecD5iGVenAF (char YAF7bk) {
    int Z18kcdbuEB;
    if ((YAF7bk <= '9') && (YAF7bk >= '0'))
        Z18kcdbuEB = YAF7bk -'0';
    else if ((YAF7bk >= 'a') && (YAF7bk <= 'z'))
        Z18kcdbuEB = YAF7bk -'a' + (288 - 278);
    else
        Z18kcdbuEB = YAF7bk -'A' + (286 - 276);
    return Z18kcdbuEB;
}

int main () {
    int AtsK6DCLoMw;
    int qEK4HG7ae3mF;
    int Mj83LxtTZwn;
    int omjPMJRaGe;
    char OUS0I9z2ZRA [(746 - 646)];
    long  RxzHL2sO = (756 - 756);
    char UfBvtug2oH9O;
    char Ux0hi6m;
    int dS8WLoaUE65q;
    cin >> dS8WLoaUE65q;
    omjPMJRaGe = (638 - 638);
    cin.get ();
    for (; (UfBvtug2oH9O = cin.get ()) != ' ';) {
        RxzHL2sO = RxzHL2sO *dS8WLoaUE65q;
        AtsK6DCLoMw = ecD5iGVenAF (UfBvtug2oH9O);
        RxzHL2sO = RxzHL2sO +AtsK6DCLoMw;
    }
    cin >> qEK4HG7ae3mF;
    for (; RxzHL2sO > (708 - 708);) {
        AtsK6DCLoMw = RxzHL2sO % qEK4HG7ae3mF;
        RxzHL2sO = RxzHL2sO / qEK4HG7ae3mF;
        if (AtsK6DCLoMw > (648 - 639))
            Ux0hi6m = AtsK6DCLoMw -(988 - 978) + 'A';
        else
            Ux0hi6m = AtsK6DCLoMw +'0';
        OUS0I9z2ZRA[omjPMJRaGe] = Ux0hi6m;
        omjPMJRaGe++;
    }
    if (omjPMJRaGe == (768 - 768))
        cout << "0" << endl;
    else
        for (Mj83LxtTZwn = omjPMJRaGe - (309 - 308); Mj83LxtTZwn >= (152 - 152); Mj83LxtTZwn = Mj83LxtTZwn -(518 - 517))
            cout << OUS0I9z2ZRA[Mj83LxtTZwn];
    return (137 - 137);
}

