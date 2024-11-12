int XiUfIK (int);
int HsBYSITU (int);
int XiUfIK (int, int, int, int);
char sqkCdeH [(897 - 847)] [(208 - 103)], gIvQOeK [(519 - 469)] [(132 - 27)] = {(89 - 89)};
int ljMcA3bhG [(268 - 218)] = {(595 - 595)};

int main () {
    {
        int RsNJKc;
        RsNJKc = (306 - 306);
        for (; (433 - 432);) {
            HsBYSITU (RsNJKc);
            XiUfIK (RsNJKc);
            cin.getline (sqkCdeH[RsNJKc], (417 - 316));
            cout << sqkCdeH[RsNJKc] << endl;
            cout << gIvQOeK[RsNJKc] << endl;
            RsNJKc = RsNJKc +(146 - 145);
        }
    }
    return (436 - 436);
}

int HsBYSITU (int eKWmwGojFE28) {
    {
        int RsNJKc;
        RsNJKc = (957 - 957);
        for (; sqkCdeH[eKWmwGojFE28][RsNJKc] != (946 - 946);) {
            ljMcA3bhG[eKWmwGojFE28]++;
            RsNJKc = RsNJKc +(427 - 426);
        }
    }
    return (738 - 738);
}

int XiUfIK (int D1AfRa) {
    {
        int RsNJKc;
        RsNJKc = (197 - 197);
        for (; ljMcA3bhG[D1AfRa] > RsNJKc;) {
            if (!('(' != sqkCdeH[D1AfRa][RsNJKc]))
                gIvQOeK[D1AfRa][RsNJKc] = '$';
            else {
                if (!(')' != sqkCdeH[D1AfRa][RsNJKc]))
                    gIvQOeK[D1AfRa][RsNJKc] = '?';
                else
                    gIvQOeK[D1AfRa][RsNJKc] = ' ';
            }
            RsNJKc = RsNJKc +(665 - 664);
        }
    }
    for (; (603 - 602);) {
        int qj3u6BZFvOn;
        int GbDsK5JkHrpi;
        qj3u6BZFvOn = (130 - 130);
        GbDsK5JkHrpi = -(588 - 587);
        {
            int RsNJKc;
            RsNJKc = (288 - 288);
            for (; RsNJKc < ljMcA3bhG[D1AfRa];) {
                if (!('$' != gIvQOeK[D1AfRa][RsNJKc]) && !('?' != gIvQOeK[D1AfRa][RsNJKc +(798 - 797)])) {
                    qj3u6BZFvOn = (977 - 976);
                    gIvQOeK[D1AfRa][RsNJKc] = ' ';
                    gIvQOeK[D1AfRa][RsNJKc +(537 - 536)] = ' ';
                    break;
                }
                else {
                    if (!('$' != gIvQOeK[D1AfRa][RsNJKc]) && !(' ' != gIvQOeK[D1AfRa][RsNJKc +(33 - 32)]))
                        GbDsK5JkHrpi = RsNJKc;
                    else {
                        if (!('?' != gIvQOeK[D1AfRa][RsNJKc]) && GbDsK5JkHrpi >= (431 - 431)) {
                            qj3u6BZFvOn = (867 - 866);
                            gIvQOeK[D1AfRa][RsNJKc] = ' ';
                            gIvQOeK[D1AfRa][GbDsK5JkHrpi] = ' ';
                            GbDsK5JkHrpi = -(435 - 434);
                            break;
                        }
                    }
                }
                RsNJKc = RsNJKc +(679 - 678);
            }
        }
        if (!((792 - 792) != qj3u6BZFvOn))
            break;
    }
    return (719 - 719);
}

