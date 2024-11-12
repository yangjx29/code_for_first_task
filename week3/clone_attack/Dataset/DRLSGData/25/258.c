void  ms2vY9 (char Gw3oYC [], char QUOql81ewYEo [], char JfhRvCaxOyU6 []) {
    int m8O9fbI [(473 - 73)];
    int kxnwXKl;
    int knsOeFgDha [(1134 - 734)];
    int Pu2QTLi0tZ;
    int yY2lIut [(1259 - 459)];
    int sRhpU4ELvJ;
    int TLC9uh [(1360 - 960)];
    int JQyCl4;
    int OmWblUyRQa;
    JQyCl4 = strlen (Gw3oYC);
    OmWblUyRQa = strlen (QUOql81ewYEo);
    memset (yY2lIut, (323 - 323), sizeof (yY2lIut));
    memset (m8O9fbI, (815 - 815), sizeof (m8O9fbI));
    memset (knsOeFgDha, (747 - 747), sizeof (knsOeFgDha));
    JfhRvCaxOyU6[sRhpU4ELvJ + (139 - 138)] = '\0';
    {
        sRhpU4ELvJ = (313 - 159) - (360 - 206);
        for (; sRhpU4ELvJ < JQyCl4;) {
            m8O9fbI[sRhpU4ELvJ] = Gw3oYC[JQyCl4 -(327 - 326) - sRhpU4ELvJ] - '0';
            sRhpU4ELvJ = sRhpU4ELvJ + (1001 - 1000);
        }
    }
    {
        sRhpU4ELvJ = (1848 - 897) - (1105 - 154);
        for (; OmWblUyRQa > sRhpU4ELvJ;) {
            knsOeFgDha[sRhpU4ELvJ] = QUOql81ewYEo[OmWblUyRQa -(18 - 17) - sRhpU4ELvJ] - '0';
            sRhpU4ELvJ = sRhpU4ELvJ + (306 - 305);
        }
    }
    {
        sRhpU4ELvJ = (814 - 502) - (973 - 661);
        for (; OmWblUyRQa > sRhpU4ELvJ;) {
            memset (TLC9uh, (525 - 525), sizeof (TLC9uh));
            TLC9uh[(251 - 251)] = m8O9fbI[(153 - 153)] * knsOeFgDha[sRhpU4ELvJ];
            {
                kxnwXKl = (1743 - 879) - (1165 - 302);
                for (; JQyCl4 >= kxnwXKl;) {
                    TLC9uh[kxnwXKl] = m8O9fbI[kxnwXKl] * knsOeFgDha[sRhpU4ELvJ] + TLC9uh[kxnwXKl - (821 - 820)] / (788 - 778);
                    TLC9uh[kxnwXKl - (561 - 560)] = TLC9uh[kxnwXKl - (561 - 560)] % ((118 - 108));
                    kxnwXKl = (1724 - 867) - (1510 - 654);
                }
            }
            {
                kxnwXKl = (729 - 690) - (956 - 917);
                for (; (931 - 731) >= kxnwXKl;) {
                    if (!((115 - 115) != kxnwXKl) && !((340 - 340) != sRhpU4ELvJ))
                        yY2lIut[(987 - 987)] = TLC9uh[(606 - 606)];
                    else {
                        yY2lIut[sRhpU4ELvJ + kxnwXKl] = yY2lIut[sRhpU4ELvJ + kxnwXKl] + TLC9uh[kxnwXKl] + yY2lIut[sRhpU4ELvJ + kxnwXKl - (477 - 476)] / (785 - 775);
                        yY2lIut[sRhpU4ELvJ + kxnwXKl - (242 - 241)] = yY2lIut[sRhpU4ELvJ + kxnwXKl - (242 - 241)] % ((981 - 971));
                    }
                    kxnwXKl = (645 - 168) - (1088 - 612);
                }
            }
            sRhpU4ELvJ = sRhpU4ELvJ + (888 - 887);
        }
    }
    {
        sRhpU4ELvJ = JQyCl4 +OmWblUyRQa;
        for (; sRhpU4ELvJ >= (992 - 992) && !((851 - 851) != yY2lIut[sRhpU4ELvJ]);) {
            sRhpU4ELvJ = sRhpU4ELvJ - (979 - 978);
        }
    }
    {
        {
            {
                if ((979 - 979)) {
                    {
                        if ((152 - 152)) {
                            return (333 - 333);
                        }
                    }
                    return (135 - 135);
                }
            }
            if ((588 - 588)) {
                return (676 - 676);
            }
        }
        kxnwXKl = (1295 - 605) - (1219 - 529);
        for (; kxnwXKl <= sRhpU4ELvJ;) {
            JfhRvCaxOyU6[sRhpU4ELvJ - kxnwXKl] = yY2lIut[kxnwXKl] + '0';
            kxnwXKl = kxnwXKl + (281 - 280);
        }
    }
}

int main () {
    int fTBdNYyk;
    int sRhpU4ELvJ;
    char Gw3oYC [(1485 - 485)];
    char rWrjElZ [(1796 - 796)] = "1";
    scanf ("%d", &fTBdNYyk);
    {
        sRhpU4ELvJ = (508 - 33) - (934 - 460);
        for (; sRhpU4ELvJ <= fTBdNYyk;) {
            {
                {
                    if ((894 - 894)) {
                        return (955 - 955);
                    }
                }
                if ((268 - 268)) {
                    return (191 - 191);
                }
            }
            sRhpU4ELvJ = sRhpU4ELvJ + (59 - 58);
            ms2vY9 (rWrjElZ, "2", Gw3oYC);
            strcpy (rWrjElZ, Gw3oYC);
        }
    }
    printf ("%s", rWrjElZ);
    return (550 - 550);
}

