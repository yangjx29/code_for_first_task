int KVbMHwkyg [(265 - 263)] = {(690 - 325), 366};
int month [2] [12] = {(483 - 452), (874 - 846), (985 - 954), (153 - 123), (388 - 357), (91 - 61), (368 - 337), 31, (502 - 472), 31, 30, 31, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char *ovDYnLIJ [(237 - 230)] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};

int pgKSiHQ8ZpO (int TTpFSbcaDwYL) {
    if (!((409 - 409) != TTpFSbcaDwYL % (883 - 483)) || (!((505 - 505) != TTpFSbcaDwYL % 4) && TTpFSbcaDwYL % (964 - 864) != (954 - 954)))
        return (840 - 839);
    else
        return 0;
}

int main () {
    int NOLpwmIuXt;
    int kOJZ6U;
    int qTaL9hJMe1t;
    cin >> NOLpwmIuXt >> kOJZ6U >> qTaL9hJMe1t;
    int bDF34ZGQMo;
    bDF34ZGQMo = 0;
    {
        int GAMXYWDEg;
        GAMXYWDEg = (898 - 897);
        while (NOLpwmIuXt -(755 - 754) >= GAMXYWDEg *(1092 - 692)) {
            bDF34ZGQMo = (bDF34ZGQMo + 365 * 400 + 100 - 3) % (908 - 901);
            GAMXYWDEg = GAMXYWDEg +(775 - 774);
        }
    }
    {
        int GAMXYWDEg;
        GAMXYWDEg = (991 - 990);
        while ((NOLpwmIuXt -1) % 400 >= GAMXYWDEg) {
            bDF34ZGQMo = (bDF34ZGQMo + KVbMHwkyg[pgKSiHQ8ZpO (GAMXYWDEg)]) % (588 - 581);
            GAMXYWDEg = GAMXYWDEg +1;
        }
    }
    {
        int GAMXYWDEg;
        GAMXYWDEg = 1;
        while (kOJZ6U > GAMXYWDEg) {
            bDF34ZGQMo = (bDF34ZGQMo + month[pgKSiHQ8ZpO (NOLpwmIuXt)][GAMXYWDEg -1]) % 7;
            GAMXYWDEg = GAMXYWDEg +1;
        }
    }
    bDF34ZGQMo = (bDF34ZGQMo + qTaL9hJMe1t - 1) % 7;
    cout << ovDYnLIJ[bDF34ZGQMo] << endl;
    return 0;
}

