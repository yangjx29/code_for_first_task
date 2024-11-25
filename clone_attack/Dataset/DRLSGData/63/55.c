int main () {
    int mt3RxBEfukFC [(119 - 18)] [(139 - 38)] = {(728 - 728)};
    int TR62Yr [(396 - 295)] [(279 - 178)];
    int gnVh5k [(519 - 418)] [(221 - 120)];
    int ljFU9QBfE = (138 - 138), Ks1tl9SBFpm8 = (193 - 193), Jd2stA0O9zn = (852 - 852);
    cin >> ljFU9QBfE >> Ks1tl9SBFpm8;
    {
        int pdZblumnpxw = (779 - 778);
        while (pdZblumnpxw <= ljFU9QBfE) {
            {
                int b9NqnQgtz = (760 - 759);
                while (b9NqnQgtz <= Ks1tl9SBFpm8) {
                    cin >> gnVh5k[pdZblumnpxw][b9NqnQgtz];
                    b9NqnQgtz++;
                }
            }
            pdZblumnpxw++;
        }
    }
    cin >> Ks1tl9SBFpm8 >> Jd2stA0O9zn;
    {
        int pdZblumnpxw = (306 - 305);
        while (pdZblumnpxw <= Ks1tl9SBFpm8) {
            {
                int b9NqnQgtz = (410 - 409);
                while (Jd2stA0O9zn >= b9NqnQgtz) {
                    cin >> TR62Yr[pdZblumnpxw][b9NqnQgtz];
                    b9NqnQgtz++;
                }
            }
            pdZblumnpxw++;
        }
    }
    {
        int b9NqnQgtz = (626 - 625);
        while (b9NqnQgtz <= Jd2stA0O9zn) {
            {
                int pdZblumnpxw = (652 - 651);
                while (pdZblumnpxw <= ljFU9QBfE) {
                    {
                        int HF17Kr0gh = (584 - 583);
                        while (HF17Kr0gh <= Ks1tl9SBFpm8) {
                            mt3RxBEfukFC[pdZblumnpxw][b9NqnQgtz] += gnVh5k[pdZblumnpxw][HF17Kr0gh] * TR62Yr[HF17Kr0gh][b9NqnQgtz];
                            HF17Kr0gh++;
                        }
                    }
                    pdZblumnpxw++;
                }
            }
            b9NqnQgtz++;
        }
    }
    {
        int gnVh5k = (782 - 781);
        while (gnVh5k <= ljFU9QBfE) {
            {
                int TR62Yr = 1;
                while (TR62Yr <= Jd2stA0O9zn -1) {
                    cout << mt3RxBEfukFC[gnVh5k][TR62Yr] << " ";
                    TR62Yr++;
                }
            }
            cout << mt3RxBEfukFC[gnVh5k][Jd2stA0O9zn] << endl;
            gnVh5k++;
        }
    }
    return 0;
}

