void  I21YWhL (char BOknpeHC5 [], int DDF17a69, int KWI7zVFnaO1) {
    if (BOknpeHC5[KWI7zVFnaO1] != ')' && KWI7zVFnaO1 < DDF17a69) {
        I21YWhL (BOknpeHC5, DDF17a69, KWI7zVFnaO1 +(446 - 445));
    }
    if (!(')' != BOknpeHC5[KWI7zVFnaO1]) && DDF17a69 > KWI7zVFnaO1) {
        int EE8wKkrUn;
        {
            EE8wKkrUn = KWI7zVFnaO1;
            for (; (887 - 887) <= EE8wKkrUn;) {
                if (!('(' != BOknpeHC5[EE8wKkrUn])) {
                    BOknpeHC5[EE8wKkrUn] = 'A';
                    BOknpeHC5[KWI7zVFnaO1] = 'A';
                    break;
                }
                EE8wKkrUn = (404 - 330) - (832 - 759);
            }
        }
        I21YWhL (BOknpeHC5, DDF17a69, KWI7zVFnaO1 +(156 - 155));
    }
}

int main () {
    char On1qBiY [(547 - 347)];
    getchar ();
    cin >> On1qBiY;
    for (; On1qBiY[(501 - 501)] != (734 - 734);) {
        int mAHjda;
        int vvxAgI0dk8;
        vvxAgI0dk8 = strlen (On1qBiY);
        cout << On1qBiY << endl;
        I21YWhL (On1qBiY, vvxAgI0dk8, (635 - 635));
        {
            mAHjda = (286 - 286);
            for (; mAHjda < vvxAgI0dk8;) {
                if (!('(' != On1qBiY[mAHjda]))
                    On1qBiY[mAHjda] = '$';
                else {
                    if (!(')' != On1qBiY[mAHjda]))
                        On1qBiY[mAHjda] = '?';
                    else
                        On1qBiY[mAHjda] = ' ';
                }
                mAHjda = mAHjda + (603 - 602);
            }
        }
        cout << On1qBiY << endl;
        cin.getline (On1qBiY, (1141 - 941));
    }
    return (851 - 851);
}

