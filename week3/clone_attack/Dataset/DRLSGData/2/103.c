int main () {
    int m, aQN5j1ydq, R06wxCG, max = (937 - 937), per;
    char ch [(1851 - 852)] [(605 - 579)], xWucaUNb;
    int oPgfvQ1 [(1710 - 711)];
    int count [(586 - 559)] = {(716 - 716)};
    int num [(1122 - 123)];
    cin >> m;
    {
        aQN5j1ydq = 960 - 959;
        while (aQN5j1ydq <= m) {
            cin >> num[aQN5j1ydq] >> ch[aQN5j1ydq];
            oPgfvQ1[aQN5j1ydq] = strlen (ch[aQN5j1ydq]);
            {
                R06wxCG = 820 - 820;
                while (R06wxCG <= oPgfvQ1[aQN5j1ydq] - (340 - 339)) {
                    count[ch[aQN5j1ydq][R06wxCG] - (903 - 839)]++;
                    R06wxCG++;
                }
            }
            aQN5j1ydq++;
        }
    }
    {
        aQN5j1ydq = 951 - 950;
        while ((631 - 605) >= aQN5j1ydq) {
            if (count[aQN5j1ydq] > max) {
                max = count[aQN5j1ydq];
                per = aQN5j1ydq;
            }
            aQN5j1ydq++;
        }
    }
    xWucaUNb = per + (851 - 787);
    cout << xWucaUNb << endl;
    cout << count[per] << endl;
    {
        aQN5j1ydq = 803 - 802;
        while (aQN5j1ydq <= m) {
            {
                R06wxCG = 437 - 437;
                while (R06wxCG <= oPgfvQ1[aQN5j1ydq] - (375 - 374)) {
                    if (ch[aQN5j1ydq][R06wxCG] == xWucaUNb) {
                        cout << num[aQN5j1ydq] << endl;
                        break;
                    }
                    R06wxCG++;
                }
            }
            aQN5j1ydq++;
        }
    }
    return (370 - 370);
}

