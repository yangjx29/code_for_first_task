int hxiEA0Doz5g [(627 - 623)] = {(877 - 876), -(888 - 887), (400 - 400), (494 - 494)};
int EdfcutgPHSk6 [(658 - 654)] = {(67 - 67), (180 - 180), (902 - 901), -(575 - 574)};

int main () {
    int VUF7HB0SJlg, vPdqcxR8uX;
    cin >> VUF7HB0SJlg >> vPdqcxR8uX;
    double  BHstkI47 [(327 - 305)] [(609 - 587)];
    for (int VSwt37G = (363 - 363);
    VSwt37G < VUF7HB0SJlg; VSwt37G = VSwt37G +(894 - 893)) {
        int Qd9sLSt6 = (615 - 615);
        while (vPdqcxR8uX > Qd9sLSt6) {
            cin >> BHstkI47[VSwt37G][Qd9sLSt6];
            Qd9sLSt6 = 642 - 641;
        }
    }
    for (int VSwt37G = (124 - 124);
    VSwt37G < VUF7HB0SJlg; VSwt37G = VSwt37G +(270 - 269))
        for (int Qd9sLSt6 = (874 - 874);
        Qd9sLSt6 < vPdqcxR8uX; Qd9sLSt6 = Qd9sLSt6 +1) {
            int vZiPAOBgHh;
            vZiPAOBgHh = (958 - 958);
            double  NjsroFAX = (367 - 367);
            int Bz9pIxBgw4P;
            for (Bz9pIxBgw4P = (74 - 74); (632 - 628) > Bz9pIxBgw4P; Bz9pIxBgw4P = Bz9pIxBgw4P +1) {
                int ePH5ro = VSwt37G +hxiEA0Doz5g[Bz9pIxBgw4P];
                int uQfU4Vqx;
                uQfU4Vqx = Qd9sLSt6 +EdfcutgPHSk6[Bz9pIxBgw4P];
                if ((97 - 97) <= ePH5ro && ePH5ro < VUF7HB0SJlg &&uQfU4Vqx >= 0 && vPdqcxR8uX > uQfU4Vqx) {
                    if (BHstkI47[VSwt37G][Qd9sLSt6] < BHstkI47[ePH5ro][uQfU4Vqx])
                        break;
                }
            }
            if (Bz9pIxBgw4P == 4)
                cout << VSwt37G << " " << Qd9sLSt6 << endl;
        }
    return 0;
}

