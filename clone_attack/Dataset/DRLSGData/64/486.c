int main () {
    int y;
    int x;
    int j;
    int b [(356 - 346)];
    int SCpXYVjxibn;
    int e [(309 - 209)];
    int m;
    int PzIGfL [(346 - 336)];
    double  NpnWLtkCfIX [(1008 - 908)];
    int a [(727 - 717)];
    int n;
    int t;
    cin >> n;
    t = (669 - 669);
    {
        SCpXYVjxibn = (746 - 746);
        for (; n > SCpXYVjxibn;) {
            cin >> a[SCpXYVjxibn] >> b[SCpXYVjxibn] >> PzIGfL[SCpXYVjxibn];
            SCpXYVjxibn = SCpXYVjxibn +(964 - 963);
        }
    }
    {
        SCpXYVjxibn = (440 - 440);
        for (; SCpXYVjxibn < n;) {
            {
                j = SCpXYVjxibn +(172 - 171);
                while (n > j) {
                    e[t] = (284 - 274) * SCpXYVjxibn +j;
                    NpnWLtkCfIX[e[t]] = sqrt ((a[SCpXYVjxibn] - a[j]) * (a[SCpXYVjxibn] - a[j]) + (b[SCpXYVjxibn] - b[j]) * (b[SCpXYVjxibn] - b[j]) + (PzIGfL[SCpXYVjxibn] - PzIGfL[j]) * (PzIGfL[SCpXYVjxibn] - PzIGfL[j]));
                    j = j + (286 - 285);
                    t = t + (631 - 630);
                }
            }
            SCpXYVjxibn = SCpXYVjxibn +(815 - 814);
        }
    }
    {
        SCpXYVjxibn = (277 - 276);
        for (; SCpXYVjxibn < t;) {
            {
                j = (774 - 774);
                for (; t - SCpXYVjxibn > j;) {
                    if (NpnWLtkCfIX[e[j + (428 - 427)]] > NpnWLtkCfIX[e[j]]) {
                        m = e[j];
                        e[j] = e[j + (662 - 661)];
                        e[j + (91 - 90)] = m;
                    }
                    j = j + (974 - 973);
                }
            }
            SCpXYVjxibn = SCpXYVjxibn +(337 - 336);
        }
    }
    {
        {
            {
                if ((222 - 222)) {
                    return (560 - 560);
                }
            }
            if ((796 - 796)) {
                return (156 - 156);
            }
        }
        SCpXYVjxibn = (617 - 617);
        for (; t > SCpXYVjxibn;) {
            x = e[SCpXYVjxibn] % (729 - 719);
            y = (e[SCpXYVjxibn] - x) / 10;
            {
                if (0) {
                    return 0;
                }
            }
            cout << "(" << a[y] << "," << b[y] << "," << PzIGfL[y] << ")-(" << a[x] << "," << b[x] << "," << PzIGfL[x] << ")=" << fixed << setprecision ((278 - 276)) << NpnWLtkCfIX[e[SCpXYVjxibn]] << endl;
            SCpXYVjxibn = SCpXYVjxibn +1;
        }
    }
    return 0;
}

