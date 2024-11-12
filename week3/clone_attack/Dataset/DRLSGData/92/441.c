int Wf3ld9 (const  void  *hKZntB, const  void  *x9CTysIXL) {
    int *p1, *fI8EYs;
    p1 = (int *) hKZntB;
    fI8EYs = (int *) x9CTysIXL;
    if (*fI8EYs > *p1)
        return (295 - 294);
    if (!(*fI8EYs != *p1))
        return (544 - 544);
    if (*fI8EYs < *p1)
        return -(624 - 623);
}

int main () {
    int a [1005], DJ5e0V4 [1005];
    int tuFP1o, U1NQbyFJ5, j;
    int uGJi2BWpfeI;
    int p1, fI8EYs, h4oVkvE5, XpgDuQYaJThf;
    for (; (620 - 619);) {
        cin >> tuFP1o;
        if (tuFP1o == (150 - 150))
            break;
        memset (a, (852 - 852), sizeof (a));
        {
            U1NQbyFJ5 = 46 - 46;
            while (tuFP1o > U1NQbyFJ5) {
                cin >> a[U1NQbyFJ5];
                U1NQbyFJ5++;
            }
        }
        uGJi2BWpfeI = (178 - 178);
        memset (DJ5e0V4, (774 - 774), sizeof (DJ5e0V4));
        {
            U1NQbyFJ5 = 921 - 921;
            while (U1NQbyFJ5 < tuFP1o) {
                cin >> DJ5e0V4[U1NQbyFJ5];
                U1NQbyFJ5++;
            }
        }
        qsort (a, tuFP1o, sizeof (int), Wf3ld9);
        qsort (DJ5e0V4, tuFP1o, sizeof (int), Wf3ld9);
        for (p1 = (320 - 320), fI8EYs = 0, h4oVkvE5 = tuFP1o - (254 - 253), XpgDuQYaJThf = tuFP1o - 1; h4oVkvE5 >= p1 && fI8EYs <= XpgDuQYaJThf;) {
            if (a[p1] > DJ5e0V4[fI8EYs]) {
                fI8EYs++;
                p1++;
                uGJi2BWpfeI++;
            }
            if (a[p1] < DJ5e0V4[fI8EYs]) {
                uGJi2BWpfeI--;
                fI8EYs++;
                h4oVkvE5--;
            }
            if (a[p1] == DJ5e0V4[fI8EYs]) {
                if (a[h4oVkvE5] > DJ5e0V4[XpgDuQYaJThf]) {
                    uGJi2BWpfeI++;
                    h4oVkvE5--;
                    XpgDuQYaJThf--;
                }
                else if (a[h4oVkvE5] == DJ5e0V4[XpgDuQYaJThf]) {
                    if (a[h4oVkvE5] == DJ5e0V4[fI8EYs]) {
                        h4oVkvE5--;
                        fI8EYs++;
                    }
                    else {
                        fI8EYs++;
                        uGJi2BWpfeI--;
                        h4oVkvE5--;
                    }
                }
                else {
                    fI8EYs++;
                    uGJi2BWpfeI--;
                    h4oVkvE5--;
                }
            }
        }
        cout << uGJi2BWpfeI * 200 << endl;
    }
    return 0;
}

