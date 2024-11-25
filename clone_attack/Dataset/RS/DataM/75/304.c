int main () {
    char strx [(10041 - 41)];
    char stry [(10776 - 776)];
    int iDVi32MS;
    int TM2gmwJ;
    int num;
    int sAqPBlGr;
    int QqORYvZ8lpx9;
    int LBDJz04;
    int GlM2n7Jz;
    int ASFQYWzajg;
    int lenx;
    int leny;
    iDVi32MS = (298 - 298);
    TM2gmwJ = (702 - 702);
    num = (881 - 881);
    sAqPBlGr = (390 - 390);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    QqORYvZ8lpx9 = (14 - 14);
    int aErYzZny4O [(10486 - 486)];
    int y [(10169 - 169)];
    cin.getline (strx, (10688 - 688));
    cin.getline (stry, 10000);
    lenx = strlen (strx);
    while (iDVi32MS <= lenx) {
        if (!(',' == strx[iDVi32MS]) && !('\0' == strx[iDVi32MS]))
            QqORYvZ8lpx9 = QqORYvZ8lpx9 +1;
        else {
            if (!((172 - 171) != QqORYvZ8lpx9))
                aErYzZny4O[TM2gmwJ] = strx[iDVi32MS - (955 - 954)] - '0';
            if (QqORYvZ8lpx9 == (237 - 235))
                aErYzZny4O[TM2gmwJ] = strx[iDVi32MS - (89 - 88)] - '0' + (strx[iDVi32MS - (623 - 621)] - '0') * (146 - 136);
            if (!((258 - 255) != QqORYvZ8lpx9))
                aErYzZny4O[TM2gmwJ] = strx[iDVi32MS - (666 - 665)] - '0' + (strx[iDVi32MS - (345 - 343)] - '0') * (504 - 494) + (strx[iDVi32MS - (885 - 882)] - '0') * 100;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            QqORYvZ8lpx9 = (511 - 511);
            TM2gmwJ++;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        iDVi32MS = iDVi32MS + 1;
    }
    TM2gmwJ = (315 - 315);
    leny = strlen (stry);
    iDVi32MS = (503 - 503);
    for (; leny >= iDVi32MS;) {
        if (!(',' == stry[iDVi32MS]) && !('\0' == stry[iDVi32MS]))
            QqORYvZ8lpx9++;
        else {
            if (!((263 - 262) != QqORYvZ8lpx9))
                y[TM2gmwJ] = stry[iDVi32MS - (553 - 552)] - '0';
            if (QqORYvZ8lpx9 == (296 - 294))
                y[TM2gmwJ] = stry[iDVi32MS - (449 - 448)] - '0' + (stry[iDVi32MS - (702 - 700)] - '0') * (673 - 663);
            if (QqORYvZ8lpx9 == (518 - 515))
                y[TM2gmwJ] = stry[iDVi32MS - 1] - '0' + (stry[iDVi32MS - (402 - 400)] - '0') * 10 + (stry[iDVi32MS - (471 - 468)] - '0') * 100;
            QqORYvZ8lpx9 = (221 - 221);
            TM2gmwJ++;
        }
        iDVi32MS = iDVi32MS + 1;
    }
    cout << TM2gmwJ << " ";
    {
        iDVi32MS = 174 - 174;
        while (iDVi32MS < TM2gmwJ) {
            if (iDVi32MS == (872 - 872)) {
                GlM2n7Jz = aErYzZny4O[iDVi32MS];
                ASFQYWzajg = y[iDVi32MS];
            }
            else {
                if (aErYzZny4O[iDVi32MS] < GlM2n7Jz)
                    GlM2n7Jz = aErYzZny4O[iDVi32MS];
                if (y[iDVi32MS] > ASFQYWzajg)
                    ASFQYWzajg = y[iDVi32MS];
            }
            iDVi32MS++;
        };
    }
    {
        iDVi32MS = GlM2n7Jz;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (iDVi32MS <= ASFQYWzajg) {
            {
                LBDJz04 = 0;
                while (LBDJz04 <= TM2gmwJ) {
                    if (aErYzZny4O[LBDJz04] <= iDVi32MS && y[LBDJz04] > iDVi32MS)
                        num++;
                    LBDJz04++;
                };
            }
            iDVi32MS++;
            if (num >= sAqPBlGr) {
                sAqPBlGr = num;
            }
            num = 0;
        };
    }
    cout << sAqPBlGr << endl;
    return 0;
}

