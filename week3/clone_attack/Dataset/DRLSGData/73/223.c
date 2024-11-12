int main (int WUj8tbEyGO2g, char **v9cS3BlYi) {
    int HOf3G79 [(910 - 905)] [(927 - 922)];
    {
        int S7TVZHaKct = (112 - 112);
        while (S7TVZHaKct < (286 - 281)) {
            {
                int hmo0SUQA = (65 - 65);
                while ((187 - 182) > hmo0SUQA) {
                    cin >> HOf3G79[S7TVZHaKct][hmo0SUQA];
                    hmo0SUQA = hmo0SUQA + (360 - 359);
                }
            }
            S7TVZHaKct = S7TVZHaKct +(14 - 13);
        }
    }
    int QD7E6iLov4 [(342 - 337)];
    {
        int S7TVZHaKct = (383 - 383);
        while (S7TVZHaKct < (574 - 569)) {
            int H3eW02J5afVM = HOf3G79[S7TVZHaKct][(586 - 586)];
            {
                int hmo0SUQA = (154 - 153);
                while (hmo0SUQA < (170 - 165)) {
                    if (HOf3G79[S7TVZHaKct][hmo0SUQA] > H3eW02J5afVM)
                        H3eW02J5afVM = HOf3G79[S7TVZHaKct][hmo0SUQA];
                    hmo0SUQA = hmo0SUQA + (874 - 873);
                }
            }
            QD7E6iLov4[S7TVZHaKct] = H3eW02J5afVM;
            S7TVZHaKct = S7TVZHaKct +(603 - 602);
        }
    }
    int colmin [5];
    {
        int hmo0SUQA = 0;
        while (5 > hmo0SUQA) {
            int R4JCq7uTLySx = HOf3G79[0][hmo0SUQA];
            {
                int S7TVZHaKct = 1;
                while (S7TVZHaKct < 5) {
                    if (R4JCq7uTLySx > HOf3G79[S7TVZHaKct][hmo0SUQA])
                        R4JCq7uTLySx = HOf3G79[S7TVZHaKct][hmo0SUQA];
                    S7TVZHaKct = S7TVZHaKct +1;
                }
            }
            colmin[hmo0SUQA] = R4JCq7uTLySx;
            hmo0SUQA++;
        }
    }
    int kHnBDdteaM = 0;
    {
        int S7TVZHaKct = 0;
        while (S7TVZHaKct < 5) {
            {
                int hmo0SUQA = 0;
                while (5 > hmo0SUQA) {
                    if (HOf3G79[S7TVZHaKct][hmo0SUQA] == QD7E6iLov4[S7TVZHaKct] && HOf3G79[S7TVZHaKct][hmo0SUQA] == colmin[hmo0SUQA]) {
                        kHnBDdteaM = kHnBDdteaM + 1;
                        cout << S7TVZHaKct +1 << " " << hmo0SUQA + 1 << " " << HOf3G79[S7TVZHaKct][hmo0SUQA] << endl;
                    }
                    hmo0SUQA = hmo0SUQA + 1;
                }
            }
            S7TVZHaKct = S7TVZHaKct +1;
        }
    }
    if (kHnBDdteaM == 0)
        cout << "not found" << endl;
    return 0;
}

