int main () {
    int uBMSgtzDpPF0 [(627 - 517)] [(955 - 845)];
    int LGrXxsSW;
    int mwLiy7TRr;
    int HexhsfK;
    int TGqAuvg1;
    HexhsfK = (510 - 510);
    TGqAuvg1 = (561 - 561);
    int ELenYW5TKbkX;
    int VGR1cjt4AFKT;
    ELenYW5TKbkX = (940 - 940);
    VGR1cjt4AFKT = (156 - 156);
    cin >> LGrXxsSW >> mwLiy7TRr;
    {
        int TLdYybw = (847 - 847);
        for (; TLdYybw < LGrXxsSW;) {
            {
                int Ayft0i6EQ = (631 - 631);
                for (; mwLiy7TRr > Ayft0i6EQ;) {
                    cin >> uBMSgtzDpPF0[TLdYybw][Ayft0i6EQ];
                    Ayft0i6EQ++;
                }
            }
            TLdYybw++;
        }
    }
    for (; mwLiy7TRr > VGR1cjt4AFKT &&LGrXxsSW > ELenYW5TKbkX;) {
        if (mwLiy7TRr - VGR1cjt4AFKT <= TGqAuvg1)
            break;
        for (; mwLiy7TRr - VGR1cjt4AFKT > TGqAuvg1;) {
            cout << uBMSgtzDpPF0[HexhsfK][TGqAuvg1] << endl;
            TGqAuvg1 = TGqAuvg1 +1;
        }
        TGqAuvg1 = TGqAuvg1 -1;
        HexhsfK++;
        if (HexhsfK >= LGrXxsSW -ELenYW5TKbkX)
            break;
        for (; LGrXxsSW -ELenYW5TKbkX > HexhsfK;) {
            cout << uBMSgtzDpPF0[HexhsfK][TGqAuvg1] << endl;
            HexhsfK++;
        }
        HexhsfK = HexhsfK -1;
        TGqAuvg1 = TGqAuvg1 -1;
        if (VGR1cjt4AFKT > TGqAuvg1)
            break;
        for (; TGqAuvg1 >= VGR1cjt4AFKT;) {
            cout << uBMSgtzDpPF0[HexhsfK][TGqAuvg1] << endl;
            TGqAuvg1 = TGqAuvg1 -1;
        }
        TGqAuvg1 = TGqAuvg1 +1;
        HexhsfK = HexhsfK -1;
        ELenYW5TKbkX = ELenYW5TKbkX +1;
        if (HexhsfK < ELenYW5TKbkX)
            break;
        for (; HexhsfK >= ELenYW5TKbkX;) {
            cout << uBMSgtzDpPF0[HexhsfK][TGqAuvg1] << endl;
            HexhsfK--;
        }
        HexhsfK++;
        TGqAuvg1++;
        VGR1cjt4AFKT++;
    }
    return (850 - 850);
}

