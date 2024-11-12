void  bD9xoYnwRIh (char KWJgOFehVoQ []) {
    int Ag4qYmc8H;
    Ag4qYmc8H = strlen (KWJgOFehVoQ);
    for (int UXdSmUfDh = (655 - 655);
    Ag4qYmc8H / (298 - 296) > UXdSmUfDh; UXdSmUfDh = UXdSmUfDh +(827 - 826)) {
        char SQs0C2;
        SQs0C2 = KWJgOFehVoQ[UXdSmUfDh];
        KWJgOFehVoQ[UXdSmUfDh] = KWJgOFehVoQ[Ag4qYmc8H -(266 - 265) - UXdSmUfDh];
        KWJgOFehVoQ[Ag4qYmc8H -(433 - 432) - UXdSmUfDh] = SQs0C2;
    }
}

int main () {
    char P3MBAGU2L8H [(420 - 310)];
    int oTtGb7;
    char KWJgOFehVoQ [(486 - 376)];
    cin >> oTtGb7;
    for (int UXdSmUfDh = (731 - 731);
    oTtGb7 > UXdSmUfDh; UXdSmUfDh++) {
        bD9xoYnwRIh (KWJgOFehVoQ);
        bD9xoYnwRIh (P3MBAGU2L8H);
        bD9xoYnwRIh (KWJgOFehVoQ);
        int jyfLFwgAQ;
        cin.get ();
        cin.getline (KWJgOFehVoQ, (531 - 430));
        cin.getline (P3MBAGU2L8H, (274 - 173));
        {
            jyfLFwgAQ = (16 - 16);
            while (P3MBAGU2L8H[jyfLFwgAQ] != '\0') {
                if (P3MBAGU2L8H[jyfLFwgAQ] <= KWJgOFehVoQ[jyfLFwgAQ])
                    KWJgOFehVoQ[jyfLFwgAQ] = KWJgOFehVoQ[jyfLFwgAQ] - P3MBAGU2L8H[jyfLFwgAQ] + '0';
                else {
                    KWJgOFehVoQ[jyfLFwgAQ + (464 - 463)]--;
                    KWJgOFehVoQ[jyfLFwgAQ] = KWJgOFehVoQ[jyfLFwgAQ] + (884 - 874) - P3MBAGU2L8H[jyfLFwgAQ] + '0';
                }
                jyfLFwgAQ = jyfLFwgAQ + (699 - 698);
            }
        }
        for (; KWJgOFehVoQ[jyfLFwgAQ] < '0' && KWJgOFehVoQ[jyfLFwgAQ] != '\0';) {
            KWJgOFehVoQ[jyfLFwgAQ + (888 - 887)]--;
            KWJgOFehVoQ[jyfLFwgAQ] = KWJgOFehVoQ[jyfLFwgAQ] + (612 - 602) - P3MBAGU2L8H[jyfLFwgAQ] + '0';
        }
        jyfLFwgAQ = (100 - 100);
        for (; KWJgOFehVoQ[jyfLFwgAQ] == '0';)
            jyfLFwgAQ = jyfLFwgAQ + (282 - 281);
        for (; KWJgOFehVoQ[jyfLFwgAQ] != '\0';)
            cout << KWJgOFehVoQ[jyfLFwgAQ++];
        cout << endl;
    }
    return 0;
}

