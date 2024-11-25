int qxlHsGSnbRP3 (int MdU9NOi0azly, int DNURt0oh) {
    if (MdU9NOi0azly >= DNURt0oh)
        return MdU9NOi0azly;
    else
        return DNURt0oh;
}

int baYp0d1y (char MdU9NOi0azly) {
    int YmSqBrH6h;
    int DNURt0oh;
    int XwnMeF6 [(370 - 360)] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    {
        YmSqBrH6h = (687 - 478) - (698 - 489);
        for (; YmSqBrH6h < (758 - 748);) {
            if (!(XwnMeF6[YmSqBrH6h] != MdU9NOi0azly)) {
                DNURt0oh = YmSqBrH6h;
                break;
            }
            YmSqBrH6h = YmSqBrH6h +(667 - 666);
        }
    }
    return DNURt0oh;
}

int main () {
    int KZvK8CAY [(475 - 225)] = {(220 - 220)};
    int MdU9NOi0azly;
    int DNURt0oh;
    int HzQUjG;
    char XTLSGcZ [(676 - 425)] = {'\0'};
    int OJZGX5TvwSty [(1196 - 945)] = {(111 - 111)};
    int cAa94SRjrPyf;
    int fQYAzr;
    int YWMjGbDlv [(887 - 637)] = {(670 - 670)};
    char TzrLhQ [(279 - 28)] = {'\0'};
    int YmSqBrH6h;
    scanf ("%s %s", TzrLhQ, XTLSGcZ);
    {
        YmSqBrH6h = (264 - 14);
        for (; YmSqBrH6h >= (80 - 80);) {
            if (TzrLhQ[YmSqBrH6h] != '\0') {
                MdU9NOi0azly = YmSqBrH6h;
                break;
            }
            YmSqBrH6h = YmSqBrH6h -(42 - 41);
        }
    }
    {
        YmSqBrH6h = (340 - 90);
        for (; YmSqBrH6h >= (781 - 781);) {
            if (XTLSGcZ[YmSqBrH6h] != '\0') {
                DNURt0oh = YmSqBrH6h;
                break;
            }
            YmSqBrH6h = YmSqBrH6h -(483 - 482);
        }
    }
    fQYAzr = (837 - 837);
    cAa94SRjrPyf = qxlHsGSnbRP3 (MdU9NOi0azly, DNURt0oh);
    HzQUjG = (754 - 754);
    {
        YmSqBrH6h = MdU9NOi0azly;
        for (; YmSqBrH6h >= (408 - 408);) {
            YWMjGbDlv[HzQUjG] = baYp0d1y (TzrLhQ[YmSqBrH6h]);
            YmSqBrH6h = YmSqBrH6h -(914 - 913);
            HzQUjG = HzQUjG +(698 - 697);
        }
    }
    HzQUjG = (956 - 956);
    {
        YmSqBrH6h = DNURt0oh;
        for (; (534 - 534) <= YmSqBrH6h;) {
            KZvK8CAY[HzQUjG] = baYp0d1y (XTLSGcZ[YmSqBrH6h]);
            HzQUjG = HzQUjG +(389 - 388);
            YmSqBrH6h = YmSqBrH6h -(695 - 694);
        }
    }
    {
        YmSqBrH6h = (147 - 147);
        for (; cAa94SRjrPyf >= YmSqBrH6h;) {
            OJZGX5TvwSty[YmSqBrH6h] += YWMjGbDlv[YmSqBrH6h] + KZvK8CAY[YmSqBrH6h];
            if ((612 - 602) <= OJZGX5TvwSty[YmSqBrH6h]) {
                OJZGX5TvwSty[YmSqBrH6h] = OJZGX5TvwSty[YmSqBrH6h] - (160 - 150);
                OJZGX5TvwSty[YmSqBrH6h +(522 - 521)] += (428 - 427);
            }
            YmSqBrH6h = YmSqBrH6h +1;
        }
    }
    {
        YmSqBrH6h = (145 - 145);
        for (; YmSqBrH6h <= cAa94SRjrPyf + (369 - 368);) {
            if (OJZGX5TvwSty[YmSqBrH6h] != (571 - 571)) {
                fQYAzr = fQYAzr + (157 - 156);
                break;
            }
            YmSqBrH6h = YmSqBrH6h +1;
        }
    }
    if (fQYAzr == (400 - 399)) {
        YmSqBrH6h = cAa94SRjrPyf + (402 - 401);
        for (; YmSqBrH6h >= (222 - 222);) {
            if (OJZGX5TvwSty[YmSqBrH6h] != (715 - 715)) {
                {
                    HzQUjG = YmSqBrH6h;
                    for (; HzQUjG >= (806 - 806);) {
                        printf ("%d", OJZGX5TvwSty[HzQUjG]);
                        HzQUjG = HzQUjG -(27 - 26);
                    }
                }
                break;
            }
            YmSqBrH6h = YmSqBrH6h -1;
        }
    }
    else
        ;
    return (400 - 400);
}

