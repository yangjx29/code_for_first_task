int main () {
    int VQlLyYWJ7HOb;
    int nfa [VQlLyYWJ7HOb];
    VQlLyYWJ7HOb = 100;
    int ZFLad8NGj3Kn [VQlLyYWJ7HOb] [16];
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
    memset (ZFLad8NGj3Kn, -100, sizeof (ZFLad8NGj3Kn));
    for (int i = 0;
    VQlLyYWJ7HOb > i; i = i + 1)
        for (int cLrEFnzW = 0;
        16 > cLrEFnzW; cLrEFnzW = cLrEFnzW + 1) {
            cin >> ZFLad8NGj3Kn[i][cLrEFnzW];
            if (ZFLad8NGj3Kn[i][0] == -1) {
                VQlLyYWJ7HOb = i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                }
                break;
            }
            if (!(0 != ZFLad8NGj3Kn[i][cLrEFnzW]))
                break;
        }
    memset (nfa, (964 - 964), sizeof (nfa));
    {
        int i = 0;
        while (VQlLyYWJ7HOb > i) {
            for (int k = 0;
            k < 16; k++)
                for (int cLrEFnzW = 0;
                16 > cLrEFnzW; cLrEFnzW++)
                    if (ZFLad8NGj3Kn[i][cLrEFnzW] == 2 * ZFLad8NGj3Kn[i][k])
                        nfa[i]++;
            i = i + 1;
        };
    }
    for (int i = 0;
    i < VQlLyYWJ7HOb; i = i + 1)
        cout << nfa[i] - 1 << endl;
    return 0;
}

