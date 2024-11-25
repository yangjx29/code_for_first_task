int main () {
    int kZcnB7mvew [21] [21];
    int OVRqw6pyZbvg, t37n6hU4H1Sg, CHnW2X0EIF, ZolL5nQHJKv;
    cin >> OVRqw6pyZbvg >> t37n6hU4H1Sg;
    memset (kZcnB7mvew, 0, sizeof (kZcnB7mvew));
    {
        CHnW2X0EIF = 0;
        while (CHnW2X0EIF < OVRqw6pyZbvg) {
            for (ZolL5nQHJKv = 0; ZolL5nQHJKv < t37n6hU4H1Sg; ZolL5nQHJKv = ZolL5nQHJKv +1)
                cin >> kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv];
            CHnW2X0EIF++;
        }
    }
    {
        CHnW2X0EIF = 0;
        for (; CHnW2X0EIF < OVRqw6pyZbvg;) {
            for (ZolL5nQHJKv = 0; ZolL5nQHJKv < t37n6hU4H1Sg; ZolL5nQHJKv = ZolL5nQHJKv +1) {
                if (CHnW2X0EIF == 0 && ZolL5nQHJKv == 0) {
                    if (kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF +1][ZolL5nQHJKv] && kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv +1])
                        cout << CHnW2X0EIF << ' ' << ZolL5nQHJKv << endl;
                }
                else {
                    if (CHnW2X0EIF == 0 && ZolL5nQHJKv == t37n6hU4H1Sg - 1) {
                        if (kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv -1] && kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF +1][ZolL5nQHJKv])
                            cout << CHnW2X0EIF << ' ' << ZolL5nQHJKv << endl;
                    }
                    else {
                        if (CHnW2X0EIF == OVRqw6pyZbvg -1 && ZolL5nQHJKv == 0) {
                            if (kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF -1][ZolL5nQHJKv] && kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv +1])
                                cout << CHnW2X0EIF << ' ' << ZolL5nQHJKv << endl;
                        }
                        else {
                            if (CHnW2X0EIF == OVRqw6pyZbvg -1 && ZolL5nQHJKv == t37n6hU4H1Sg - 1) {
                                if (kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF -1][ZolL5nQHJKv] && kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv -1])
                                    cout << CHnW2X0EIF << ' ' << ZolL5nQHJKv << endl;
                            }
                            else {
                                if (CHnW2X0EIF == 0 && ZolL5nQHJKv != 0 && ZolL5nQHJKv != t37n6hU4H1Sg - 1) {
                                    if (kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv -1] && kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv +1] && kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF +1][ZolL5nQHJKv])
                                        cout << CHnW2X0EIF << ' ' << ZolL5nQHJKv << endl;
                                }
                                else {
                                    if (CHnW2X0EIF == OVRqw6pyZbvg -1 && ZolL5nQHJKv != 0 && ZolL5nQHJKv != t37n6hU4H1Sg - 1) {
                                        if (kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv -1] && kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv +1] && kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF -1][ZolL5nQHJKv])
                                            cout << CHnW2X0EIF << ' ' << ZolL5nQHJKv << endl;
                                    }
                                    else {
                                        if (ZolL5nQHJKv == 0 && CHnW2X0EIF != 0 && CHnW2X0EIF != OVRqw6pyZbvg -1) {
                                            if (kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF -1][ZolL5nQHJKv] && kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF +1][ZolL5nQHJKv] && kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv +1])
                                                cout << CHnW2X0EIF << ' ' << ZolL5nQHJKv << endl;
                                        }
                                        else {
                                            if (ZolL5nQHJKv == t37n6hU4H1Sg - 1 && CHnW2X0EIF != 0 && CHnW2X0EIF != OVRqw6pyZbvg -1) {
                                                if (kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF -1][ZolL5nQHJKv] && kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF +1][ZolL5nQHJKv] && kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv -1])
                                                    cout << CHnW2X0EIF << ' ' << ZolL5nQHJKv << endl;
                                            }
                                            else {
                                                if (kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF -1][ZolL5nQHJKv] && kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF +1][ZolL5nQHJKv] && kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv -1] && kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv] >= kZcnB7mvew[CHnW2X0EIF][ZolL5nQHJKv +1])
                                                    cout << CHnW2X0EIF << ' ' << ZolL5nQHJKv << endl;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            CHnW2X0EIF = CHnW2X0EIF +1;
        }
    }
    return 0;
}

