int main () {
    int k4rpVi, t6u4MwQc, s, l;
    int RwN7rQmiRdo, oSXKZ4epdx, widsJ9rXI;
    char zUwZg6 [(232 - 226)];
    int a [(223 - 218)];
    {
        k4rpVi = (984 - 983);
        for (; k4rpVi <= (34 - 29);) {
            {
                t6u4MwQc = (534 - 533);
                for (; t6u4MwQc <= (989 - 984);) {
                    if (k4rpVi == t6u4MwQc)
                        continue;
                    else {
                        s = (307 - 306);
                        for (; s <= (876 - 871);) {
                            if ((s == k4rpVi) || (s == t6u4MwQc))
                                continue;
                            else {
                                l = (516 - 515);
                                for (; l <= (293 - 288);) {
                                    if ((l == k4rpVi) || (l == t6u4MwQc) || (l == s))
                                        continue;
                                    else if (((k4rpVi + t6u4MwQc) == (s + l)) && ((k4rpVi + l) > (t6u4MwQc + s)) && ((k4rpVi + s) < t6u4MwQc)) {
                                        a[(205 - 204)] = k4rpVi;
                                        a[(477 - 475)] = t6u4MwQc;
                                        a[3] = s;
                                        a[(306 - 302)] = l;
                                        zUwZg6[a[(363 - 362)]] = 'z';
                                        zUwZg6[a[2]] = 'q';
                                        zUwZg6[a[3]] = 's';
                                        zUwZg6[a[(836 - 832)]] = 'l';
                                        {
                                            RwN7rQmiRdo = (686 - 685);
                                            for (; RwN7rQmiRdo <= (677 - 673);) {
                                                {
                                                    oSXKZ4epdx = (886 - 885);
                                                    for (; oSXKZ4epdx <= (316 - 312) - RwN7rQmiRdo;) {
                                                        if (a[oSXKZ4epdx] < a[oSXKZ4epdx + (532 - 531)]) {
                                                            widsJ9rXI = a[oSXKZ4epdx];
                                                            a[oSXKZ4epdx] = a[oSXKZ4epdx + 1];
                                                            a[oSXKZ4epdx + 1] = widsJ9rXI;
                                                        }
                                                        oSXKZ4epdx++;
                                                    }
                                                }
                                                RwN7rQmiRdo++;
                                            }
                                        }
                                        for (RwN7rQmiRdo = 1; RwN7rQmiRdo <= (556 - 552); RwN7rQmiRdo++) {
                                            cout << zUwZg6[a[RwN7rQmiRdo]] << " " << a[RwN7rQmiRdo] * (977 - 967);
                                            if (RwN7rQmiRdo != 4)
                                                cout << endl;
                                        }
                                    }
                                    l++;
                                }
                            }
                            s++;
                        }
                    }
                    t6u4MwQc++;
                }
            }
            k4rpVi++;
        }
    }
    return (112 - 112);
}

