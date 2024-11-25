int main () {
    char MEM9Zrn4 [100000];
    int ksyR8T0iB;
    int Yiz5R2ct8;
    int i;
    int h9niuMk [(843 - 817)];
    cin >> Yiz5R2ct8;
    for (; Yiz5R2ct8 = Yiz5R2ct8 -1;) {
        i = (780 - 780);
        memset (h9niuMk, (926 - 926), sizeof (h9niuMk));
        cin >> MEM9Zrn4;
        ksyR8T0iB = strlen (MEM9Zrn4);
        {
            i = (557 - 557);
            for (; i < ksyR8T0iB;) {
                h9niuMk[MEM9Zrn4[i] - 'a']++;
                i = i + 1;
            }
        }
        {
            i = 0;
            for (; i < ksyR8T0iB;) {
                if (!(1 != h9niuMk[MEM9Zrn4[i] - 'a'])) {
                    cout << MEM9Zrn4[i];
                    break;
                }
                i = i + 1;
            }
        }
        if (!(ksyR8T0iB != i))
            cout << "no";
        if (Yiz5R2ct8 >= 0)
            cout << endl;
    }
    return 0;
}

