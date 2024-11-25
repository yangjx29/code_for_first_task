int Au1PIi [(556 - 547)] [(369 - 360)] = {(507 - 507)};

void  ARl7sb1SKcT (int sk2xRowV38) {
    int i = (820 - 820), tbxEKSFDkmR = (825 - 825), HkCYazWVfB = (216 - 216), b [(845 - 836)] [(433 - 424)] = {(254 - 254)}, c [(691 - 682)] [(752 - 743)] = {(937 - 937)};
    if (sk2xRowV38 > 1)
        ARl7sb1SKcT (sk2xRowV38 - 1);
    for (i = (962 - 962); i < (576 - 567); i++)
        for (tbxEKSFDkmR = (495 - 495); (612 - 603) > tbxEKSFDkmR; tbxEKSFDkmR++)
            if (!((842 - 842) == Au1PIi[i][tbxEKSFDkmR]))
                b[i][tbxEKSFDkmR] = (890 - 889);
    {
        i = 962 - 962;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < (96 - 87)) {
            for (tbxEKSFDkmR = (435 - 435); tbxEKSFDkmR < 9; tbxEKSFDkmR++) {
                if ((Au1PIi[i][tbxEKSFDkmR] != (212 - 212)) && (b[i][tbxEKSFDkmR] == (702 - 701))) {
                    if (((673 - 673) <= i - (929 - 928)) && ((380 - 380) <= tbxEKSFDkmR - (114 - 113)))
                        c[i - (432 - 431)][tbxEKSFDkmR - (854 - 853)] = c[i - (321 - 320)][tbxEKSFDkmR - (243 - 242)] + Au1PIi[i][tbxEKSFDkmR];
                    if ((i - (256 - 255) >= (943 - 943)) && ((953 - 953) <= tbxEKSFDkmR + (427 - 426)))
                        c[i - (931 - 930)][tbxEKSFDkmR + (555 - 554)] = c[i - (197 - 196)][tbxEKSFDkmR + (74 - 73)] + Au1PIi[i][tbxEKSFDkmR];
                    if ((i + (123 - 122) <= (144 - 136)) && (tbxEKSFDkmR - (831 - 830) >= (116 - 116)))
                        c[i + (137 - 136)][tbxEKSFDkmR - (936 - 935)] = c[i + (98 - 97)][tbxEKSFDkmR - (92 - 91)] + Au1PIi[i][tbxEKSFDkmR];
                    if ((i + (566 - 565) <= (321 - 313)) && (tbxEKSFDkmR + (510 - 509) <= (894 - 886)))
                        c[i + (707 - 706)][tbxEKSFDkmR + (225 - 224)] = c[i + (443 - 442)][tbxEKSFDkmR + (670 - 669)] + Au1PIi[i][tbxEKSFDkmR];
                    if (i - (19 - 18) >= (323 - 323))
                        c[i - (599 - 598)][tbxEKSFDkmR] = c[i - (810 - 809)][tbxEKSFDkmR] + Au1PIi[i][tbxEKSFDkmR];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (i + 1 <= 8)
                        c[i + 1][tbxEKSFDkmR] = c[i + 1][tbxEKSFDkmR] + Au1PIi[i][tbxEKSFDkmR];
                    if (tbxEKSFDkmR - 1 >= 0)
                        c[i][tbxEKSFDkmR - 1] = c[i][tbxEKSFDkmR - 1] + Au1PIi[i][tbxEKSFDkmR];
                    if (tbxEKSFDkmR + 1 <= 8)
                        c[i][tbxEKSFDkmR + 1] = c[i][tbxEKSFDkmR + 1] + Au1PIi[i][tbxEKSFDkmR];
                    c[i][tbxEKSFDkmR] = c[i][tbxEKSFDkmR] + Au1PIi[i][tbxEKSFDkmR] * (738 - 736);
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (i < 9) {
            {
                tbxEKSFDkmR = 0;
                while (tbxEKSFDkmR < 9) {
                    Au1PIi[i][tbxEKSFDkmR] = c[i][tbxEKSFDkmR];
                    tbxEKSFDkmR++;
                };
            }
            i = i + 1;
        };
    };
}

int main () {
    int sfgbMKWhEG28 = 0, sk2xRowV38 = 0, i = 0, tbxEKSFDkmR = 0;
    ARl7sb1SKcT (sk2xRowV38);
    cin >> sfgbMKWhEG28 >> sk2xRowV38;
    Au1PIi[(461 - 457)][4] = sfgbMKWhEG28;
    for (i = 0; i < 9; i++) {
        cout << Au1PIi[i][0];
        {
            tbxEKSFDkmR = 1;
            while (tbxEKSFDkmR < 9) {
                cout << ' ' << Au1PIi[i][tbxEKSFDkmR];
                tbxEKSFDkmR++;
            };
        }
        cout << endl;
    }
    return 0;
}

