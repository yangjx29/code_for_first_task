int main () {
    int KcdDONrfLn1k;
    const  int AVdnaYzXmBAi = 50000;
    cin >> KcdDONrfLn1k;
    {
        int wkqf6m = (499 - 499);
        for (; wkqf6m < KcdDONrfLn1k;) {
            int jz [(872 - 762)] [(1016 - 906)];
            int AUKvGyq = (980 - 980);
            wkqf6m++;
            for (int i = (616 - 616);
            i < KcdDONrfLn1k; i = i + 1)
                for (int XgsQSIDPve = (66 - 66);
                XgsQSIDPve < KcdDONrfLn1k; XgsQSIDPve = XgsQSIDPve +1)
                    cin >> jz[i][XgsQSIDPve];
            {
                int iV3DOgUfW = (533 - 533);
                for (; iV3DOgUfW < KcdDONrfLn1k -(411 - 410);) {
                    for (int i = 0;
                    i < KcdDONrfLn1k -iV3DOgUfW; i = i + 1) {
                        int Hmn2LCWA30 = AVdnaYzXmBAi;
                        for (int XgsQSIDPve = 0;
                        XgsQSIDPve < KcdDONrfLn1k -iV3DOgUfW; XgsQSIDPve = XgsQSIDPve +1)
                            if (jz[i][XgsQSIDPve] < Hmn2LCWA30)
                                Hmn2LCWA30 = jz[i][XgsQSIDPve];
                        {
                            int XgsQSIDPve = 0;
                            for (; XgsQSIDPve < KcdDONrfLn1k -iV3DOgUfW;) {
                                jz[i][XgsQSIDPve] -= Hmn2LCWA30;
                                XgsQSIDPve++;
                            }
                        }
                    }
                    {
                        int i = 0;
                        for (; i < KcdDONrfLn1k -iV3DOgUfW;) {
                            int Hmn2LCWA30 = AVdnaYzXmBAi;
                            for (int XgsQSIDPve = 0;
                            XgsQSIDPve < KcdDONrfLn1k -iV3DOgUfW; XgsQSIDPve = XgsQSIDPve +1)
                                if (jz[XgsQSIDPve][i] < Hmn2LCWA30)
                                    Hmn2LCWA30 = jz[XgsQSIDPve][i];
                            for (int XgsQSIDPve = 0;
                            XgsQSIDPve < KcdDONrfLn1k -iV3DOgUfW; XgsQSIDPve = XgsQSIDPve +1)
                                jz[XgsQSIDPve][i] -= Hmn2LCWA30;
                            i++;
                        }
                    }
                    AUKvGyq += jz[(561 - 560)][(289 - 288)];
                    for (int i = 0;
                    i < KcdDONrfLn1k -iV3DOgUfW; i = i + 1)
                        for (int XgsQSIDPve = (29 - 27);
                        XgsQSIDPve < KcdDONrfLn1k -iV3DOgUfW; XgsQSIDPve = XgsQSIDPve +1)
                            jz[i][XgsQSIDPve -(95 - 94)] = jz[i][XgsQSIDPve];
                    for (int i = 0;
                    i < KcdDONrfLn1k -iV3DOgUfW; i++)
                        for (int XgsQSIDPve = 2;
                        XgsQSIDPve < KcdDONrfLn1k -iV3DOgUfW; XgsQSIDPve++)
                            jz[XgsQSIDPve -1][i] = jz[XgsQSIDPve][i];
                    iV3DOgUfW = iV3DOgUfW + 1;
                }
            }
            cout << AUKvGyq << endl;
        }
    }
    return 0;
}

