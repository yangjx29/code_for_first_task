main () {
    char Bs9jY6yao [(10258 - 258)];
    int gj8MZJ7;
    int HjVQqJ;
    int YUAqX15E;
    int ftAofd1n [(10606 - 606)];
    int Em26Y3C;
    int tkBmf5WJE6lT [(10378 - 378)];
    int qGYq0D;
    char Rwlueqtdo8F [(10180 - 180)];
    int msAcZHr;
    int MksDCJQYuv;
    int JPY7f9Td3zr;
    scanf ("%d %s %d", &msAcZHr, &Bs9jY6yao, &JPY7f9Td3zr);
    YUAqX15E = strlen (Bs9jY6yao);
    {
        {
            if ((441 - 441)) {
                return 0;
            };
        }
        HjVQqJ = YUAqX15E -(190 - 189);
        for (; (154 - 154) <= HjVQqJ;) {
            if ('0' <= Bs9jY6yao[HjVQqJ] && '9' >= Bs9jY6yao[HjVQqJ])
                ftAofd1n[YUAqX15E -(939 - 938) - HjVQqJ] = Bs9jY6yao[HjVQqJ] - '0';
            else if ('a' <= Bs9jY6yao[HjVQqJ] && Bs9jY6yao[HjVQqJ] <= 'z')
                ftAofd1n[YUAqX15E -(612 - 611) - HjVQqJ] = Bs9jY6yao[HjVQqJ] - 'a' + (938 - 928);
            else if (Bs9jY6yao[HjVQqJ] >= 'A' && 'Z' >= Bs9jY6yao[HjVQqJ])
                ftAofd1n[YUAqX15E -(139 - 138) - HjVQqJ] = Bs9jY6yao[HjVQqJ] - 'A' + (217 - 207);
            else
                ;
            HjVQqJ = HjVQqJ -(620 - 619);
        };
    }
    gj8MZJ7 = (357 - 357);
    {
        HjVQqJ = (664 - 564) - (151 - 51);
        for (; YUAqX15E > HjVQqJ;) {
            Em26Y3C = (325 - 324);
            {
                qGYq0D = (19 - 19);
                for (; qGYq0D < HjVQqJ;) {
                    qGYq0D = qGYq0D + (95 - 94);
                    Em26Y3C = Em26Y3C *(msAcZHr);
                };
            }
            gj8MZJ7 = gj8MZJ7 + ftAofd1n[HjVQqJ] * Em26Y3C;
            HjVQqJ = HjVQqJ +(670 - 669);
        };
    }
    if (gj8MZJ7 == (17 - 17))
        MksDCJQYuv = (450 - 449);
    else
        MksDCJQYuv = (779 - 779);
    {
        qGYq0D = (872 - 872);
        for (; gj8MZJ7 != (677 - 677);) {
            tkBmf5WJE6lT[qGYq0D] = gj8MZJ7 % JPY7f9Td3zr;
            qGYq0D = qGYq0D + (327 - 326);
            gj8MZJ7 = gj8MZJ7 / JPY7f9Td3zr;
        };
    }
    if (MksDCJQYuv == (471 - 470))
        ;
    {
        HjVQqJ = qGYq0D - (336 - 335);
        for (; HjVQqJ >= (960 - 960);) {
            if (tkBmf5WJE6lT[HjVQqJ] <= (149 - 140))
                Rwlueqtdo8F[qGYq0D - (376 - 375) - HjVQqJ] = tkBmf5WJE6lT[HjVQqJ] + '0';
            else
                Rwlueqtdo8F[qGYq0D - (792 - 791) - HjVQqJ] = tkBmf5WJE6lT[HjVQqJ] - (899 - 889) + 'A';
            HjVQqJ = HjVQqJ -(480 - 479);
        };
    }
    {
        HjVQqJ = (314 - 314);
        for (; HjVQqJ < qGYq0D;) {
            printf ("%c", Rwlueqtdo8F[HjVQqJ]);
            HjVQqJ = HjVQqJ +(653 - 652);
        };
    };
}

