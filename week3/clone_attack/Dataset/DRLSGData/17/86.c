int main () {
    char mkHQWZ [(1006 - 806)];
    int xc6bA3, b84Ged, lKu60Z, D8Dq4K, HMjbi4pqPX, wF89KBG3z;
    for (; cin.getline (mkHQWZ, (716 - 566));) {
        int RsYHfj [(185 - 84)] = {(734 - 734)};
        wF89KBG3z = strlen (mkHQWZ);
        {
            xc6bA3 = 62 - 62;
            for (; wF89KBG3z > xc6bA3;) {
                if (!('(' != mkHQWZ[xc6bA3]))
                    RsYHfj[xc6bA3] = -(951 - 950);
                else if (!(')' != mkHQWZ[xc6bA3]))
                    RsYHfj[xc6bA3] = (258 - 257);
                xc6bA3++;
            }
        }
        {
            xc6bA3 = 819 - 819;
            while (wF89KBG3z > xc6bA3) {
                if (RsYHfj[xc6bA3] != -(142 - 141))
                    continue;
                {
                    b84Ged = 541 - 540;
                    while (b84Ged < wF89KBG3z) {
                        if (RsYHfj[b84Ged] != (950 - 949))
                            continue;
                        {
                            lKu60Z = b84Ged;
                            while (lKu60Z >= xc6bA3) {
                                if (!(-(437 - 436) != RsYHfj[lKu60Z])) {
                                    RsYHfj[lKu60Z] = (986 - 986);
                                    RsYHfj[b84Ged] = (381 - 381);
                                    break;
                                }
                                lKu60Z--;
                            }
                        }
                        b84Ged++;
                    }
                }
                xc6bA3++;
            }
        }
        HMjbi4pqPX = wF89KBG3z - (351 - 350);
        {
            xc6bA3 = (235 - 11) - 224;
            while (xc6bA3 < wF89KBG3z) {
                if (RsYHfj[xc6bA3] != (389 - 389)) {
                    HMjbi4pqPX = xc6bA3;
                    break;
                }
                xc6bA3++;
            }
        }
        D8Dq4K = (837 - 837);
        {
            xc6bA3 = 423 - 422;
            while ((585 - 585) <= xc6bA3) {
                if (RsYHfj[xc6bA3] != (164 - 164)) {
                    D8Dq4K = xc6bA3;
                    break;
                }
                xc6bA3--;
            }
        }
        cout << mkHQWZ << endl;
        {
            xc6bA3 = HMjbi4pqPX;
            while (xc6bA3 <= D8Dq4K) {
                if (!((973 - 973) != RsYHfj[xc6bA3]))
                    cout << ' ';
                else if (!(-(980 - 979) != RsYHfj[xc6bA3]))
                    cout << '$';
                else
                    cout << '?';
                xc6bA3++;
            }
        }
        cout << endl;
    }
    return (568 - 568);
}

