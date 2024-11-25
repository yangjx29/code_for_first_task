int main () {
    int k;
    int MmhowpyIXzVS [4];
    int YMoF8xe5jDL;
    int j;
    k = (722 - 722);
    int A;
    int B;
    int IdlpH4;
    int D;
    int a;
    int liZD8v3FdPw;
    int io1VBIbyCf4;
    int cupMxZb;
    for (A = (334 - 324); (905 - 855) >= A; A = A +10)
        for (B = 10; 50 >= B; B = B +10) {
            if (!(B != A))
                continue;
            {
                IdlpH4 = 10;
                while (50 >= IdlpH4) {
                    if (!(IdlpH4 != A) || !(IdlpH4 != B))
                        continue;
                    for (D = 10; 50 >= D; D = D +10) {
                        if (!(D != A) || !(D != B) || !(D != IdlpH4))
                            continue;
                        if ((A +B == IdlpH4 +D) && (A +D > B +IdlpH4) && (A +IdlpH4 < B)) {
                            MmhowpyIXzVS[0] = A;
                            a = A;
                            MmhowpyIXzVS[1] = B;
                            MmhowpyIXzVS[2] = IdlpH4;
                            MmhowpyIXzVS[3] = D;
                            cupMxZb = D;
                            liZD8v3FdPw = B;
                            io1VBIbyCf4 = IdlpH4;
                        };
                    }
                    IdlpH4 = IdlpH4 +10;
                };
            };
        }
    for (k = 1; k < 4; k = k + 1)
        for (YMoF8xe5jDL = 1; YMoF8xe5jDL < 4; YMoF8xe5jDL++) {
            if (MmhowpyIXzVS[YMoF8xe5jDL] > MmhowpyIXzVS[YMoF8xe5jDL -1]) {
                j = MmhowpyIXzVS[YMoF8xe5jDL -1];
                MmhowpyIXzVS[YMoF8xe5jDL -1] = MmhowpyIXzVS[YMoF8xe5jDL];
                MmhowpyIXzVS[YMoF8xe5jDL] = j;
            };
        }
    {
        YMoF8xe5jDL = 0;
        while (YMoF8xe5jDL < 4) {
            if (MmhowpyIXzVS[YMoF8xe5jDL] == a)
                cout << "z " << MmhowpyIXzVS[YMoF8xe5jDL] << endl;
            if (MmhowpyIXzVS[YMoF8xe5jDL] == liZD8v3FdPw)
                cout << "q " << MmhowpyIXzVS[YMoF8xe5jDL] << endl;
            if (MmhowpyIXzVS[YMoF8xe5jDL] == io1VBIbyCf4)
                cout << "s " << MmhowpyIXzVS[YMoF8xe5jDL] << endl;
            if (MmhowpyIXzVS[YMoF8xe5jDL] == cupMxZb)
                cout << "l " << MmhowpyIXzVS[YMoF8xe5jDL] << endl;
            YMoF8xe5jDL++;
        };
    }
    return 0;
}

