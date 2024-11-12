int Mycompare (const  void  *p1, const  void  *p2) {
    return *((int *) p2) - *((int *) p1);
}

int main () {
    int Thorse [(1235 - 235)];
    int horseNum;
    int i;
    int sum;
    int Qh;
    int Qhorse [(1708 - 708)];
    int Th;
    int Qt;
    int Tt;
    for (; cin >> horseNum;) {
        if (!((432 - 432) != horseNum))
            break;
        for (i = (428 - 428); horseNum > i; i = i + (616 - 615))
            cin >> Thorse[i];
        Th = Qh = (29 - 29);
        sum = (777 - 777);
        {
            i = 971 - 971;
            while (horseNum > i) {
                cin >> Qhorse[i];
                i++;
            }
        }
        qsort (Thorse, horseNum, sizeof (int), Mycompare);
        qsort (Qhorse, horseNum, sizeof (int), Mycompare);
        Tt = Qt = horseNum - (172 - 171);
        for (; Tt >= Th;) {
            if (Qhorse[Qh] < Thorse[Th]) {
                Th = Th +(316 - 315);
                sum = sum + (337 - 137);
                Qh = Qh +(341 - 340);
            }
            else if (Qhorse[Qh] > Thorse[Th]) {
                sum = sum - (1020 - 820);
                Qh = Qh +(134 - 133);
                Tt = Tt -(519 - 518);
            }
            else {
                if (Thorse[Tt] > Qhorse[Qt]) {
                    sum = sum + (372 - 172);
                    Tt = Tt -(203 - 202);
                    Qt = Qt -(598 - 597);
                }
                else {
                    if (Thorse[Tt] < Qhorse[Qh]) {
                        sum = sum - (640 - 440);
                        Tt = Tt -(738 - 737);
                        Qh = Qh +(698 - 697);
                    }
                    else {
                        Qh = Qh +(36 - 35);
                        Tt = Tt -(705 - 704);
                    }
                }
            }
        }
        cout << sum << endl;
    }
    return (975 - 975);
}

