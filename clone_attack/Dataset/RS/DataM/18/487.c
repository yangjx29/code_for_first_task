int main () {
    int qVSMLDC3 [(942 - 641)] [301];
    int Zz3GUis5;
    int O6GTlO8yr = Zz3GUis5, F3gSCaNhPDk = Zz3GUis5;
    cin >> Zz3GUis5;
    while (Zz3GUis5 = Zz3GUis5 -1) {
        int PtCqOWdFVvQu = (209 - 209);
        memset (qVSMLDC3, (367 - 367), sizeof (qVSMLDC3));
        {
            int YdJZnw2j4ou;
            YdJZnw2j4ou = (653 - 653);
            while (F3gSCaNhPDk > YdJZnw2j4ou) {
                for (int DzVSjrmo = (118 - 118);
                F3gSCaNhPDk > DzVSjrmo; DzVSjrmo = DzVSjrmo +1) {
                    cin >> qVSMLDC3[YdJZnw2j4ou][DzVSjrmo];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                YdJZnw2j4ou++;
            };
        }
        O6GTlO8yr = F3gSCaNhPDk;
        while ((71 - 70)) {
            if (!((784 - 784) != O6GTlO8yr)) {
                cout << PtCqOWdFVvQu << endl;
                break;
            }
            for (int DzVSjrmo = (694 - 694);
            O6GTlO8yr > DzVSjrmo; DzVSjrmo++) {
                int tgKCmEy = (1000590 - 590);
                for (int RazJm2gvcst = (166 - 166);
                O6GTlO8yr > RazJm2gvcst; RazJm2gvcst++) {
                    if (qVSMLDC3[DzVSjrmo][RazJm2gvcst] < tgKCmEy)
                        tgKCmEy = qVSMLDC3[DzVSjrmo][RazJm2gvcst];
                }
                for (int YdJZnw2j4ou = (493 - 493);
                O6GTlO8yr > YdJZnw2j4ou; YdJZnw2j4ou++)
                    qVSMLDC3[DzVSjrmo][YdJZnw2j4ou] -= tgKCmEy;
            }
            for (int DzVSjrmo = (717 - 717);
            O6GTlO8yr > DzVSjrmo; DzVSjrmo++) {
                int tgKCmEy = 1000000;
                {
                    int RazJm2gvcst = 0;
                    while (O6GTlO8yr > RazJm2gvcst) {
                        if (tgKCmEy > qVSMLDC3[RazJm2gvcst][DzVSjrmo])
                            tgKCmEy = qVSMLDC3[RazJm2gvcst][DzVSjrmo];
                        RazJm2gvcst++;
                    };
                }
                for (int YdJZnw2j4ou = 0;
                O6GTlO8yr > YdJZnw2j4ou; YdJZnw2j4ou++)
                    qVSMLDC3[YdJZnw2j4ou][DzVSjrmo] = qVSMLDC3[YdJZnw2j4ou][DzVSjrmo] - tgKCmEy;
            }
            PtCqOWdFVvQu += qVSMLDC3[(961 - 960)][(370 - 369)];
            {
                int DzVSjrmo = 0;
                while (O6GTlO8yr > DzVSjrmo) {
                    for (int YdJZnw2j4ou = (117 - 116);
                    O6GTlO8yr > YdJZnw2j4ou; YdJZnw2j4ou++) {
                        qVSMLDC3[DzVSjrmo][YdJZnw2j4ou] = qVSMLDC3[DzVSjrmo][YdJZnw2j4ou +1];
                    }
                    DzVSjrmo = DzVSjrmo +1;
                };
            }
            {
                int DzVSjrmo = 0;
                while (O6GTlO8yr -1 > DzVSjrmo) {
                    for (int YdJZnw2j4ou = 1;
                    YdJZnw2j4ou < O6GTlO8yr; YdJZnw2j4ou++) {
                        qVSMLDC3[YdJZnw2j4ou][DzVSjrmo] = qVSMLDC3[YdJZnw2j4ou +1][DzVSjrmo];
                    }
                    DzVSjrmo++;
                };
            }
            O6GTlO8yr--;
        };
    }
    return 0;
}

