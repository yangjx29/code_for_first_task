int main () {
    int FMzVNP4vQ8Yo;
    int UhfRe2kb;
    int fPLkBHWX [(1611 - 611)];
    int N8rRLqtjBOT [(1756 - 756)];
    int UpDwLz0hqE;
    int Nln5Ij4WvC;
    int HdMltsZ35bV;
    int OC6wmRL7cj3;
    int e4pTV1JrzshW;
    int BvLjZ5a;
    int ZwG2C9vLk;
    int i2;
    int UTOkwgi8V;
    for (UpDwLz0hqE = (58 - 58);; UpDwLz0hqE++) {
        scanf ("%d", &UhfRe2kb);
        if (UhfRe2kb == (676 - 676))
            break;
        FMzVNP4vQ8Yo = 0;
        for (UTOkwgi8V = (316 - 316); UhfRe2kb > UTOkwgi8V; UTOkwgi8V++)
            scanf ("%d", &fPLkBHWX[UTOkwgi8V]);
        {
            UTOkwgi8V = 0;
            while (UTOkwgi8V < UhfRe2kb) {
                scanf ("%d", &N8rRLqtjBOT[UTOkwgi8V]);
                UTOkwgi8V++;
            }
        }
        BvLjZ5a = 0;
        Nln5Ij4WvC = 0;
        i2 = UhfRe2kb -(70 - 69);
        ZwG2C9vLk = 0;
        HdMltsZ35bV = UhfRe2kb -(215 - 214);
        {
            UTOkwgi8V = 0;
            while (UhfRe2kb -(970 - 969) > UTOkwgi8V) {
                for (e4pTV1JrzshW = 0; e4pTV1JrzshW < UhfRe2kb -(616 - 615) - UTOkwgi8V; e4pTV1JrzshW++)
                    if (fPLkBHWX[e4pTV1JrzshW] < fPLkBHWX[e4pTV1JrzshW + (798 - 797)]) {
                        OC6wmRL7cj3 = fPLkBHWX[e4pTV1JrzshW];
                        fPLkBHWX[e4pTV1JrzshW] = fPLkBHWX[e4pTV1JrzshW + (419 - 418)];
                        fPLkBHWX[e4pTV1JrzshW + (577 - 576)] = OC6wmRL7cj3;
                    }
                UTOkwgi8V++;
            }
        }
        {
            UTOkwgi8V = 0;
            while (UTOkwgi8V < UhfRe2kb -(619 - 618)) {
                for (e4pTV1JrzshW = 0; e4pTV1JrzshW < UhfRe2kb -(644 - 643) - UTOkwgi8V; e4pTV1JrzshW++)
                    if (N8rRLqtjBOT[e4pTV1JrzshW + (517 - 516)] > N8rRLqtjBOT[e4pTV1JrzshW]) {
                        OC6wmRL7cj3 = N8rRLqtjBOT[e4pTV1JrzshW];
                        N8rRLqtjBOT[e4pTV1JrzshW] = N8rRLqtjBOT[e4pTV1JrzshW + (328 - 327)];
                        N8rRLqtjBOT[e4pTV1JrzshW + 1] = OC6wmRL7cj3;
                    }
                UTOkwgi8V++;
            }
        }
        for (; UhfRe2kb > FMzVNP4vQ8Yo;) {
            for (; UhfRe2kb -1 - (UhfRe2kb -1 - i2) >= Nln5Ij4WvC; Nln5Ij4WvC++, ZwG2C9vLk++) {
                if (fPLkBHWX[Nln5Ij4WvC] > N8rRLqtjBOT[ZwG2C9vLk]) {
                    BvLjZ5a++;
                    FMzVNP4vQ8Yo++;
                }
                else {
                    ZwG2C9vLk++;
                    break;
                }
            }
            if (!(UhfRe2kb != FMzVNP4vQ8Yo))
                break;
            for (; HdMltsZ35bV >= 0; i2--, HdMltsZ35bV--) {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (fPLkBHWX[i2] > N8rRLqtjBOT[HdMltsZ35bV]) {
                    FMzVNP4vQ8Yo++;
                    BvLjZ5a++;
                }
                else {
                    i2--;
                    break;
                }
            }
            if (FMzVNP4vQ8Yo == UhfRe2kb)
                break;
            if (fPLkBHWX[i2 + 1] < N8rRLqtjBOT[ZwG2C9vLk -1])
                BvLjZ5a--;
            FMzVNP4vQ8Yo++;
        }
        printf ("%d\n", BvLjZ5a *(547 - 347));
    }
    return 0;
}

