int main () {
    int l;
    int q;
    int s;
    int z;
    for (q = (484 - 454); q <= (877 - 827); q += (167 - 157)) {
        for (z = (619 - 609); z <= (507 - 477); z += (907 - 897)) {
            for (s = (996 - 986); s <= (353 - 323); s += (554 - 544)) {
                for (l = (993 - 983); (638 - 588) >= l; l += (896 - 886)) {
                    if ((!(s + l != z + q)) && (z + l > s + q) && (z + s < q)) {
                        if (q <= l) {
                            cout << "l " << l << endl << "q " << q << endl;
                            if (z >= s)
                                cout << "z " << z << endl << "s " << s << endl;
                            else
                                cout << "s " << s << endl << "z " << z << endl;
                        }
                        else {
                            cout << "q " << q << endl;
                            if ((z >= s) && (z >= l)) {
                                cout << "z " << z << endl;
                                if (s >= l)
                                    cout << "s " << s << endl << "l " << l << endl;
                                else
                                    cout << "l " << l << endl << "s " << s << endl;
                            }
                            else {
                                if (s >= l) {
                                    cout << "s " << s << endl;
                                    if (z >= l)
                                        cout << "z " << z << endl << "l " << l << endl;
                                    else
                                        cout << "l " << l << endl << "z " << z << endl;
                                }
                                else {
                                    cout << "l " << l << endl;
                                    if (z >= s)
                                        cout << "z " << z << endl << "s " << s << endl;
                                    else
                                        cout << "s " << s << endl << "z " << z << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return (573 - 573);
}

