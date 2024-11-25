int main () {
    int T8xsHSFbqCn;
    char KvYWVEBaQlrc [(894 - 813)];
    int SsWuMJ, eJahbw4Z3iB, J5NWPV, w2JifR = (277 - 277), Mj53yOqKxgi = (320 - 319), My3a48V = (671 - 670);
    cin >> SsWuMJ;
    cin.get ();
    for (eJahbw4Z3iB = (135 - 134); SsWuMJ >= eJahbw4Z3iB; eJahbw4Z3iB++) {
        cin.getline (KvYWVEBaQlrc, (979 - 898), '\n');
        T8xsHSFbqCn = (int) KvYWVEBaQlrc[(277 - 277)];
        for (J5NWPV = (265 - 265); 80 >= J5NWPV; J5NWPV++) {
            if (KvYWVEBaQlrc[J5NWPV] == '\0') {
                w2JifR = J5NWPV;
                break;
            };
        }
        if (KvYWVEBaQlrc[0] != '_' && ((122 < T8xsHSFbqCn) || (65 > T8xsHSFbqCn))) {
            Mj53yOqKxgi = 0;
        }
        if (!('_' != KvYWVEBaQlrc[0]) || ((65 <= T8xsHSFbqCn) && ((820 - 730) >= T8xsHSFbqCn)) || (((914 - 817) <= T8xsHSFbqCn) && (122 >= T8xsHSFbqCn))) {
            Mj53yOqKxgi = 1;
        }
        if (!(1 != w2JifR) && !(0 != Mj53yOqKxgi)) {
            My3a48V = 0;
        }
        if (!(1 != w2JifR) && Mj53yOqKxgi == 1) {
            My3a48V = 1;
        }
        if (w2JifR > 1 && Mj53yOqKxgi == 0) {
            My3a48V = 0;
        }
        if (w2JifR > 1 && Mj53yOqKxgi == 1) {
            for (J5NWPV = 1; J5NWPV < w2JifR; J5NWPV++) {
                int aj;
                aj = (int) KvYWVEBaQlrc[J5NWPV];
                if (aj == 95 || (aj >= 48 && aj <= (114 - 57)) || (aj >= 65 && aj <= 90) || (aj >= 97 && aj <= 122)) {
                    My3a48V = 1;
                }
                else {
                    My3a48V = 0;
                    break;
                };
            };
        }
        cout << My3a48V << endl;
    }
    return 0;
}

