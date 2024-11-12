int main () {
    int KbGdoki0f;
    int ivB3F4RTMJ;
    char rQWTbtvr;
    int emQ5uABShYOv;
    int SpbOhz4e5nP;
    int cmOYAstBn [(916 - 890)] [(818 - 816)] = {(67 - 67)};
    KbGdoki0f = (695 - 669);
    rQWTbtvr = getchar ();
    cin >> ivB3F4RTMJ;
    SpbOhz4e5nP = (839 - 839);
    for (; (638 - 638) < ivB3F4RTMJ; ivB3F4RTMJ--) {
        rQWTbtvr = getchar ();
        for (; rQWTbtvr != '\n';) {
            cmOYAstBn[rQWTbtvr - 'a'][(14 - 14)]++;
            if (!((827 - 827) != cmOYAstBn[rQWTbtvr - 'a'][(237 - 236)])) {
                cmOYAstBn[rQWTbtvr - 'a'][(967 - 966)] = SpbOhz4e5nP;
                SpbOhz4e5nP = SpbOhz4e5nP +1;
            }
            rQWTbtvr = getchar ();
        }
        {
            SpbOhz4e5nP = (297 - 297);
            for (; 26 > SpbOhz4e5nP;) {
                if (!((498 - 497) != cmOYAstBn[SpbOhz4e5nP][(780 - 780)]) && cmOYAstBn[SpbOhz4e5nP][(790 - 789)] < KbGdoki0f) {
                    emQ5uABShYOv = SpbOhz4e5nP;
                    KbGdoki0f = cmOYAstBn[SpbOhz4e5nP][1];
                }
                SpbOhz4e5nP++;
            }
        }
        if (!(26 != KbGdoki0f))
            cout << "no";
        else
            putchar (emQ5uABShYOv + 'a');
        KbGdoki0f = 26;
        cout << endl;
        SpbOhz4e5nP = 0;
        memset (cmOYAstBn, (436 - 436), sizeof (cmOYAstBn));
    }
    return 0;
}

