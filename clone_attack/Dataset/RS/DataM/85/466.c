int main () {
    int BqPhwH;
    int qzbS0LY5ZTUW;
    int E6H2blKjG;
    int RD2XV5p0;
    char mknpZwfL [20] [20];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> BqPhwH;
    for (qzbS0LY5ZTUW = 0; BqPhwH > qzbS0LY5ZTUW; qzbS0LY5ZTUW = qzbS0LY5ZTUW + 1)
        cin >> mknpZwfL[qzbS0LY5ZTUW];
    {
        qzbS0LY5ZTUW = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (qzbS0LY5ZTUW < BqPhwH) {
            RD2XV5p0 = strlen (mknpZwfL[qzbS0LY5ZTUW]);
            if ((mknpZwfL[qzbS0LY5ZTUW][0] >= 65 && mknpZwfL[qzbS0LY5ZTUW][0] <= 90) || (mknpZwfL[qzbS0LY5ZTUW][0] >= (332 - 236) && mknpZwfL[qzbS0LY5ZTUW][0] <= 122) || (mknpZwfL[qzbS0LY5ZTUW][0] == '_')) {
                int D2Mh04CsX;
                D2Mh04CsX = 1;
                {
                    E6H2blKjG = 1;
                    while (E6H2blKjG < 20) {
                        if (!((mknpZwfL[qzbS0LY5ZTUW][E6H2blKjG] >= 65 && mknpZwfL[qzbS0LY5ZTUW][E6H2blKjG] <= 90) || (mknpZwfL[qzbS0LY5ZTUW][E6H2blKjG] >= 97 && mknpZwfL[qzbS0LY5ZTUW][E6H2blKjG] <= 122) || (mknpZwfL[qzbS0LY5ZTUW][E6H2blKjG] == '_') || (mknpZwfL[qzbS0LY5ZTUW][E6H2blKjG] >= '0' && mknpZwfL[qzbS0LY5ZTUW][E6H2blKjG] <= '9')))
                            break;
                        E6H2blKjG = E6H2blKjG +1;
                        D2Mh04CsX++;
                    };
                }
                if (D2Mh04CsX == RD2XV5p0)
                    cout << "yes" << endl;
                else
                    cout << "no" << endl;
            }
            else
                cout << "no" << endl;
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
            qzbS0LY5ZTUW = qzbS0LY5ZTUW + 1;
        };
    }
    return 0;
}

