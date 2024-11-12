int main () {
    char s0fg93 [(1126 - 621)], YBhlFnzk [505];
    int b = 0, ImRpxMILiHaO, len1, T8O0ryf4oJ, JBHsEWcQ = 0, c;
    double  sjrN0v;
    scanf ("%lf", &sjrN0v);
    scanf ("%s%s", s0fg93, YBhlFnzk);
    len1 = strlen (s0fg93);
    T8O0ryf4oJ = strlen (YBhlFnzk);
    if (!(T8O0ryf4oJ == len1))
        JBHsEWcQ = 1;
    {
        c = 0;
        while (len1 > c) {
            if (!('A' == s0fg93[c]) && !('T' == s0fg93[c]) && !('C' == s0fg93[c]) && !('G' == s0fg93[c]) || !('A' == YBhlFnzk[c]) && YBhlFnzk[c] != 'T' && YBhlFnzk[c] != 'C' && YBhlFnzk[c] != 'G')
                JBHsEWcQ = 1;
            c++;
        };
    }
    if (JBHsEWcQ) {
    }
    else {
        {
            ImRpxMILiHaO = 0;
            while (ImRpxMILiHaO < len1) {
                if (s0fg93[ImRpxMILiHaO] == YBhlFnzk[ImRpxMILiHaO]) {
                    b++;
                }
                ImRpxMILiHaO++;
            };
        }
        if (b * 1.0 / len1 > sjrN0v) {
        }
        else {
        };
    }
    return 0;
}

