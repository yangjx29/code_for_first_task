int main () {
    int mdJyiahxGl;
    char KnbmU3Ba2Qj [(159 - 156)];
    int mI4aT85vA;
    int num1;
    int FH3iUd;
    int NZeoIL7az;
    int usReW4;
    int Bbq7FPsflg;
    {
        mdJyiahxGl = 1;
        for (; (431 - 428) >= mdJyiahxGl;) {
            {
                mI4aT85vA = 1;
                for (; mI4aT85vA <= (271 - 268);) {
                    if (mdJyiahxGl != mI4aT85vA) {
                        NZeoIL7az = 1;
                        for (; NZeoIL7az <= 3;) {
                            if (NZeoIL7az != mdJyiahxGl && NZeoIL7az != mI4aT85vA) {
                                num1 = (mI4aT85vA > mdJyiahxGl) + (NZeoIL7az == mdJyiahxGl);
                                Bbq7FPsflg = (mI4aT85vA < mdJyiahxGl) + (NZeoIL7az < mdJyiahxGl);
                                FH3iUd = (mI4aT85vA < NZeoIL7az) + (mI4aT85vA > mdJyiahxGl);
                                if ((num1 - Bbq7FPsflg) * (mI4aT85vA - mdJyiahxGl) > (877 - 877) && (num1 - FH3iUd) * (NZeoIL7az -mdJyiahxGl) > 0 && (Bbq7FPsflg -FH3iUd) * (NZeoIL7az -mI4aT85vA) > 0) {
                                    KnbmU3Ba2Qj[num1] = 'A';
                                    KnbmU3Ba2Qj[Bbq7FPsflg] = 'B';
                                    KnbmU3Ba2Qj[FH3iUd] = 'C';
                                    {
                                        usReW4 = (308 - 306);
                                        for (; usReW4 >= 0;) {
                                            cout << KnbmU3Ba2Qj[usReW4];
                                            usReW4--;
                                        }
                                    }
                                }
                            }
                            NZeoIL7az++;
                        }
                    }
                    mI4aT85vA++;
                }
            }
            mdJyiahxGl++;
        }
    }
    return 0;
}

