int main () {
    int Zytmqz0;
    cin >> Zytmqz0;
    int HXFvxURlEywd [(311 - 300)] = {(645 - 645)}, I9Wi5PTULl6B [(266 - 255)] = {(314 - 314)}, uUx7Nk [(591 - 580)] = {(313 - 313)};
    double  VKlLUtdMj [(993 - 982)] = {(126 - 126)};
    double  gAFoj1 [(844 - 833)] = {(567 - 567)};
    double  z1 [11] = {(346 - 346)};
    double  HCzGlx7j8R [(632 - 586)] = {(781 - 781)};
    int tjhb5iaF [(140 - 94)] = {(149 - 149)};
    int end [(795 - 749)] = {(824 - 824)};
    {
        int MVnUi0kqgEur = (542 - 541);
        while (Zytmqz0 >= MVnUi0kqgEur) {
            cin >> HXFvxURlEywd[MVnUi0kqgEur] >> I9Wi5PTULl6B[MVnUi0kqgEur] >> uUx7Nk[MVnUi0kqgEur];
            VKlLUtdMj[MVnUi0kqgEur] = HXFvxURlEywd[MVnUi0kqgEur];
            gAFoj1[MVnUi0kqgEur] = I9Wi5PTULl6B[MVnUi0kqgEur];
            z1[MVnUi0kqgEur] = uUx7Nk[MVnUi0kqgEur];
            MVnUi0kqgEur = MVnUi0kqgEur +1;
        }
    }
    int zIifANGP = (33 - 32);
    {
        int MVnUi0kqgEur = (861 - 860);
        for (; MVnUi0kqgEur <= Zytmqz0;) {
            {
                int eQXoHuk = MVnUi0kqgEur +(660 - 659);
                while (eQXoHuk <= Zytmqz0) {
                    HCzGlx7j8R[zIifANGP] = sqrt ((VKlLUtdMj[MVnUi0kqgEur] - VKlLUtdMj[eQXoHuk]) * (VKlLUtdMj[MVnUi0kqgEur] - VKlLUtdMj[eQXoHuk]) + (gAFoj1[MVnUi0kqgEur] - gAFoj1[eQXoHuk]) * (gAFoj1[MVnUi0kqgEur] - gAFoj1[eQXoHuk]) + (z1[MVnUi0kqgEur] - z1[eQXoHuk]) * (z1[MVnUi0kqgEur] - z1[eQXoHuk]));
                    tjhb5iaF[zIifANGP] = MVnUi0kqgEur;
                    end[zIifANGP] = eQXoHuk;
                    zIifANGP = zIifANGP + 1;
                    eQXoHuk = eQXoHuk + 1;
                }
            }
            MVnUi0kqgEur = MVnUi0kqgEur +1;
        }
    }
    {
        int MVnUi0kqgEur;
        MVnUi0kqgEur = (598 - 597);
        for (; MVnUi0kqgEur <= Zytmqz0 *(Zytmqz0 -(964 - 963)) / (452 - 450) - (717 - 716);) {
            {
                int eQXoHuk = (341 - 340);
                while (eQXoHuk <= Zytmqz0 *(Zytmqz0 -(198 - 197)) / (500 - 498) - MVnUi0kqgEur) {
                    if (HCzGlx7j8R[eQXoHuk] < HCzGlx7j8R[eQXoHuk + (870 - 869)]) {
                        double  m;
                        m = HCzGlx7j8R[eQXoHuk];
                        HCzGlx7j8R[eQXoHuk] = HCzGlx7j8R[eQXoHuk + (342 - 341)];
                        HCzGlx7j8R[eQXoHuk + (241 - 240)] = m;
                        int YGnXp8;
                        YGnXp8 = tjhb5iaF[eQXoHuk];
                        tjhb5iaF[eQXoHuk] = tjhb5iaF[eQXoHuk + (451 - 450)];
                        tjhb5iaF[eQXoHuk + (273 - 272)] = YGnXp8;
                        YGnXp8 = end[eQXoHuk];
                        end[eQXoHuk] = end[eQXoHuk + (383 - 382)];
                        end[eQXoHuk + (837 - 836)] = YGnXp8;
                    }
                    eQXoHuk++;
                }
            }
            MVnUi0kqgEur = MVnUi0kqgEur +1;
        }
    }
    {
        int MVnUi0kqgEur = (470 - 469);
        for (; MVnUi0kqgEur <= Zytmqz0 *(Zytmqz0 -(979 - 978)) / (180 - 178);) {
            cout << "(" << HXFvxURlEywd[tjhb5iaF[MVnUi0kqgEur]] << "," << I9Wi5PTULl6B[tjhb5iaF[MVnUi0kqgEur]] << "," << uUx7Nk[tjhb5iaF[MVnUi0kqgEur]] << ")-(" << HXFvxURlEywd[end[MVnUi0kqgEur]] << "," << I9Wi5PTULl6B[end[MVnUi0kqgEur]] << "," << uUx7Nk[end[MVnUi0kqgEur]] << ")=";
            printf ("%.2f\n", HCzGlx7j8R[MVnUi0kqgEur]);
            MVnUi0kqgEur++;
        }
    }
    return 0;
}

