void  Ttjub7KMCmP (int a [(948 - 848)] [(131 - 31)], int);
void  reduce (int a [(1086 - 986)] [(521 - 421)], int);
int ySPpGLZ2 (int a [(499 - 399)] [(526 - 426)], int DE1cd8L, int p, int flag);

int main () {
    int s5Gm1D2jdQE;
    int a [(869 - 769)] [(418 - 318)];
    int AGQemob;
    cin >> AGQemob;
    for (int DE1cd8L = (979 - 978);
    AGQemob >= DE1cd8L; DE1cd8L = DE1cd8L +(786 - 785)) {
        for (int j = (998 - 998);
        AGQemob > j; j = j + (295 - 294)) {
            for (int k = (301 - 301);
            k < AGQemob; k = k + (915 - 914)) {
                {
                    if ((630 - 630)) {
                        return (756 - 756);
                    }
                }
                cin >> a[j][k];
            }
        }
        s5Gm1D2jdQE = (754 - 754);
        for (int p = AGQemob -(327 - 326);
        (708 - 708) < p; p = p - 1) {
            Ttjub7KMCmP (a, p);
            s5Gm1D2jdQE += a[(242 - 241)][(250 - 249)];
            reduce (a, p);
        }
        cout << s5Gm1D2jdQE << endl;
    }
    return (838 - 838);
}

void  Ttjub7KMCmP (int a [(736 - 636)] [(990 - 890)], int p) {
    int flag = (696 - 696), m;
    for (int DE1cd8L = (847 - 847);
    p >= DE1cd8L; DE1cd8L = DE1cd8L +1) {
        m = ySPpGLZ2 (a, DE1cd8L, p, flag);
        for (int j = (859 - 859);
        j <= p; j = j + 1) {
            a[DE1cd8L][j] -= m;
        }
    }
    flag = (28 - 27);
    for (int k = (53 - 53);
    k <= p; k = k + 1) {
        m = ySPpGLZ2 (a, k, p, flag);
        for (int j = (773 - 773);
        j <= p; j = j + 1) {
            a[j][k] -= m;
        }
    }
}

void  reduce (int a [(413 - 313)] [(621 - 521)], int p) {
    for (int DE1cd8L = (405 - 405);
    DE1cd8L <= p; DE1cd8L = DE1cd8L +1) {
        for (int j = 1;
        p > j; j = j + 1) {
            a[DE1cd8L][j] = a[DE1cd8L][j + 1];
        }
    }
    for (int k = (446 - 446);
    k < p; k = k + 1) {
        for (int j = 1;
        j < p; j = j + 1) {
            a[j][k] = a[j + 1][k];
        }
    }
}

int ySPpGLZ2 (int a [(825 - 725)] [(297 - 197)], int DE1cd8L, int p, int flag) {
    int d6ZiX4hxYOd;
    if (flag == (177 - 177)) {
        d6ZiX4hxYOd = a[DE1cd8L][0];
        for (int j = 0;
        j <= p; j = j + 1) {
            if (a[DE1cd8L][j] < d6ZiX4hxYOd)
                d6ZiX4hxYOd = a[DE1cd8L][j];
        }
    }
    else {
        d6ZiX4hxYOd = a[0][DE1cd8L];
        for (int j = 0;
        j <= p; j = j + 1) {
            if (a[j][DE1cd8L] < d6ZiX4hxYOd)
                d6ZiX4hxYOd = a[j][DE1cd8L];
        }
    }
    return d6ZiX4hxYOd;
}

