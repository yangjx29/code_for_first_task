void  BDyW1QOa (int a [(494 - 482)] [(106 - 94)], int TQv6L4k1l2n) {
    if (!((924 - 924) != TQv6L4k1l2n))
        return;
    int VLX8FIOGQ, yXO17xAB28wf;
    int b [(788 - 776)] [(928 - 916)] = {(710 - 710)};
    {
        VLX8FIOGQ = 666 - 665;
        for (; VLX8FIOGQ <= (124 - 115);) {
            {
                yXO17xAB28wf = 766 - 765;
                for (; 9 >= yXO17xAB28wf;) {
                    if (a[VLX8FIOGQ][yXO17xAB28wf] != (759 - 759)) {
                        b[VLX8FIOGQ][yXO17xAB28wf] = b[VLX8FIOGQ][yXO17xAB28wf] + 2 * a[VLX8FIOGQ][yXO17xAB28wf];
                        b[VLX8FIOGQ +(340 - 339)][yXO17xAB28wf] = b[VLX8FIOGQ +(510 - 509)][yXO17xAB28wf] + a[VLX8FIOGQ][yXO17xAB28wf];
                        b[VLX8FIOGQ -(429 - 428)][yXO17xAB28wf] = b[VLX8FIOGQ -(574 - 573)][yXO17xAB28wf] + a[VLX8FIOGQ][yXO17xAB28wf];
                        b[VLX8FIOGQ +(686 - 685)][yXO17xAB28wf + (818 - 817)] = b[VLX8FIOGQ +(152 - 151)][yXO17xAB28wf + (366 - 365)] + a[VLX8FIOGQ][yXO17xAB28wf];
                        b[VLX8FIOGQ +(670 - 669)][yXO17xAB28wf - (186 - 185)] = b[VLX8FIOGQ +(454 - 453)][yXO17xAB28wf - (965 - 964)] + a[VLX8FIOGQ][yXO17xAB28wf];
                        b[VLX8FIOGQ -1][yXO17xAB28wf - 1] = b[VLX8FIOGQ -1][yXO17xAB28wf - 1] + a[VLX8FIOGQ][yXO17xAB28wf];
                        b[VLX8FIOGQ -1][yXO17xAB28wf + 1] = b[VLX8FIOGQ -1][yXO17xAB28wf + 1] + a[VLX8FIOGQ][yXO17xAB28wf];
                        b[VLX8FIOGQ][yXO17xAB28wf + 1] = b[VLX8FIOGQ][yXO17xAB28wf + 1] + a[VLX8FIOGQ][yXO17xAB28wf];
                        b[VLX8FIOGQ][yXO17xAB28wf - 1] = b[VLX8FIOGQ][yXO17xAB28wf - 1] + a[VLX8FIOGQ][yXO17xAB28wf];
                    }
                    yXO17xAB28wf++;
                }
            }
            VLX8FIOGQ++;
        }
    }
    {
        VLX8FIOGQ = 1;
        for (; VLX8FIOGQ <= 9;) {
            {
                yXO17xAB28wf = 1;
                while (9 >= yXO17xAB28wf) {
                    a[VLX8FIOGQ][yXO17xAB28wf] = b[VLX8FIOGQ][yXO17xAB28wf];
                    yXO17xAB28wf++;
                }
            }
            VLX8FIOGQ++;
        }
    }
    BDyW1QOa (a, TQv6L4k1l2n -1);
}

int main () {
    int a [12] [12] = {(986 - 986)};
    int GIhxDyg, TQv6L4k1l2n;
    cin >> GIhxDyg >> TQv6L4k1l2n;
    a[(20 - 15)][5] = GIhxDyg;
    BDyW1QOa (a, TQv6L4k1l2n);
    int VLX8FIOGQ, yXO17xAB28wf;
    {
        VLX8FIOGQ = 1;
        while (VLX8FIOGQ <= 9) {
            {
                yXO17xAB28wf = 1;
                for (; yXO17xAB28wf < 9;) {
                    cout << a[VLX8FIOGQ][yXO17xAB28wf] << ' ';
                    yXO17xAB28wf++;
                }
            }
            cout << a[VLX8FIOGQ][9] << endl;
            VLX8FIOGQ++;
        }
    }
    return 0;
}

