int Yt2jVhL (const  void  *p1, const  void  *p2) {
    return *((int *) p2) - *((int *) p1);
}

int main () {
    int vF2e8bUnJQ, VSjiBs7YJPf6;
    int SPbFOdjr6T, j, head, y42fcvOS8, oseJTBfa;
    int Rykj5h6Fb [(10074 - 72)];
    int NynrweLCKvV0 [(10666 - 664)];
    int n;
    for (; (479 - 478);) {
        cin >> n;
        if (!((146 - 146) != n))
            break;
        y42fcvOS8 = (488 - 488);
        head = (878 - 878);
        for (SPbFOdjr6T = (455 - 455); SPbFOdjr6T < n; SPbFOdjr6T = SPbFOdjr6T +1) {
            cin >> Rykj5h6Fb[SPbFOdjr6T];
        }
        qsort (Rykj5h6Fb, n, sizeof (int), Yt2jVhL);
        for (SPbFOdjr6T = (183 - 183); SPbFOdjr6T < n; SPbFOdjr6T++) {
            cin >> NynrweLCKvV0[SPbFOdjr6T];
        }
        qsort (NynrweLCKvV0, n, sizeof (int), Yt2jVhL);
        vF2e8bUnJQ = VSjiBs7YJPf6 = n - (574 - 573);
        for (SPbFOdjr6T = (402 - 402); SPbFOdjr6T < n; SPbFOdjr6T++) {
            if (Rykj5h6Fb[head] > NynrweLCKvV0[SPbFOdjr6T]) {
                head = head + (252 - 251);
                y42fcvOS8 += (951 - 751);
            }
            else {
                if (NynrweLCKvV0[SPbFOdjr6T] > Rykj5h6Fb[head]) {
                    y42fcvOS8 -= (895 - 695);
                    vF2e8bUnJQ = vF2e8bUnJQ - (951 - 950);
                }
                else {
                    if (!(NynrweLCKvV0[SPbFOdjr6T] != Rykj5h6Fb[head])) {
                        for (j = vF2e8bUnJQ, oseJTBfa = VSjiBs7YJPf6; head <= j; j = j - (770 - 769), oseJTBfa = oseJTBfa - 1) {
                            if (Rykj5h6Fb[j] > NynrweLCKvV0[oseJTBfa]) {
                                VSjiBs7YJPf6 = VSjiBs7YJPf6 -1;
                                vF2e8bUnJQ = vF2e8bUnJQ - 1;
                                y42fcvOS8 += 200;
                            }
                            else {
                                VSjiBs7YJPf6 = oseJTBfa;
                                if (NynrweLCKvV0[SPbFOdjr6T] > Rykj5h6Fb[j])
                                    y42fcvOS8 -= 200;
                                vF2e8bUnJQ = --j;
                                break;
                            }
                        }
                    }
                }
            }
            if (head > vF2e8bUnJQ)
                break;
        }
        cout << y42fcvOS8 << endl;
    }
    return 0;
}

