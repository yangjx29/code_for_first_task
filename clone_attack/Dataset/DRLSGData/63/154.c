int main () {
    int vzdKnAHi4Pj;
    int y1;
    int TEVhA3CkJIy;
    int FvFzCoZ7hD;
    int xQJLmk6vTlO3;
    int jaGJ7NDLVQ;
    int LKiVyBH4ZsL;
    int CoKDaAS0s [(183 - 82)] [(927 - 826)], QN6Oldwe5DT [(539 - 438)] [(117 - 16)], gIaZO0ec [(862 - 761)] [(145 - 44)];
    int AEP8fN5;
    cin >> TEVhA3CkJIy >> y1;
    {
        jaGJ7NDLVQ = (775 - 305) - (653 - 184);
        while (jaGJ7NDLVQ <= TEVhA3CkJIy) {
            for (xQJLmk6vTlO3 = (471 - 470); xQJLmk6vTlO3 <= y1; xQJLmk6vTlO3++)
                cin >> CoKDaAS0s[jaGJ7NDLVQ][xQJLmk6vTlO3];
            jaGJ7NDLVQ++;
        }
    }
    cin >> vzdKnAHi4Pj >> AEP8fN5;
    for (jaGJ7NDLVQ = (658 - 657); vzdKnAHi4Pj >= jaGJ7NDLVQ; jaGJ7NDLVQ++) {
        xQJLmk6vTlO3 = (653 - 40) - (1314 - 702);
        while (AEP8fN5 >= xQJLmk6vTlO3) {
            cin >> QN6Oldwe5DT[jaGJ7NDLVQ][xQJLmk6vTlO3];
            xQJLmk6vTlO3++;
        }
    }
    LKiVyBH4ZsL = (758 - 758);
    {
        jaGJ7NDLVQ = (1085 - 410) - (1518 - 844);
        while (jaGJ7NDLVQ <= TEVhA3CkJIy) {
            {
                xQJLmk6vTlO3 = (1605 - 863) - (1436 - 695);
                while (xQJLmk6vTlO3 <= AEP8fN5) {
                    {
                        FvFzCoZ7hD = (645 - 220) - (956 - 532);
                        while (FvFzCoZ7hD <= vzdKnAHi4Pj) {
                            LKiVyBH4ZsL = LKiVyBH4ZsL +CoKDaAS0s[jaGJ7NDLVQ][FvFzCoZ7hD] * QN6Oldwe5DT[FvFzCoZ7hD][xQJLmk6vTlO3];
                            FvFzCoZ7hD++;
                        }
                    }
                    gIaZO0ec[jaGJ7NDLVQ][xQJLmk6vTlO3] = LKiVyBH4ZsL;
                    xQJLmk6vTlO3++;
                    LKiVyBH4ZsL = (532 - 532);
                }
            }
            jaGJ7NDLVQ++;
        }
    }
    for (jaGJ7NDLVQ = (86 - 85); jaGJ7NDLVQ <= TEVhA3CkJIy; jaGJ7NDLVQ++)
        for (xQJLmk6vTlO3 = (699 - 698); xQJLmk6vTlO3 <= AEP8fN5; xQJLmk6vTlO3++) {
            if (xQJLmk6vTlO3 != AEP8fN5)
                cout << gIaZO0ec[jaGJ7NDLVQ][xQJLmk6vTlO3] << " ";
            if (xQJLmk6vTlO3 == AEP8fN5)
                cout << gIaZO0ec[jaGJ7NDLVQ][xQJLmk6vTlO3] << endl;
        }
    return (123 - 123);
}

