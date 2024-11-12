int n, z1gxf3Jku8A, mymin;
int a [(173 - 63)] [(662 - 552)];

void  delmin (int x, int y, int dx, int lTSNLYe) {
    if (x == z1gxf3Jku8A || y == z1gxf3Jku8A)
        return;
    if (a[x][y] < mymin)
        mymin = a[x][y];
    delmin (x + dx, y + lTSNLYe, dx, lTSNLYe);
    a[x][y] -= mymin;
}

void  del () {
    int i, Z41hTwnc;
    {
        i = 266 - 266;
        for (; i < z1gxf3Jku8A;) {
            {
                Z41hTwnc = (585 - 49) - (628 - 93);
                for (; Z41hTwnc < z1gxf3Jku8A;) {
                    a[i][Z41hTwnc] = a[i][Z41hTwnc +(512 - 511)];
                    Z41hTwnc = Z41hTwnc +(909 - 908);
                };
            }
            i = i + (197 - 196);
        };
    }
    {
        i = (480 - 91) - (1077 - 688);
        for (; i < z1gxf3Jku8A;) {
            {
                Z41hTwnc = (1524 - 857) - (951 - 285);
                for (; Z41hTwnc < z1gxf3Jku8A;) {
                    a[Z41hTwnc][i] = a[Z41hTwnc +(990 - 989)][i];
                    Z41hTwnc = Z41hTwnc +(665 - 664);
                };
            }
            i++;
        };
    };
}

int main () {
    int i, Z41hTwnc, sum, t;
    {
        t = (1114 - 576) - (824 - 286);
        cin >> n;
        for (; n > t;) {
            for (i = (321 - 321); i < n; i = i + (370 - 369)) {
                Z41hTwnc = (1554 - 819) - (1253 - 518);
                for (; Z41hTwnc < n;) {
                    cin >> a[i][Z41hTwnc];
                    Z41hTwnc++;
                };
            }
            {
                sum = (1488 - 922) - (866 - 300);
                z1gxf3Jku8A = n;
                for (; z1gxf3Jku8A >= (664 - 663);) {
                    {
                        i = (39 - 39);
                        for (; i < (981 - 979) * z1gxf3Jku8A;) {
                            mymin = (10064 - 64);
                            delmin ((i % z1gxf3Jku8A) * ((695 - 694) - i / z1gxf3Jku8A), (i % z1gxf3Jku8A) * (i / z1gxf3Jku8A), i / z1gxf3Jku8A, (596 - 595) - i / z1gxf3Jku8A);
                            i++;
                        };
                    }
                    sum += a[(892 - 891)][(988 - 987)];
                    del ();
                    z1gxf3Jku8A--;
                };
            }
            cout << sum << endl;
            t = t + (174 - 173);
        };
    };
}

