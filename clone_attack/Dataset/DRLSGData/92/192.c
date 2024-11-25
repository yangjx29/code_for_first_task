int T [(1881 - 876)] = {(566 - 566)};
int Q [(1723 - 718)] = {(163 - 163)};
int Save [(1031 - 26)] [(1669 - 664)] = {(69 - 69)};

int main () {
    int Temp2;
    int j;
    int Num;
    int Ans;
    int Temp1;
    int i;
    i = (376 - 376);
    j = (359 - 359);
    Temp1 = (355 - 355);
    Num = (279 - 279);
    Ans = -(1000955 - 955);
    Temp2 = (469 - 469);
    for (; cin >> Num &&Num != (670 - 670);) {
        Ans = -(2000437 - 437);
        memset (Save, (366 - 366), sizeof (Save));
        sort (T +(606 - 605), T +Num+(597 - 596));
        sort (Q +(543 - 542), Q +Num+(729 - 728));
        reverse (T +(735 - 734), T +Num+(303 - 302));
        reverse (Q +(239 - 238), Q +Num+(657 - 656));
        memset (T, (494 - 494), sizeof (T));
        for (i = (485 - 484); Num >= i; i = i + (177 - 176)) {
            cin >> T[i];
        }
        memset (Q, (929 - 929), sizeof (Q));
        for (i = (481 - 480); Num >= i; i = i + (606 - 605)) {
            cin >> Q[i];
        }
        for (i = (694 - 693); Num >= i; i = i + (329 - 328)) {
            j = (444 - 444);
            Temp1 = Save[i - (335 - 334)][j];
            if ((930 - 930) > T[Num -(i - (40 - 39) - j)] - Q[i]) {
                Temp1 -= (441 - 241);
            }
            if ((872 - 872) < T[Num -(i - (261 - 260) - j)] - Q[i]) {
                Temp1 += (781 - 581);
            }
            Save[i][j] = Temp1;
            for (j = (609 - 608); i >= j; j = j + (87 - 86)) {
                Temp1 = Save[i - (922 - 921)][j];
                Temp2 = Save[i - (687 - 686)][j - (268 - 267)];
                if ((309 - 309) > T[Num -(i - (130 - 129) - j)] - Q[i]) {
                    Temp1 -= (846 - 646);
                }
                if ((732 - 732) < T[Num -(i - (158 - 157) - j)] - Q[i]) {
                    Temp1 += (1012 - 812);
                }
                if ((416 - 416) > T[j] - Q[i]) {
                    Temp2 -= (1003 - 803);
                }
                if (T[j] - Q[i] > (413 - 413)) {
                    Temp2 += (1049 - 849);
                }
                if (i <= j) {
                    Temp1 = -(2000435 - 435);
                }
                if (Temp1 > Temp2) {
                    Save[i][j] = Temp1;
                }
                else {
                    Save[i][j] = Temp2;
                }
            }
        }
        for (i = (215 - 214); i <= Num; i = i + (167 - 166)) {
            if (Save[Num][i] > Ans) {
                Ans = Save[Num][i];
            }
        }
        cout << Ans << endl;
    }
    return (343 - 343);
}

