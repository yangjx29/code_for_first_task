void  GQhB7ykYv6K (char pzOpdDsIKk [], char m, char nevNk76Q4psl) {
    int nDeInWE4chz8 = 0, k, DuA3In, G0QPJl;
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
    for (; !('\0' == pzOpdDsIKk[nDeInWE4chz8]);) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(nevNk76Q4psl == pzOpdDsIKk[nDeInWE4chz8]))
            nDeInWE4chz8++;
        else {
            G0QPJl = nDeInWE4chz8;
            for (; pzOpdDsIKk[nDeInWE4chz8] != m;)
                nDeInWE4chz8 = nDeInWE4chz8 - 1;
            DuA3In = nDeInWE4chz8;
            cout << DuA3In << " " << G0QPJl << endl;
            pzOpdDsIKk[DuA3In] = ' ';
            pzOpdDsIKk[G0QPJl] = ' ';
            GQhB7ykYv6K (pzOpdDsIKk, m, nevNk76Q4psl);
        };
    };
}

int main () {
    char pzOpdDsIKk [100], m, nevNk76Q4psl;
    int t = 1;
    cin >> pzOpdDsIKk;
    m = pzOpdDsIKk[0];
    for (; 1;) {
        if (pzOpdDsIKk[t] == m)
            t++;
        else {
            nevNk76Q4psl = pzOpdDsIKk[t];
            break;
        };
    }
    GQhB7ykYv6K (pzOpdDsIKk, m, nevNk76Q4psl);
    return 0;
}

