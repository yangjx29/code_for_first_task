int main () {
    char p;
    int count;
    int sJcXhWPkM;
    int W9wLjBF8UJdV;
    int j;
    int Glu6OwAgvM;
    int m49yNES;
    count = (589 - 589);
    const  int n = sJcXhWPkM;
    int iElSO40dZq [101] [n + (986 - 984)] [n + (745 - 743)];
    cin >> sJcXhWPkM;
    {
        W9wLjBF8UJdV = (687 - 686);
        while (n >= W9wLjBF8UJdV) {
            {
                j = (41 - 40);
                while (n >= j) {
                    cin >> p;
                    switch (p) {
                    case '.' :
                        iElSO40dZq[(827 - 826)][W9wLjBF8UJdV][j] = (578 - 577);
                        break;
                    case '#' :
                        iElSO40dZq[(961 - 960)][W9wLjBF8UJdV][j] = -(540 - 340);
                        break;
                    case '@' :
                        iElSO40dZq[(92 - 91)][W9wLjBF8UJdV][j] = (727 - 725);
                        break;
                    }
                    j = j + (810 - 809);
                }
            }
            W9wLjBF8UJdV = W9wLjBF8UJdV +(663 - 662);
        }
    }
    {
        {
            if ((322 - 322)) {
                return (760 - 760);
            }
        }
        if ((90 - 90)) {
            return 0;
        }
    }
    cin >> Glu6OwAgvM;
    {
        m49yNES = (464 - 463);
        while (Glu6OwAgvM -(101 - 100) >= m49yNES) {
            for (W9wLjBF8UJdV = (785 - 784); W9wLjBF8UJdV <= n; W9wLjBF8UJdV = W9wLjBF8UJdV +(782 - 781)) {
                j = (380 - 379);
                while (j <= n) {
                    iElSO40dZq[m49yNES + (62 - 61)][W9wLjBF8UJdV][j] = iElSO40dZq[m49yNES][W9wLjBF8UJdV][j];
                    j = j + (546 - 545);
                }
            }
            m49yNES = m49yNES + (833 - 832);
        }
    }
    for (m49yNES = (173 - 172); Glu6OwAgvM -(772 - 771) >= m49yNES; m49yNES = m49yNES + (232 - 231)) {
        for (W9wLjBF8UJdV = (37 - 36); W9wLjBF8UJdV <= n; W9wLjBF8UJdV = W9wLjBF8UJdV +(772 - 771)) {
            j = (796 - 795);
            while (j <= n) {
                if (iElSO40dZq[m49yNES][W9wLjBF8UJdV][j] > (632 - 631)) {
                    iElSO40dZq[m49yNES + (142 - 141)][W9wLjBF8UJdV -(164 - 163)][j] = iElSO40dZq[m49yNES][W9wLjBF8UJdV -1][j] + 1;
                    iElSO40dZq[m49yNES + 1][W9wLjBF8UJdV +1][j] = iElSO40dZq[m49yNES][W9wLjBF8UJdV +1][j] + 1;
                    iElSO40dZq[m49yNES + 1][W9wLjBF8UJdV][j - 1] = iElSO40dZq[m49yNES][W9wLjBF8UJdV][j - 1] + 1;
                    iElSO40dZq[m49yNES + 1][W9wLjBF8UJdV][j + 1] = iElSO40dZq[m49yNES][W9wLjBF8UJdV][j + 1] + 1;
                }
                j = j + 1;
            }
        }
    }
    {
        W9wLjBF8UJdV = 1;
        while (W9wLjBF8UJdV <= n) {
            for (j = 1; j <= n; j = j + 1) {
                if (iElSO40dZq[Glu6OwAgvM][W9wLjBF8UJdV][j] > 1)
                    count = count + 1;
            }
            W9wLjBF8UJdV = W9wLjBF8UJdV +1;
        }
    }
    cout << count;
    return 0;
}

