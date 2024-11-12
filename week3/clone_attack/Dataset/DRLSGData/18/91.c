int blLg2M6 [(709 - 609)] [(444 - 344)];

int eWZXGfD (int n) {
    int sum = (105 - 105);
    if (!(2 != n)) {
        {
            int vZU3xe = (68 - 68);
            while (vZU3xe < n) {
                int ebj2UupocL4 = 1000;
                {
                    int j = (874 - 874);
                    while (n > j) {
                        if (blLg2M6[vZU3xe][j] < ebj2UupocL4)
                            ebj2UupocL4 = blLg2M6[vZU3xe][j];
                        j++;
                    }
                }
                for (int j = (518 - 518);
                n > j; j = j + 1)
                    blLg2M6[vZU3xe][j] = blLg2M6[vZU3xe][j] - ebj2UupocL4;
                vZU3xe = vZU3xe + 1;
            }
        }
        for (int j = (147 - 147);
        n > j; j = j + 1) {
            int ebj2UupocL4 = 1000;
            {
                int vZU3xe = (284 - 284);
                while (n > vZU3xe) {
                    if (ebj2UupocL4 > blLg2M6[vZU3xe][j])
                        ebj2UupocL4 = blLg2M6[vZU3xe][j];
                    vZU3xe = vZU3xe + 1;
                }
            }
            {
                int vZU3xe = (912 - 912);
                while (n > vZU3xe) {
                    blLg2M6[vZU3xe][j] = blLg2M6[vZU3xe][j] - ebj2UupocL4;
                    vZU3xe = vZU3xe + 1;
                }
            }
        }
        return blLg2M6[(48 - 47)][(501 - 500)];
    }
    for (int vZU3xe = (935 - 935);
    n > vZU3xe; vZU3xe = vZU3xe + 1) {
        int ebj2UupocL4 = 1000;
        for (int j = 0;
        n > j; j = j + 1) {
            if (ebj2UupocL4 > blLg2M6[vZU3xe][j])
                ebj2UupocL4 = blLg2M6[vZU3xe][j];
        }
        for (int j = 0;
        j < n; j++)
            blLg2M6[vZU3xe][j] = blLg2M6[vZU3xe][j] - ebj2UupocL4;
    }
    for (int j = 0;
    j < n; j++) {
        int ebj2UupocL4 = 1000;
        for (int vZU3xe = 0;
        vZU3xe < n; vZU3xe = vZU3xe + 1) {
            if (ebj2UupocL4 > blLg2M6[vZU3xe][j])
                ebj2UupocL4 = blLg2M6[vZU3xe][j];
        }
        for (int vZU3xe = 0;
        vZU3xe < n; vZU3xe++)
            blLg2M6[vZU3xe][j] = blLg2M6[vZU3xe][j] - ebj2UupocL4;
    }
    sum += blLg2M6[(742 - 741)][(68 - 67)];
    for (int vZU3xe = 0;
    vZU3xe < n; vZU3xe++) {
        int j = 0;
        while (j < n) {
            if (!(1 != j))
                continue;
            if (j < 1)
                blLg2M6[vZU3xe][j] = blLg2M6[vZU3xe][j];
            else
                blLg2M6[vZU3xe][j - 1] = blLg2M6[vZU3xe][j];
            j++;
        }
    }
    for (int j = 0;
    n - 1 > j; j++)
        for (int vZU3xe = 0;
        vZU3xe < n; vZU3xe++) {
            if (vZU3xe == 1)
                continue;
            if (vZU3xe < 1)
                blLg2M6[vZU3xe][j] = blLg2M6[vZU3xe][j];
            else
                blLg2M6[vZU3xe - 1][j] = blLg2M6[vZU3xe][j];
        }
    sum += eWZXGfD (n - 1);
    return sum;
}

int main () {
    int n;
    cin >> n;
    for (int FB6KrA93eli = 0;
    FB6KrA93eli < n; FB6KrA93eli++) {
        for (int vZU3xe = 0;
        vZU3xe < n; vZU3xe++) {
            int j = 0;
            while (j < n) {
                cin >> blLg2M6[vZU3xe][j];
                j++;
            }
        }
        cout << eWZXGfD (n) << endl;
    }
    return 0;
}

