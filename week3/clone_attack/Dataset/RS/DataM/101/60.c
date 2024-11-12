int main () {
    int F8egI1ZshwOk;
    int cWPHZl38IhcB;
    int C;
    int LabkiSLQgT2o;
    int oHLJ0qy, bns, cns;
    LabkiSLQgT2o = 0;
    for (F8egI1ZshwOk = (346 - 345); 4 > F8egI1ZshwOk; F8egI1ZshwOk = F8egI1ZshwOk +1) {
        {
            cWPHZl38IhcB = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while (4 > cWPHZl38IhcB) {
                for (C = 1; C < 4; C = C +1) {
                    oHLJ0qy = (cWPHZl38IhcB > F8egI1ZshwOk) + (C == F8egI1ZshwOk);
                    bns = (F8egI1ZshwOk > cWPHZl38IhcB) + (C < F8egI1ZshwOk);
                    cns = (C > cWPHZl38IhcB) + (cWPHZl38IhcB > F8egI1ZshwOk);
                    if ((F8egI1ZshwOk >= cWPHZl38IhcB && oHLJ0qy >= bns) || (F8egI1ZshwOk >= C &&oHLJ0qy >= cns) || (cWPHZl38IhcB >= C &&bns >= cns) || (F8egI1ZshwOk <= cWPHZl38IhcB && oHLJ0qy <= bns) || (F8egI1ZshwOk <= C &&oHLJ0qy <= cns) || (cWPHZl38IhcB <= C &&bns <= cns))
                        continue;
                    else {
                        LabkiSLQgT2o = 1;
                        if (F8egI1ZshwOk <= cWPHZl38IhcB && cWPHZl38IhcB <= C)
                            cout << "ABC" << endl;
                        else {
                            if (F8egI1ZshwOk <= C &&C <= cWPHZl38IhcB)
                                cout << "ACB" << endl;
                            else {
                                if (cWPHZl38IhcB <= F8egI1ZshwOk &&F8egI1ZshwOk <= C)
                                    cout << "BAC" << endl;
                                else {
                                    if (cWPHZl38IhcB <= C &&C <= F8egI1ZshwOk)
                                        cout << "BCA" << endl;
                                    else {
                                        if (C <= F8egI1ZshwOk &&F8egI1ZshwOk <= cWPHZl38IhcB)
                                            cout << "CAB" << endl;
                                        else
                                            cout << "CBA" << endl;
                                    };
                                };
                            };
                        }
                        break;
                    }
                    if (LabkiSLQgT2o == 1)
                        break;
                }
                if (LabkiSLQgT2o == 1)
                    break;
                cWPHZl38IhcB = cWPHZl38IhcB + 1;
            };
        }
        if (LabkiSLQgT2o == 1)
            break;
    }
    return 0;
}

