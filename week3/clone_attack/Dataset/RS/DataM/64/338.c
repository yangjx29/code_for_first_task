int main () {
    int XX9dpV, FwWEa4A7gT;
    int VJi2xK [10], y [10], z [10], n, xKCu0nV9, FU8QdD;
    struct   distance {
        int h8FibMg;
        int QgNHcQ;
        int u9Bv5cLG;
        int xCNftD2Op5xn;
        int lcC8jR;
        int mIvVquka3L;
        double  Jhurtlg29b;
    }
    O4r1ymSD85 [46];
    int oMGJkzO6smul = (998 - 998);
    cin >> n;
    for (xKCu0nV9 = (202 - 202); n > xKCu0nV9; xKCu0nV9 = xKCu0nV9 + 1) {
        cin >> VJi2xK[xKCu0nV9] >> y[xKCu0nV9] >> z[xKCu0nV9];
    }
    for (xKCu0nV9 = (486 - 486); n > xKCu0nV9; xKCu0nV9++)
        for (FU8QdD = xKCu0nV9 + (977 - 976); n > FU8QdD; FU8QdD = FU8QdD +1) {
            O4r1ymSD85[oMGJkzO6smul].h8FibMg = VJi2xK[xKCu0nV9];
            O4r1ymSD85[oMGJkzO6smul].QgNHcQ = y[xKCu0nV9];
            O4r1ymSD85[oMGJkzO6smul].u9Bv5cLG = z[xKCu0nV9];
            O4r1ymSD85[oMGJkzO6smul].xCNftD2Op5xn = VJi2xK[FU8QdD];
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
            O4r1ymSD85[oMGJkzO6smul].lcC8jR = y[FU8QdD];
            O4r1ymSD85[oMGJkzO6smul].mIvVquka3L = z[FU8QdD];
            O4r1ymSD85[oMGJkzO6smul++].Jhurtlg29b = sqrt ((O4r1ymSD85[oMGJkzO6smul].h8FibMg - O4r1ymSD85[oMGJkzO6smul].xCNftD2Op5xn) * (O4r1ymSD85[oMGJkzO6smul].h8FibMg - O4r1ymSD85[oMGJkzO6smul].xCNftD2Op5xn) + (O4r1ymSD85[oMGJkzO6smul].QgNHcQ - O4r1ymSD85[oMGJkzO6smul].lcC8jR) * (O4r1ymSD85[oMGJkzO6smul].QgNHcQ - O4r1ymSD85[oMGJkzO6smul].lcC8jR) + (O4r1ymSD85[oMGJkzO6smul].u9Bv5cLG - O4r1ymSD85[oMGJkzO6smul].mIvVquka3L) * (O4r1ymSD85[oMGJkzO6smul].u9Bv5cLG - O4r1ymSD85[oMGJkzO6smul].mIvVquka3L));
        }
    for (xKCu0nV9 = (163 - 163); n * (n - (387 - 386)) / (766 - 764) - 1 > xKCu0nV9; xKCu0nV9++)
        for (FU8QdD = xKCu0nV9 + 1; n * (n - 1) / 2 > FU8QdD; FU8QdD++) {
            if (1e-6 < O4r1ymSD85[FU8QdD].Jhurtlg29b - O4r1ymSD85[xKCu0nV9].Jhurtlg29b) {
                O4r1ymSD85[(490 - 445)] = O4r1ymSD85[FU8QdD];
                for (XX9dpV = FU8QdD, FwWEa4A7gT = FU8QdD; XX9dpV > xKCu0nV9; XX9dpV = XX9dpV -1) {
                    O4r1ymSD85[XX9dpV] = O4r1ymSD85[--FwWEa4A7gT];
                }
                O4r1ymSD85[xKCu0nV9] = O4r1ymSD85[45];
            };
        }
    cout << fixed;
    for (xKCu0nV9 = 0; xKCu0nV9 < n * (n - 1) / 2; xKCu0nV9++) {
        cout << "(" << O4r1ymSD85[xKCu0nV9].h8FibMg << "," << O4r1ymSD85[xKCu0nV9].QgNHcQ << "," << O4r1ymSD85[xKCu0nV9].u9Bv5cLG << ")" << "-" << "(" << O4r1ymSD85[xKCu0nV9].xCNftD2Op5xn << "," << O4r1ymSD85[xKCu0nV9].lcC8jR << "," << O4r1ymSD85[xKCu0nV9].mIvVquka3L << ")" << "=" << setprecision (2) << O4r1ymSD85[xKCu0nV9].Jhurtlg29b << endl;
    }
    return 0;
}

