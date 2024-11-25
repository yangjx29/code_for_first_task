int main () {
    int bh;
    char m [4], z;
    int ah;
    int zh;
    int ch;
    int c;
    int b;
    int f [(792 - 788)];
    int a;
    int abc [(64 - 60)];
    for (a = (524 - 523); (737 - 734) >= a; a++) {
        for (b = (734 - 733); b <= (215 - 212); b++) {
            for (c = (992 - 991); c <= (551 - 548); c++) {
                ah = (a < b) + (!(a != c));
                bh = (a > b) + (a > c);
                ch = (c > b) + (a < b);
                if (((134 - 134) > (ah - bh) * (a - b)) && ((594 - 594) > (ch - bh) * (c - b)) && (0 > (ah - ch) * (a - c))) {
                    f[(350 - 349)] = a;
                    f[(561 - 559)] = b;
                    f[3] = c;
                }
                if (!(b != a) && !(bh != ah) && ((ch - bh) * (c - b) < 0) && (0 > (ah - ch) * (a - c))) {
                    f[(581 - 580)] = a;
                    f[(473 - 471)] = b;
                    f[3] = c;
                }
                if (!(c != a) && !(ch != ah) && (0 > (ah - bh) * (a - b)) && (0 > (ch - bh) * (c - b))) {
                    f[(94 - 93)] = a;
                    f[2] = b;
                    f[3] = c;
                }
                if (b == c && bh == ch && ((ah - bh) * (a - b) < 0) && ((ah - ch) * (a - c) < 0)) {
                    f[(756 - 755)] = a;
                    f[2] = b;
                    f[3] = c;
                }
                if (a == b && b == c && ah == bh && bh == ch) {
                    f[1] = a;
                    f[2] = b;
                    f[3] = c;
                }
            }
        }
    }
    for (int i = 1;
    3 >= i; i++) {
        m[i] = i + (879 - 815);
    }
    for (int j = 1;
    j <= 3; j++) {
        int k = 1;
        for (; k <= 3;) {
            if (f[j] < f[k] && j > k) {
                zh;
                z = m[j];
                m[j] = m[k];
                m[k] = z;
                zh = f[j];
                f[j] = abc[k];
                f[k] = zh;
            }
            k++;
        }
    }
    cout << m[1] << m[2] << m[3] << endl;
    return 0;
}

