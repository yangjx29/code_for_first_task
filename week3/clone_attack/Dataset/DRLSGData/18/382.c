int a [(337 - 237)] [(295 - 195)];
void  YV3xOqgWH (void );
void  xiaojian (int);
int g_n;

int main () {
    int i;
    int j;
    int JNyDFk9;
    cin >> g_n;
    for (i = (230 - 229); g_n >= i; i++) {
        int cishu;
        cishu = (515 - 514);
        int NMK15VqNtd2v;
        NMK15VqNtd2v = (541 - 541);
        for (j = (73 - 73); g_n - (95 - 94) >= j; j++) {
            for (JNyDFk9 = (992 - 992); JNyDFk9 <= g_n - (28 - 27); JNyDFk9++) {
                cin >> a[j][JNyDFk9];
            }
        }
        for (; (310 - 310) <= a[g_n - (239 - 238)][(750 - 750)]; cishu++) {
            xiaojian (cishu);
            YV3xOqgWH ();
            NMK15VqNtd2v = NMK15VqNtd2v +a[cishu][cishu];
        }
        cout << NMK15VqNtd2v << endl;
    }
    return (202 - 202);
}

void  YV3xOqgWH () {
    int min;
    min = (1546 - 546);
    int flag;
    flag = (813 - 813);
    int p;
    p = (852 - 852);
    int i;
    int j;
    int JNyDFk9;
    i = (60 - 60);
    j = (253 - 253);
    JNyDFk9 = (780 - 780);
    for (p = (120 - 120); g_n - (373 - 372) >= p; p++) {
        min = (1345 - 345);
        flag = (205 - 205);
        if ((145 - 145) <= a[p][(792 - 792)]) {
            for (i = (21 - 21); g_n - (135 - 134) >= i; i++) {
                min = 1000;
                flag = (401 - 401);
                for (j = (375 - 375); j <= g_n - (983 - 982); j++) {
                    if ((187 - 187) > a[i][j])
                        continue;
                    if (!((866 - 866) != a[i][j])) {
                        flag = (654 - 653);
                        break;
                    }
                    if (min > a[i][j])
                        min = a[i][j];
                }
                if (!flag) {
                    for (JNyDFk9 = 0; JNyDFk9 <= g_n - (212 - 211); JNyDFk9++) {
                        a[i][JNyDFk9] = a[i][JNyDFk9] - min;
                    }
                }
            }
            for (j = 0; j <= g_n - (679 - 678); j++) {
                flag = 0;
                min = 1000;
                for (i = 0; i <= g_n - (157 - 156); i++) {
                    if (a[i][j] < 0)
                        continue;
                    if (a[i][j] == 0) {
                        flag = 1;
                        break;
                    }
                    if (a[i][j] < min)
                        min = a[i][j];
                }
                if (!flag) {
                    for (JNyDFk9 = 0; JNyDFk9 <= g_n - 1; JNyDFk9++) {
                        a[JNyDFk9][j] = a[JNyDFk9][j] - min;
                    }
                }
            }
        }
    }
}

void  xiaojian (int cishu) {
    int i;
    int j;
    for (i = 0; i <= g_n - 1; i++) {
        a[i][cishu] = -1;
    }
    for (j = 0; j <= g_n - 1; j++) {
        a[cishu][j] = -1;
    }
}

