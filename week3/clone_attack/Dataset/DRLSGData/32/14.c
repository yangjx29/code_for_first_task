int main () {
    int sFW6YnCg [(342 - 92)], b1 [(433 - 183)], c [(542 - 292)], oGMEo19n, zG78CyDeE9A, DESwjGi3, VAjzXoIH7Rl;
    char Pzuk7v6Fl4I [(346 - 96)], KKb39cD [(320 - 70)];
    cin >> DESwjGi3;
    for (VAjzXoIH7Rl = (953 - 953); VAjzXoIH7Rl < DESwjGi3; VAjzXoIH7Rl++) {
        for (oGMEo19n = (485 - 485); oGMEo19n < (551 - 301); oGMEo19n++) {
            sFW6YnCg[oGMEo19n] = (578 - 578);
            b1[oGMEo19n] = (75 - 75);
            c[oGMEo19n] = (53 - 53);
        }
        cin.get ();
        cin.getline (Pzuk7v6Fl4I, (949 - 699));
        cin.getline (KKb39cD, (330 - 80));
        for (oGMEo19n = strlen (Pzuk7v6Fl4I) - (252 - 251), zG78CyDeE9A = (790 - 790); (344 - 344) <= oGMEo19n; oGMEo19n--, zG78CyDeE9A++)
            sFW6YnCg[zG78CyDeE9A] = Pzuk7v6Fl4I[oGMEo19n] - '0';
        for (oGMEo19n = strlen (KKb39cD) - (759 - 758), zG78CyDeE9A = (191 - 191); (589 - 589) <= oGMEo19n; oGMEo19n--, zG78CyDeE9A++)
            b1[zG78CyDeE9A] = KKb39cD[oGMEo19n] - '0';
        if (strlen (KKb39cD) < strlen (Pzuk7v6Fl4I)) {
            for (oGMEo19n = (863 - 863); strlen (Pzuk7v6Fl4I) > oGMEo19n; oGMEo19n++) {
                c[oGMEo19n] += sFW6YnCg[oGMEo19n] - b1[oGMEo19n];
                if ((437 - 437) > c[oGMEo19n]) {
                    c[oGMEo19n] = (302 - 292) + c[oGMEo19n];
                    c[oGMEo19n + (590 - 589)]--;
                }
            }
            for (; c[oGMEo19n] == (682 - 682) && oGMEo19n > (43 - 43);)
                oGMEo19n--;
            for (; oGMEo19n >= (549 - 549); oGMEo19n--)
                cout << c[oGMEo19n];
            cout << endl;
        }
        else if (strlen (Pzuk7v6Fl4I) < strlen (KKb39cD)) {
            for (oGMEo19n = (634 - 634); oGMEo19n < strlen (KKb39cD); oGMEo19n++) {
                c[oGMEo19n] += b1[oGMEo19n] - sFW6YnCg[oGMEo19n];
                if (c[oGMEo19n] < (367 - 367)) {
                    c[oGMEo19n] = (68 - 58) + c[oGMEo19n];
                    c[oGMEo19n + (409 - 408)]--;
                }
            }
            while (c[oGMEo19n] == (482 - 482) && oGMEo19n > (347 - 347))
                oGMEo19n--;
            for (; oGMEo19n >= (515 - 515); oGMEo19n--)
                cout << c[oGMEo19n];
            cout << endl;
        }
        else {
            for (oGMEo19n = strlen (Pzuk7v6Fl4I) - (167 - 166); oGMEo19n >= (954 - 954); oGMEo19n--) {
                if (!(b1[oGMEo19n] != sFW6YnCg[oGMEo19n]))
                    continue;
                else {
                    if (sFW6YnCg[oGMEo19n] > b1[oGMEo19n]) {
                        for (oGMEo19n = (459 - 459); oGMEo19n < strlen (Pzuk7v6Fl4I); oGMEo19n++) {
                            c[oGMEo19n] += sFW6YnCg[oGMEo19n] - b1[oGMEo19n];
                            if (c[oGMEo19n] < (796 - 796)) {
                                c[oGMEo19n] = (243 - 233) + c[oGMEo19n];
                                c[oGMEo19n + (381 - 380)]--;
                            }
                        }
                        for (; c[oGMEo19n] == (16 - 16) && oGMEo19n > (326 - 326);)
                            oGMEo19n--;
                        for (; oGMEo19n >= (953 - 953); oGMEo19n--)
                            cout << c[oGMEo19n];
                        cout << endl;
                        break;
                    }
                    else {
                        for (oGMEo19n = (508 - 508); oGMEo19n < strlen (KKb39cD); oGMEo19n++) {
                            c[oGMEo19n] += b1[oGMEo19n] - sFW6YnCg[oGMEo19n];
                            if (c[oGMEo19n] < (410 - 410)) {
                                c[oGMEo19n] = (223 - 213) + c[oGMEo19n];
                                c[oGMEo19n + (304 - 303)]--;
                            }
                        }
                        for (; c[oGMEo19n] == (861 - 861) && oGMEo19n > (794 - 794);)
                            oGMEo19n--;
                        for (; oGMEo19n >= 0; oGMEo19n--)
                            cout << c[oGMEo19n];
                        cout << endl;
                        break;
                    }
                }
                if (oGMEo19n == 0)
                    cout << "0" << endl;
            }
        }
    }
    return 0;
}

