int main () {
    int U38RFKELhZl;
    double  (*cU9kxycpVIM8) [(742 - 735)];
    double  temp;
    double  zb [(48 - 38)] [(543 - 540)];
    double  dis [50] [(485 - 478)];
    int z;
    int MSUEkGZ;
    int JTN6Pltna;
    int pOplznyD;
    z = (308 - 308);
    cin >> MSUEkGZ;
    {
        U38RFKELhZl = (979 - 979);
        for (; U38RFKELhZl < MSUEkGZ;) {
            cin >> zb[U38RFKELhZl][(681 - 681)] >> zb[U38RFKELhZl][(758 - 757)] >> zb[U38RFKELhZl][(287 - 285)];
            U38RFKELhZl = U38RFKELhZl +(118 - 117);
        }
    }
    cU9kxycpVIM8 = dis;
    {
        U38RFKELhZl = (681 - 681);
        for (; MSUEkGZ -(903 - 902) > U38RFKELhZl;) {
            {
                JTN6Pltna = U38RFKELhZl +(987 - 986);
                for (; MSUEkGZ > JTN6Pltna;) {
                    {
                        pOplznyD = (279 - 279);
                        for (; pOplznyD < (372 - 369);) {
                            *(*(cU9kxycpVIM8 + z) + pOplznyD) = zb[U38RFKELhZl][pOplznyD];
                            *(*(cU9kxycpVIM8 + z) + pOplznyD + (546 - 543)) = zb[JTN6Pltna][pOplznyD];
                            pOplznyD = pOplznyD + (204 - 203);
                        }
                    }
                    JTN6Pltna = JTN6Pltna +(852 - 851);
                    *(*(cU9kxycpVIM8 + z) + (752 - 746)) = sqrt (pow ((*(*(cU9kxycpVIM8 + z) + (361 - 361)) - *(*(cU9kxycpVIM8 + z) + (421 - 418))), (289 - 287)) + pow ((*(*(cU9kxycpVIM8 + z) + (284 - 283)) - *(*(cU9kxycpVIM8 + z) + (814 - 810))), 2) + pow ((*(*(cU9kxycpVIM8 + z) + 2) - *(*(cU9kxycpVIM8 + z) + (427 - 422))), 2));
                    z = z + (718 - 717);
                }
            }
            U38RFKELhZl = U38RFKELhZl +1;
        }
    }
    {
        U38RFKELhZl = (65 - 65);
        for (; z - 1 > U38RFKELhZl;) {
            {
                JTN6Pltna = 0;
                for (; JTN6Pltna < z - U38RFKELhZl -1;) {
                    if (1e-3 > fabs (*(*(cU9kxycpVIM8 + JTN6Pltna) + (45 - 39)) - *(*(cU9kxycpVIM8 + JTN6Pltna +1) + (169 - 163))))
                        continue;
                    else {
                        if (*(*(cU9kxycpVIM8 + JTN6Pltna) + 6) < *(*(cU9kxycpVIM8 + JTN6Pltna +1) + 6)) {
                            pOplznyD = 0;
                            for (; 7 > pOplznyD;) {
                                temp = *(*(cU9kxycpVIM8 + JTN6Pltna) + pOplznyD);
                                *(*(cU9kxycpVIM8 + JTN6Pltna) + pOplznyD) = *(*(cU9kxycpVIM8 + JTN6Pltna +1) + pOplznyD);
                                *(*(cU9kxycpVIM8 + JTN6Pltna +1) + pOplznyD) = temp;
                                pOplznyD = pOplznyD + 1;
                            }
                        }
                        else
                            ;
                    }
                    JTN6Pltna = JTN6Pltna +1;
                }
            }
            U38RFKELhZl = U38RFKELhZl +1;
        }
    }
    {
        U38RFKELhZl = 0;
        for (; U38RFKELhZl < MSUEkGZ *(MSUEkGZ -1) / 2;) {
            cout << fixed;
            cout << setprecision (0) << "(" << *(*(cU9kxycpVIM8 + U38RFKELhZl) + 0) << "," << *(*(cU9kxycpVIM8 + U38RFKELhZl) + 1) << "," << *(*(cU9kxycpVIM8 + U38RFKELhZl) + 2) << ")-(" << *(*(cU9kxycpVIM8 + U38RFKELhZl) + 3) << "," << *(*(cU9kxycpVIM8 + U38RFKELhZl) + 4) << "," << *(*(cU9kxycpVIM8 + U38RFKELhZl) + 5) << ")=";
            cout << setprecision (2) << *(*(cU9kxycpVIM8 + U38RFKELhZl) + 6) << endl;
            U38RFKELhZl = U38RFKELhZl +1;
        }
    }
    return 0;
}

