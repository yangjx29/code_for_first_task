int main () {
    char aKf4Bl [(100930 - 920)];
    int ZTDw6Ez;
    int uqKs4Vdo [(689 - 663)] [(936 - 934)];
    cin >> ZTDw6Ez;
    {
        int FkfB9PGbnWQK;
        FkfB9PGbnWQK = (755 - 755);
        for (; FkfB9PGbnWQK < ZTDw6Ez;) {
            int VT5tVjXfC9m6;
            int mT9IM0uz;
            VT5tVjXfC9m6 = 100010;
            cin >> aKf4Bl;
            memset (uqKs4Vdo, (512 - 512), sizeof (uqKs4Vdo));
            {
                int cKkbm8;
                cKkbm8 = (545 - 545);
                for (; strlen (aKf4Bl) > cKkbm8;) {
                    uqKs4Vdo[aKf4Bl[cKkbm8] - 'a'][(322 - 322)]++;
                    if (uqKs4Vdo[aKf4Bl[cKkbm8] - 'a'][(211 - 210)] == (879 - 879))
                        uqKs4Vdo[aKf4Bl[cKkbm8] - 'a'][(925 - 924)] = cKkbm8;
                    cKkbm8++;
                }
            }
            for (int cKkbm8 = (376 - 376);
            (802 - 776) > cKkbm8; cKkbm8++) {
                if (uqKs4Vdo[cKkbm8][(428 - 428)] == (810 - 809)) {
                    if (VT5tVjXfC9m6 > uqKs4Vdo[cKkbm8][1]) {
                        VT5tVjXfC9m6 = uqKs4Vdo[cKkbm8][1];
                        mT9IM0uz = cKkbm8;
                    }
                }
            }
            if (VT5tVjXfC9m6 == 100010)
                cout << "no" << endl;
            else
                cout << (char) ('a' + mT9IM0uz) << endl;
            FkfB9PGbnWQK++;
        }
    }
    return 0;
}

