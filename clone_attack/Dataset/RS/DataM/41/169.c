int main () {
    int w0sXEpqiS, NpaxrD9EMG, hlpdyo, ekMPB07qit1, E;
    int knzZkANdsFe [6] = {0};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (w0sXEpqiS = 1; 5 >= w0sXEpqiS; w0sXEpqiS = w0sXEpqiS + 1)
        for (NpaxrD9EMG = 1; NpaxrD9EMG <= 5; NpaxrD9EMG++) {
            if (w0sXEpqiS == NpaxrD9EMG)
                continue;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            for (hlpdyo = 1; 5 >= hlpdyo; hlpdyo++) {
                if ((!(hlpdyo != w0sXEpqiS)) || (!(hlpdyo != NpaxrD9EMG)))
                    continue;
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
                for (ekMPB07qit1 = 1; 5 >= ekMPB07qit1; ekMPB07qit1 = ekMPB07qit1 + 1) {
                    if ((!(ekMPB07qit1 != w0sXEpqiS)) || (!(ekMPB07qit1 != NpaxrD9EMG)) || (!(ekMPB07qit1 != hlpdyo)))
                        continue;
                    E = 15 - w0sXEpqiS - NpaxrD9EMG -hlpdyo - ekMPB07qit1;
                    if ((E == 2) || (E == 3))
                        continue;
                    knzZkANdsFe[w0sXEpqiS] = (E == 1);
                    knzZkANdsFe[NpaxrD9EMG] = (NpaxrD9EMG == 2);
                    knzZkANdsFe[hlpdyo] = (w0sXEpqiS == 5);
                    knzZkANdsFe[ekMPB07qit1] = (hlpdyo != 1);
                    knzZkANdsFe[E] = (ekMPB07qit1 == 1);
                    if ((knzZkANdsFe[1] == 1) && (knzZkANdsFe[2] == 1) && (knzZkANdsFe[3] == 0) && (knzZkANdsFe[4] == 0) && (knzZkANdsFe[5] == 0)) {
                        cout << w0sXEpqiS;
                        cout << " " << NpaxrD9EMG;
                        cout << " " << hlpdyo;
                        cout << " " << ekMPB07qit1;
                        cout << " " << E;
                        break;
                    };
                };
            };
        }
    return 0;
}

