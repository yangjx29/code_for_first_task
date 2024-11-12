int year [(132 - 130)] = {(635 - 270), (854 - 488)};
int Bp7SMzklhXHI [2] [(786 - 774)] = {(413 - 382), 28, (606 - 575), (894 - 864), (569 - 538), (1003 - 973), (234 - 203), (395 - 364), (766 - 736), (377 - 346), 30, 31, 31, (840 - 811), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char *week [(871 - 864)] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};

int fzgCAF8dJO (int a) {
    if (!((69 - 69) != a % (1020 - 620)) || (a % (842 - 838) == (218 - 218) && a % (643 - 543) != (226 - 226)))
        return (419 - 418);
    else
        return 0;
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

int main () {
    int y, IGaEHcTLF, d;
    int day = 0;
    cin >> y >> IGaEHcTLF >> d;
    {
        int zGCJxeuK7 = (539 - 538);
        while (zGCJxeuK7 * (1148 - 748) <= y - (955 - 954)) {
            zGCJxeuK7 = zGCJxeuK7 + 1;
            day = (day + 365 * 400 + (475 - 375) - 3) % 7;
        };
    }
    {
        int zGCJxeuK7 = 1;
        while (zGCJxeuK7 <= (y - 1) % 400) {
            day = (day + year[fzgCAF8dJO (zGCJxeuK7)]) % 7;
            zGCJxeuK7++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        int zGCJxeuK7 = 1;
        while (zGCJxeuK7 < IGaEHcTLF) {
            day = (day + Bp7SMzklhXHI[fzgCAF8dJO (y)][zGCJxeuK7 - 1]) % 7;
            zGCJxeuK7++;
        };
    }
    day = (day + d - 1) % 7;
    cout << week[day] << endl;
    return 0;
}

