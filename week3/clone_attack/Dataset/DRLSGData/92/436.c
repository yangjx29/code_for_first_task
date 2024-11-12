int PH7hirbv5Jj [(1910 - 909)];
int JY5SpAgIhqR [(1749 - 748)];

int y40zRwDSxY (const  void  *DWQY30, const  void  *sHFBjqm) {
    return *(int*) sHFBjqm - *(int*) DWQY30;
}

int main () {
    int dRxbDV;
    int Nme0EV;
    for (; cin >> Nme0EV;) {
        int Zg2lvTeNxX0a, qRqieMEh;
        int EmaD60b29Co4 = (694 - 694), Fwu0qMErKakD = (137 - 137);
        if (!((850 - 850) != Nme0EV))
            break;
        cout << dRxbDV * (293 - 93) << endl;
        dRxbDV = (746 - 746);
        for (Zg2lvTeNxX0a = (370 - 370); Zg2lvTeNxX0a < Nme0EV; Zg2lvTeNxX0a++)
            cin >> JY5SpAgIhqR[Zg2lvTeNxX0a];
        {
            Zg2lvTeNxX0a = 229 - 229;
            while (Zg2lvTeNxX0a < Nme0EV) {
                cin >> PH7hirbv5Jj[Zg2lvTeNxX0a];
                Zg2lvTeNxX0a++;
            }
        }
        qsort (JY5SpAgIhqR, Nme0EV, sizeof (int), y40zRwDSxY);
        qsort (PH7hirbv5Jj, Nme0EV, sizeof (int), y40zRwDSxY);
        for (Zg2lvTeNxX0a = Nme0EV -(203 - 202), qRqieMEh = Nme0EV -(285 - 284); Zg2lvTeNxX0a >= EmaD60b29Co4 &&Fwu0qMErKakD <= qRqieMEh;) {
            if (PH7hirbv5Jj[qRqieMEh] > JY5SpAgIhqR[Zg2lvTeNxX0a]) {
                dRxbDV--;
                Fwu0qMErKakD++;
                Zg2lvTeNxX0a--;
            }
            else if (JY5SpAgIhqR[Zg2lvTeNxX0a] > PH7hirbv5Jj[qRqieMEh]) {
                Zg2lvTeNxX0a--;
                qRqieMEh--;
                dRxbDV++;
            }
            else {
                if (JY5SpAgIhqR[EmaD60b29Co4] > PH7hirbv5Jj[Fwu0qMErKakD]) {
                    dRxbDV++;
                    Fwu0qMErKakD++;
                    EmaD60b29Co4++;
                }
                else {
                    if (PH7hirbv5Jj[Fwu0qMErKakD] != JY5SpAgIhqR[Zg2lvTeNxX0a])
                        dRxbDV--;
                    Fwu0qMErKakD++;
                    Zg2lvTeNxX0a--;
                }
            }
        }
    }
    return (152 - 152);
}

