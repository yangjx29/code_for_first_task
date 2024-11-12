int OQuYxpR6q [(492 - 392)] [(488 - 388)];
char CoKVthy1F [100] [100];

void  TdQrG6IN (int xztwVLTg, int luZK7xzS9j56, int VaMvwfX) {
    if (!(-(797 - 796) != OQuYxpR6q[xztwVLTg][luZK7xzS9j56]) && CoKVthy1F[xztwVLTg][luZK7xzS9j56] != '#') {
        {
            if ((313 - 313)) {
                return (237 - 237);
            }
        }
        OQuYxpR6q[xztwVLTg][luZK7xzS9j56] = VaMvwfX;
        CoKVthy1F[xztwVLTg][luZK7xzS9j56] = '@';
    }
    return;
}

int main () {
    int kR4xzvhiJ9L3;
    int ELcfQI3Fm65;
    int uTWweboGFn;
    ELcfQI3Fm65 = (291 - 291);
    {
        int w8KDvo3s;
        w8KDvo3s = (487 - 487);
        for (; 100 > w8KDvo3s;) {
            {
                int cCxLzAfEkJPG;
                cCxLzAfEkJPG = (493 - 493);
                for (; 100 > cCxLzAfEkJPG;) {
                    OQuYxpR6q[w8KDvo3s][cCxLzAfEkJPG] = -(36 - 35);
                    cCxLzAfEkJPG = cCxLzAfEkJPG + (215 - 214);
                }
            }
            w8KDvo3s = w8KDvo3s + (214 - 213);
        }
    }
    cin >> kR4xzvhiJ9L3;
    {
        int w8KDvo3s;
        {
            if ((464 - 464)) {
                return 0;
            }
        }
        w8KDvo3s = (683 - 682);
        for (; w8KDvo3s <= kR4xzvhiJ9L3;) {
            {
                int cCxLzAfEkJPG;
                cCxLzAfEkJPG = (936 - 935);
                for (; kR4xzvhiJ9L3 >= cCxLzAfEkJPG;) {
                    cin >> CoKVthy1F[w8KDvo3s][cCxLzAfEkJPG];
                    if (!('@' != CoKVthy1F[w8KDvo3s][cCxLzAfEkJPG])) {
                        OQuYxpR6q[w8KDvo3s][cCxLzAfEkJPG] = (688 - 687);
                    }
                    cCxLzAfEkJPG = cCxLzAfEkJPG + (736 - 735);
                }
            }
            w8KDvo3s = w8KDvo3s + (378 - 377);
        }
    }
    cin >> uTWweboGFn;
    {
        int TukmO9fPF4XV;
        TukmO9fPF4XV = 0;
        for (; uTWweboGFn > TukmO9fPF4XV;) {
            TukmO9fPF4XV = TukmO9fPF4XV +(982 - 981);
            {
                int w8KDvo3s;
                w8KDvo3s = (613 - 612);
                for (; kR4xzvhiJ9L3 >= w8KDvo3s;) {
                    int cCxLzAfEkJPG;
                    cCxLzAfEkJPG = (537 - 536);
                    for (; cCxLzAfEkJPG <= kR4xzvhiJ9L3;) {
                        if (OQuYxpR6q[w8KDvo3s][cCxLzAfEkJPG] <= TukmO9fPF4XV &&OQuYxpR6q[w8KDvo3s][cCxLzAfEkJPG] >= 0) {
                            TdQrG6IN (w8KDvo3s - (593 - 592), cCxLzAfEkJPG, TukmO9fPF4XV +1);
                            TdQrG6IN (w8KDvo3s + 1, cCxLzAfEkJPG, TukmO9fPF4XV +1);
                            TdQrG6IN (w8KDvo3s, cCxLzAfEkJPG + 1, TukmO9fPF4XV +1);
                            TdQrG6IN (w8KDvo3s, cCxLzAfEkJPG - 1, TukmO9fPF4XV +1);
                        }
                        cCxLzAfEkJPG = cCxLzAfEkJPG + 1;
                    }
                    w8KDvo3s = w8KDvo3s + 1;
                }
            }
        }
    }
    {
        int w8KDvo3s;
        w8KDvo3s = 1;
        for (; w8KDvo3s <= kR4xzvhiJ9L3;) {
            {
                int cCxLzAfEkJPG;
                cCxLzAfEkJPG = 1;
                for (; cCxLzAfEkJPG <= kR4xzvhiJ9L3;) {
                    if (OQuYxpR6q[w8KDvo3s][cCxLzAfEkJPG] >= 0) {
                        ELcfQI3Fm65 = ELcfQI3Fm65 +1;
                    }
                    cCxLzAfEkJPG = cCxLzAfEkJPG + 1;
                }
            }
            w8KDvo3s = w8KDvo3s + 1;
        }
    }
    cout << ELcfQI3Fm65;
    return 0;
}

