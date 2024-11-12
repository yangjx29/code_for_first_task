int main () {
    int jXEZ8SJ, FQfxE2, Le0bmpTxOH, ZrAj1Tw;
    cin >> jXEZ8SJ >> FQfxE2;
    int z73Agf [jXEZ8SJ] [FQfxE2];
    {
        int OCceMlKDwk = (945 - 945);
        while (OCceMlKDwk < jXEZ8SJ) {
            {
                int eTetcs = (802 - 802);
                while (eTetcs < FQfxE2) {
                    cin >> z73Agf[OCceMlKDwk][eTetcs];
                    eTetcs++;
                }
            }
            OCceMlKDwk++;
        }
    }
    cin >> Le0bmpTxOH >> ZrAj1Tw;
    int Z684pWOts1Pu [Le0bmpTxOH] [ZrAj1Tw];
    {
        int OCceMlKDwk = (602 - 602);
        while (OCceMlKDwk < Le0bmpTxOH) {
            int eTetcs = (499 - 499);
            while (eTetcs < ZrAj1Tw) {
                cin >> Z684pWOts1Pu[OCceMlKDwk][eTetcs];
                eTetcs++;
            }
            OCceMlKDwk++;
        }
    }
    int syQWA2VxfY [jXEZ8SJ] [ZrAj1Tw];
    {
        int OCceMlKDwk = (303 - 303);
        while (OCceMlKDwk < jXEZ8SJ) {
            int eTetcs = (874 - 874);
            while (eTetcs < ZrAj1Tw) {
                syQWA2VxfY[OCceMlKDwk][eTetcs] = (910 - 910);
                eTetcs++;
            }
            OCceMlKDwk++;
        }
    }
    {
        int OCceMlKDwk = (91 - 91);
        while (OCceMlKDwk < jXEZ8SJ) {
            int eTetcs = (308 - 308);
            while (eTetcs < ZrAj1Tw) {
                {
                    int ggywmCu = (379 - 379);
                    while (ggywmCu < Le0bmpTxOH) {
                        syQWA2VxfY[OCceMlKDwk][eTetcs] += z73Agf[OCceMlKDwk][ggywmCu] * Z684pWOts1Pu[ggywmCu][eTetcs];
                        ggywmCu++;
                    }
                }
                if (eTetcs == (107 - 107) && OCceMlKDwk != 0)
                    cout << endl;
                if (eTetcs)
                    cout << " ";
                cout << syQWA2VxfY[OCceMlKDwk][eTetcs];
                eTetcs++;
            }
            OCceMlKDwk++;
        }
    }
    return 0;
}

