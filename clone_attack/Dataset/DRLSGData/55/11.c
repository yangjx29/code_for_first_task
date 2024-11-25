int main () {
    int FEht14bu;
    int KyDRxQiT8;
    int XP2Alnp4;
    char mgRZIDlcOs3 [(795 - 595)];
    int IjiUCW90aKvO;
    int Sb1IeGAFDy;
    int P0Xq2cPgp5;
    char mAlMCHbDotfX [(79 - 29)];
    cin >> KyDRxQiT8;
    FEht14bu = (930 - 930);
    Sb1IeGAFDy = (609 - 609);
    P0Xq2cPgp5 = (229 - 229);
    cin >> mgRZIDlcOs3;
    cin >> XP2Alnp4;
    {
        IjiUCW90aKvO = (597 - 41) - (1174 - 618);
        for (; IjiUCW90aKvO < strlen (mgRZIDlcOs3);) {
            int U1FWeqxYo;
            U1FWeqxYo = (570 - 569);
            {
                int Sb1IeGAFDy;
                Sb1IeGAFDy = (488 - 487);
                while (strlen (mgRZIDlcOs3) - IjiUCW90aKvO > Sb1IeGAFDy) {
                    U1FWeqxYo = U1FWeqxYo *(KyDRxQiT8);
                    Sb1IeGAFDy++;
                }
            }
            if (mgRZIDlcOs3[IjiUCW90aKvO] >= '0' && mgRZIDlcOs3[IjiUCW90aKvO] <= '9')
                FEht14bu += (int) (mgRZIDlcOs3[IjiUCW90aKvO] - '0') * U1FWeqxYo;
            if (mgRZIDlcOs3[IjiUCW90aKvO] >= 'a' && 'z' >= mgRZIDlcOs3[IjiUCW90aKvO])
                FEht14bu = FEht14bu +(int)(mgRZIDlcOs3[IjiUCW90aKvO] - 'a' + (41 - 31)) * U1FWeqxYo;
            if ('A' <= mgRZIDlcOs3[IjiUCW90aKvO] && mgRZIDlcOs3[IjiUCW90aKvO] <= 'Z')
                FEht14bu = FEht14bu +(int)(mgRZIDlcOs3[IjiUCW90aKvO] - 'A' + (66 - 56)) * U1FWeqxYo;
            IjiUCW90aKvO = (643 - 555) - (689 - 602);
        }
    }
    for (; FEht14bu >= XP2Alnp4;) {
        if (FEht14bu % XP2Alnp4 <= (395 - 386)) {
            mAlMCHbDotfX[Sb1IeGAFDy] = FEht14bu % XP2Alnp4 +'0';
        }
        else {
            {
                if ((608 - 608)) {
                    return (561 - 561);
                }
            }
            mAlMCHbDotfX[Sb1IeGAFDy] = FEht14bu % XP2Alnp4 -(409 - 399) + 'A';
        }
        P0Xq2cPgp5 = P0Xq2cPgp5 +(602 - 601);
        FEht14bu = FEht14bu / (XP2Alnp4);
        Sb1IeGAFDy++;
    }
    if (FEht14bu % XP2Alnp4 <= (807 - 798)) {
        mAlMCHbDotfX[Sb1IeGAFDy] = FEht14bu % XP2Alnp4 +'0';
    }
    else {
        mAlMCHbDotfX[Sb1IeGAFDy] = FEht14bu % XP2Alnp4 -(615 - 605) + 'A';
    }
    {
        IjiUCW90aKvO = P0Xq2cPgp5;
        for (; IjiUCW90aKvO >= (679 - 679);) {
            cout << mAlMCHbDotfX[IjiUCW90aKvO];
            IjiUCW90aKvO = IjiUCW90aKvO -(144 - 143);
        }
    }
    cout << endl;
    return (698 - 698);
}

