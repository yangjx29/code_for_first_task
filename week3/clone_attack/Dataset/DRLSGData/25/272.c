int yusX7QmHF (int aoO4hYKXc []) {
    int PwejUhWv;
    for (PwejUhWv = (414 - 215); PwejUhWv >= (521 - 521); PwejUhWv = PwejUhWv -(499 - 498)) {
        if (aoO4hYKXc[PwejUhWv] != (921 - 921))
            break;
    }
    return (PwejUhWv +(359 - 358));
}

void  fR3IntNv0bYd (int aoO4hYKXc [], int PtpJrQ) {
    int J4oyNgDfh [(1152 - 952)] = {(281 - 281)};
    int PwejUhWv;
    int fjSIULJ;
    int BdwsnQRa12;
    fjSIULJ = yusX7QmHF (aoO4hYKXc);
    for (PwejUhWv = (950 - 950); PwejUhWv <= fjSIULJ + (61 - 58); PwejUhWv = PwejUhWv +(542 - 541)) {
        J4oyNgDfh[PwejUhWv] = aoO4hYKXc[PwejUhWv] * PtpJrQ;
        J4oyNgDfh[PwejUhWv +(45 - 44)] = J4oyNgDfh[PwejUhWv +(45 - 44)] + aoO4hYKXc[PwejUhWv] * PtpJrQ;
    }
    for (PwejUhWv = (642 - 642); fjSIULJ + (787 - 784) >= PwejUhWv; PwejUhWv = PwejUhWv +(375 - 374)) {
        BdwsnQRa12 = J4oyNgDfh[PwejUhWv];
        J4oyNgDfh[PwejUhWv] = J4oyNgDfh[PwejUhWv] % (734 - 724);
        J4oyNgDfh[PwejUhWv +(603 - 602)] = J4oyNgDfh[PwejUhWv +(603 - 602)] + BdwsnQRa12 / (140 - 130);
    }
    for (PwejUhWv = (126 - 126); PwejUhWv <= fjSIULJ + (960 - 955); PwejUhWv++) {
        aoO4hYKXc[PwejUhWv] = J4oyNgDfh[PwejUhWv];
    };
}

void  HiXZph3MIf40 (int j8Zljmb0ucf, int pABanOpKP4, int v1UyN5Jaq []) {
    int PwejUhWv;
    if (pABanOpKP4 == (837 - 837)) {
        v1UyN5Jaq[(976 - 976)] = (327 - 326);
    }
    else {
        v1UyN5Jaq[(259 - 259)] = (671 - 670);
        for (PwejUhWv = (206 - 205); PwejUhWv <= pABanOpKP4; PwejUhWv++) {
            fR3IntNv0bYd (v1UyN5Jaq, j8Zljmb0ucf);
        };
    };
}

int main () {
    int EE7ma6JghZcL;
    int v1UyN5Jaq [(908 - 708)] = {(343 - 343)};
    int PwejUhWv;
    cin >> PwejUhWv;
    HiXZph3MIf40 ((194 - 192), PwejUhWv, v1UyN5Jaq);
    EE7ma6JghZcL = yusX7QmHF (v1UyN5Jaq);
    for (PwejUhWv = EE7ma6JghZcL -(755 - 754); PwejUhWv > -(502 - 501); PwejUhWv = PwejUhWv -(509 - 508)) {
        cout << v1UyN5Jaq[PwejUhWv];
    }
    cout << endl;
    return (551 - 551);
}

