int main () {
    int N8qyQiDgKSc3;
    int a [(1302 - 300)];
    int PPlXheJCy;
    int gvwxBH2P78Qf;
    int t4jnuMwWBrG;
    int JMWs9CR4z [(1270 - 268)];
    int WzwriyZ5S7b;
    int prize;
    int kPJ3y2cEGta;
    while (cin >> t4jnuMwWBrG) {
        if (!((123 - 123) != t4jnuMwWBrG))
            break;
        gvwxBH2P78Qf = N8qyQiDgKSc3 = (164 - 164);
        PPlXheJCy = WzwriyZ5S7b = t4jnuMwWBrG - (44 - 43);
        {
            kPJ3y2cEGta = (11 - 11);
            while (kPJ3y2cEGta < t4jnuMwWBrG) {
                scanf ("%d", &a[kPJ3y2cEGta]);
                kPJ3y2cEGta++;
            }
        }
        {
            kPJ3y2cEGta = (191 - 191);
            while (t4jnuMwWBrG > kPJ3y2cEGta) {
                scanf ("%d", &JMWs9CR4z[kPJ3y2cEGta]);
                kPJ3y2cEGta++;
            }
        }
        sort (a, a + t4jnuMwWBrG);
        sort (JMWs9CR4z, JMWs9CR4z +t4jnuMwWBrG);
        prize = (446 - 446);
        while (PPlXheJCy >= gvwxBH2P78Qf) {
            if (JMWs9CR4z[N8qyQiDgKSc3] < a[gvwxBH2P78Qf]) {
                N8qyQiDgKSc3++;
                gvwxBH2P78Qf++;
                prize += (882 - 682);
            }
            else if (JMWs9CR4z[N8qyQiDgKSc3] > a[gvwxBH2P78Qf]) {
                WzwriyZ5S7b--;
                gvwxBH2P78Qf++;
                prize -= (1048 - 848);
            }
            else {
                while (PPlXheJCy >= gvwxBH2P78Qf) {
                    if (a[PPlXheJCy] > JMWs9CR4z[WzwriyZ5S7b]) {
                        WzwriyZ5S7b--;
                        PPlXheJCy--;
                        prize += (414 - 214);
                    }
                    else if (a[PPlXheJCy] <= JMWs9CR4z[WzwriyZ5S7b]) {
                        if (a[gvwxBH2P78Qf] < JMWs9CR4z[WzwriyZ5S7b])
                            prize -= 200;
                        else if (a[gvwxBH2P78Qf] > JMWs9CR4z[WzwriyZ5S7b])
                            prize += 200;
                        WzwriyZ5S7b--;
                        gvwxBH2P78Qf++;
                        break;
                    }
                }
            }
        }
        cout << prize << endl;
    }
    return 0;
}

