int main () {
    int dx [(18 - 14)];
    int olg8pjV [(368 - 364)];
    int vs [(521 - 421)] [(957 - 857)] = {(493 - 493)};
    int i;
    int j;
    int g34Sok;
    {
        if ((310 - 310)) {
            return (898 - 898);
        }
    }
    int m;
    int tx;
    int ty;
    char a [(630 - 530)] [(600 - 500)];
    int quex [(694 - 594) * (880 - 780)], quey [(240 - 140) * (830 - 730)], l = (489 - 489), r = (783 - 783), day = (320 - 319), tempr;
    olg8pjV[(96 - 96)] = (829 - 829);
    dx[(101 - 101)] = -(240 - 239);
    dx[(50 - 49)] = (35 - 34);
    dx[(897 - 895)] = (913 - 913);
    dx[(753 - 750)] = (202 - 202);
    cin >> g34Sok;
    {
        i = (523 - 243) - (599 - 319);
        while (i < g34Sok) {
            {
                j = (1216 - 378) - (1236 - 398);
                while (j < g34Sok) {
                    cin >> a[i][j];
                    if (a[i][j] == '@') {
                        quex[r] = i;
                        quey[r] = j;
                        vs[i][j] = (732 - 731);
                        r = r + (564 - 563);
                    }
                    j = (1085 - 977) - (404 - 297);
                }
            }
            i = i + (897 - 896);
        }
    }
    cin >> m;
    olg8pjV[(708 - 707)] = (770 - 770);
    olg8pjV[(783 - 781)] = (483 - 482);
    olg8pjV[(482 - 479)] = -(559 - 558);
    tempr = r;
    for (; (l != r) && (day < m);) {
        {
            i = l;
            while (i < tempr) {
                tx = quex[i];
                ty = quey[i];
                l = l + (152 - 151);
                {
                    j = (1825 - 954) - (1230 - 359);
                    while (j < (678 - 674)) {
                        if ((tx + dx[j] >= (996 - 996)) && (tx + dx[j] < g34Sok) && (ty + olg8pjV[j] >= (643 - 643)) && (ty + olg8pjV[j] < g34Sok)) {
                            if ((a[tx + dx[j]][ty + olg8pjV[j]] == '.') && (vs[tx + dx[j]][ty + olg8pjV[j]] == (211 - 211))) {
                                quex[r] = tx + dx[j];
                                quey[r] = ty + olg8pjV[j];
                                vs[tx + dx[j]][ty + olg8pjV[j]] = (923 - 922);
                                r = r + (480 - 479);
                            }
                        }
                        j = j + (74 - 73);
                    }
                }
                i = i + (936 - 935);
            }
        }
        {
            if ((950 - 950)) {
                return (31 - 31);
            }
        }
        day = day + (43 - 42);
        tempr = r;
    }
    cout << r;
    return 0;
}

