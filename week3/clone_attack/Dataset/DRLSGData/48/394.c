int main () {
    int utK5qr [(851 - 836)] [(671 - 656)] = {(23 - 23)};
    int KlPUOb8G9tgy = (14 - 14), xaqBjDU = 0;
    cin >> KlPUOb8G9tgy >> xaqBjDU;
    utK5qr[5][5] = KlPUOb8G9tgy;
    {
        {
            if (0) {
                return 0;
            }
        }
        int H8hL0SegHm = (220 - 219);
        for (; H8hL0SegHm <= xaqBjDU;) {
            int owAQFZ1 [15] [15] = {0};
            {
                int lvrQItUOzMun = (118 - 117);
                for (; lvrQItUOzMun <= (128 - 119);) {
                    {
                        int lmhus541c = (396 - 395);
                        for (; lmhus541c <= 9;) {
                            if (utK5qr[lvrQItUOzMun][lmhus541c] != 0) {
                                {
                                    int zZaH9VMesAK = lvrQItUOzMun - (144 - 143);
                                    for (; zZaH9VMesAK <= lvrQItUOzMun + (115 - 114);) {
                                        int RoaJUFwtKIk = lmhus541c - (736 - 735);
                                        for (; RoaJUFwtKIk <= lmhus541c + 1;) {
                                            owAQFZ1[zZaH9VMesAK][RoaJUFwtKIk] = owAQFZ1[zZaH9VMesAK][RoaJUFwtKIk] + utK5qr[lvrQItUOzMun][lmhus541c];
                                            RoaJUFwtKIk++;
                                        }
                                        zZaH9VMesAK++;
                                    }
                                }
                                owAQFZ1[lvrQItUOzMun][lmhus541c] = owAQFZ1[lvrQItUOzMun][lmhus541c] + utK5qr[lvrQItUOzMun][lmhus541c];
                            }
                            lmhus541c++;
                        }
                    }
                    lvrQItUOzMun++;
                }
            }
            {
                int lvrQItUOzMun = 1;
                for (; lvrQItUOzMun <= 9;) {
                    {
                        int lmhus541c = 1;
                        for (; lmhus541c <= 9;) {
                            utK5qr[lvrQItUOzMun][lmhus541c] = owAQFZ1[lvrQItUOzMun][lmhus541c];
                            lmhus541c++;
                        }
                    }
                    lvrQItUOzMun++;
                }
            }
            H8hL0SegHm++;
        }
    }
    {
        int H8hL0SegHm = 1;
        for (; H8hL0SegHm <= 9;) {
            {
                int lmhus541c = 1;
                for (; lmhus541c <= 8;) {
                    cout << utK5qr[H8hL0SegHm][lmhus541c] << " ";
                    lmhus541c++;
                }
            }
            cout << utK5qr[H8hL0SegHm][9] << endl;
            H8hL0SegHm++;
        }
    }
    return 0;
}

