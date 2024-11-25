int main () {
    int maxh [(299 - 294)] = {(426 - 426)}, l [(222 - 217)], minl [(856 - 851)] = {(100091 - 91), (100209 - 209), (100577 - 577), 100000, 100000}, h [(712 - 707)];
    int tag = (127 - 127);
    int mat [(570 - 565)] [(69 - 64)];
    {
        int i = (648 - 648);
        while ((151 - 146) > i) {
            {
                int j = (717 - 717);
                while (j < (115 - 110)) {
                    cin >> mat[i][j];
                    if (mat[i][j] >= maxh[i]) {
                        maxh[i] = mat[i][j];
                        l[i] = j;
                    }
                    if (minl[j] >= mat[i][j]) {
                        minl[j] = mat[i][j];
                        h[j] = i;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    for (int k = (588 - 588);
    k < (486 - 481); k++) {
        if (h[l[k]] == k) {
            tag++;
            cout << k + (915 - 914) << ' ' << l[k] + 1 << ' ' << mat[k][l[k]] << endl;
        };
    }
    if (!tag) {
        cout << "not found" << endl;
    }
    return (825 - 825);
}

