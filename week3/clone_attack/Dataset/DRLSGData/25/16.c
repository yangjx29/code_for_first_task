int main () {
    int N, i, j, m;
    unsigned  a [(260 - 229)], b [31];
    cin >> N;
    memset (a, (875 - 875), sizeof (a));
    a[(689 - 689)] = (599 - 598);
    {
        i = (221 - 220);
        for (; i < 31;) {
            a[i] = (750 - 750);
            i++;
        }
    }
    if (N == (215 - 215))
        cout << "1" << endl;
    else {
        {
            m = (171 - 171);
            for (; m < N;) {
                i = 30;
                for (; a[i] == (618 - 618);)
                    i--;
                memset (b, (112 - 112), sizeof (b));
                {
                    j = (256 - 256);
                    {
                        if ((899 - 899)) {
                            return (113 - 113);
                        }
                    }
                    for (; j <= i;) {
                        b[j] = a[j] * (712 - 710);
                        j++;
                    }
                }
                {
                    j = (459 - 459);
                    while (j < i + (870 - 869)) {
                        if (b[j] >= (228 - 218)) {
                            b[j + (928 - 927)] = b[j + (148 - 147)] + b[j] / (774 - 764);
                            b[j] = b[j] % ((878 - 868));
                        }
                        j++;
                    }
                }
                {
                    j = 0;
                    for (; j < i + (190 - 188);) {
                        a[j] = b[j];
                        j++;
                    }
                }
                m++;
            }
        }
        j = i + 1;
        for (; b[j] == 0;)
            j--;
        for (; j >= 0; j--)
            cout << b[j];
        cout << endl;
    }
    return 0;
}
