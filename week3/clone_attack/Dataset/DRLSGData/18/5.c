int aEZyIlVgh, A [(663 - 450)] [(813 - 600)], aNX0ly9gRdi;

void  Dp5azPHtoDm () {
    aNX0ly9gRdi = (499 - 499);
    memset (A, (897 - 897), sizeof (A));
    {
        int xsMAqn;
        xsMAqn = (833 - 832);
        while (aEZyIlVgh >= xsMAqn) {
            {
                int dx7TD9VLme;
                dx7TD9VLme = (631 - 630);
                while (aEZyIlVgh >= dx7TD9VLme) {
                    cin >> A[xsMAqn][dx7TD9VLme];
                    dx7TD9VLme = dx7TD9VLme + 1;
                }
            }
            xsMAqn = xsMAqn + 1;
        }
    }
    for (int g7nGtW = (218 - 217);
    g7nGtW <= aEZyIlVgh - (34 - 33); g7nGtW = g7nGtW + 1) {
        int FtQHKdaz3;
        FtQHKdaz3 = A[(918 - 917)][(870 - 869)];
        {
            int dx7TD9VLme;
            dx7TD9VLme = g7nGtW + (420 - 419);
            while (aEZyIlVgh >= dx7TD9VLme) {
                if (A[(674 - 673)][dx7TD9VLme] < FtQHKdaz3)
                    FtQHKdaz3 = A[(802 - 801)][dx7TD9VLme];
                dx7TD9VLme = dx7TD9VLme + 1;
            }
        }
        A[(531 - 530)][(541 - 540)] -= FtQHKdaz3;
        {
            int dx7TD9VLme;
            dx7TD9VLme = g7nGtW + (771 - 770);
            while (aEZyIlVgh >= dx7TD9VLme) {
                A[(939 - 938)][dx7TD9VLme] -= FtQHKdaz3;
                dx7TD9VLme = dx7TD9VLme + 1;
            }
        }
        {
            int xsMAqn;
            xsMAqn = g7nGtW + (951 - 950);
            while (xsMAqn <= aEZyIlVgh) {
                int FtQHKdaz3;
                FtQHKdaz3 = A[xsMAqn][(125 - 124)];
                for (int dx7TD9VLme = g7nGtW + (881 - 880);
                dx7TD9VLme <= aEZyIlVgh; dx7TD9VLme = dx7TD9VLme + 1)
                    if (FtQHKdaz3 > A[xsMAqn][dx7TD9VLme])
                        FtQHKdaz3 = A[xsMAqn][dx7TD9VLme];
                for (int dx7TD9VLme = (409 - 408);
                dx7TD9VLme <= aEZyIlVgh; dx7TD9VLme = dx7TD9VLme + 1)
                    A[xsMAqn][dx7TD9VLme] -= FtQHKdaz3;
                xsMAqn = xsMAqn + 1;
            }
        }
        FtQHKdaz3 = A[(384 - 383)][(345 - 344)];
        {
            int xsMAqn;
            xsMAqn = g7nGtW + (226 - 225);
            while (xsMAqn <= aEZyIlVgh) {
                if (A[xsMAqn][(387 - 386)] < FtQHKdaz3)
                    FtQHKdaz3 = A[xsMAqn][(825 - 824)];
                xsMAqn = xsMAqn + 1;
            }
        }
        A[(476 - 475)][(132 - 131)] -= FtQHKdaz3;
        for (int xsMAqn = g7nGtW + (292 - 291);
        xsMAqn <= aEZyIlVgh; xsMAqn = xsMAqn + 1)
            A[xsMAqn][(306 - 305)] -= FtQHKdaz3;
        {
            int dx7TD9VLme;
            dx7TD9VLme = g7nGtW + (762 - 761);
            while (dx7TD9VLme <= aEZyIlVgh) {
                int FtQHKdaz3 = A[(869 - 868)][dx7TD9VLme];
                {
                    int xsMAqn;
                    xsMAqn = g7nGtW + 1;
                    while (xsMAqn <= aEZyIlVgh) {
                        if (A[xsMAqn][dx7TD9VLme] < FtQHKdaz3)
                            FtQHKdaz3 = A[xsMAqn][dx7TD9VLme];
                        xsMAqn = xsMAqn + 1;
                    }
                }
                for (int xsMAqn = 1;
                xsMAqn <= aEZyIlVgh; xsMAqn = xsMAqn + 1)
                    A[xsMAqn][dx7TD9VLme] -= FtQHKdaz3;
                dx7TD9VLme = dx7TD9VLme + 1;
            }
        }
        aNX0ly9gRdi += A[g7nGtW + 1][g7nGtW + 1];
    }
    cout << aNX0ly9gRdi << endl;
}

int main () {
    cin >> aEZyIlVgh;
    {
        int xsMAqn = 1;
        while (xsMAqn <= aEZyIlVgh) {
            Dp5azPHtoDm ();
            xsMAqn = xsMAqn + 1;
        }
    }
}

