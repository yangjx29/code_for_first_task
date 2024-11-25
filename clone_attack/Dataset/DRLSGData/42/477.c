int main () {
    int AoP8ZI;
    int zRwUP7;
    int Q7MAdBT4;
    int m;
    int j;
    int rvti1VBc [(100493 - 493)];
    cin >> AoP8ZI;
    {
        zRwUP7 = 595 - 595;
        while (AoP8ZI -1 >= zRwUP7) {
            cin >> rvti1VBc[zRwUP7];
            zRwUP7++;
        }
    }
    cin >> Q7MAdBT4;
    {
        j = 0;
        m = 0;
        while (m <= AoP8ZI -1) {
            if (rvti1VBc[m] != Q7MAdBT4) {
                rvti1VBc[j++] = rvti1VBc[m];
                if (j != 1)
                    cout << ' ' << rvti1VBc[j - 1];
                else
                    cout << rvti1VBc[j - 1];
            }
            m++;
        }
    }
    return 0;
}

