int uBczvA9F (int zhwdvpcK) {
    if (!((54 - 54) == zhwdvpcK % 4)) {
        return (884 - 884);
    }
    else {
        if (!((311 - 311) != zhwdvpcK % 100)) {
            if (!((832 - 832) != zhwdvpcK % 400))
                return 1;
            else
                return (777 - 777);
        }
        else {
            return 1;
        };
    };
}

int main () {
    int r4blaIjHS [(583 - 570)] = {(714 - 714), (583 - 552), (638 - 610), (58 - 27), (322 - 292), (342 - 311), 30, (278 - 247), (766 - 735), 30, (636 - 605), 30, (481 - 450)};
    int n;
    int T3HSU6q1hs0;
    int A0FG3BRWx;
    int jfgo3H;
    int year;
    int slJmfwn;
    int zoPSECg;
    int DaYmq6Nev;
    int ylY8JExhfW [(926 - 913)] = {0, (879 - 848), 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> n;
    for (DaYmq6Nev = 0; n > DaYmq6Nev; DaYmq6Nev++) {
        cin >> year >> T3HSU6q1hs0 >> A0FG3BRWx;
        if (A0FG3BRWx > T3HSU6q1hs0)
            ;
        else {
            slJmfwn = T3HSU6q1hs0;
            T3HSU6q1hs0 = A0FG3BRWx;
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
            A0FG3BRWx = slJmfwn;
        }
        if (!(1 == uBczvA9F (year))) {
            zoPSECg = 0;
            for (jfgo3H = T3HSU6q1hs0; jfgo3H < A0FG3BRWx; jfgo3H = jfgo3H + 1) {
                zoPSECg = zoPSECg + r4blaIjHS[jfgo3H];
            }
            if (zoPSECg % 7 == 0) {
                cout << "YES" << endl;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            else {
                cout << "NO" << endl;
            };
        }
        else {
            zoPSECg = 0;
            for (jfgo3H = T3HSU6q1hs0; jfgo3H < A0FG3BRWx; jfgo3H = jfgo3H + 1) {
                zoPSECg = zoPSECg + ylY8JExhfW[jfgo3H];
            }
            if (zoPSECg % 7 == 0) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            };
        };
    }
    return 0;
}

