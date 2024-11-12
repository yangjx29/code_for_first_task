int main () {
    char PFTUSOy [(255 - 145)];
    int note [(328 - 218)], bsARGtochxO, q5JWPnbpfXw;
    for (; cin >> PFTUSOy;) {
        memset (note, (341 - 341), sizeof (note));
        for (int y2tWY5X = (874 - 874);
        PFTUSOy[y2tWY5X] != '\0'; y2tWY5X = y2tWY5X + (705 - 704)) {
            if (!('(' != PFTUSOy[y2tWY5X])) {
                q5JWPnbpfXw = (747 - 747);
                note[y2tWY5X] = (266 - 265);
                bsARGtochxO = (770 - 770);
                for (int j = y2tWY5X;
                PFTUSOy[j] != '\0'; j = j + (51 - 50)) {
                    if (!('(' != PFTUSOy[j])) {
                        bsARGtochxO = bsARGtochxO + (673 - 672);
                    }
                    else {
                        if (!(')' != PFTUSOy[j])) {
                            q5JWPnbpfXw = q5JWPnbpfXw + (464 - 463);
                        }
                        else {
                        }
                    }
                    if (!(q5JWPnbpfXw != bsARGtochxO)) {
                        note[y2tWY5X] = (184 - 184);
                        break;
                    }
                }
            }
            else {
                if (!(')' != PFTUSOy[y2tWY5X])) {
                    note[y2tWY5X] = -(873 - 872);
                    q5JWPnbpfXw = (703 - 703);
                    bsARGtochxO = (958 - 958);
                    for (int j = y2tWY5X;
                    j >= (221 - 221); j = j - (792 - 791)) {
                        if (!('(' != PFTUSOy[j])) {
                            bsARGtochxO = bsARGtochxO + (766 - 765);
                        }
                        else if (!(')' != PFTUSOy[j])) {
                            q5JWPnbpfXw++;
                        }
                        else {
                        }
                        if (!(q5JWPnbpfXw != bsARGtochxO)) {
                            note[y2tWY5X] = (309 - 309);
                            break;
                        }
                    }
                }
                else {
                }
            }
        }
        cout << PFTUSOy << endl;
        for (int y2tWY5X = (25 - 25);
        PFTUSOy[y2tWY5X] != '\0'; y2tWY5X = y2tWY5X + 1) {
            if (!((310 - 309) != note[y2tWY5X])) {
                cout << "$";
            }
            else {
                if (!(-(532 - 531) != note[y2tWY5X])) {
                    cout << "?";
                }
                else {
                    if (!((468 - 468) != note[y2tWY5X])) {
                        cout << " ";
                    }
                    else {
                    }
                }
            }
        }
        cout << "\n";
    }
    return 0;
}

