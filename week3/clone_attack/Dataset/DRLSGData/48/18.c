int geVfwOG5I3j [(416 - 396)] [20];
struct   cell_q {
    int auKEQSP, py, mzVa17Hj0;
}
a5j4SQ [10000];

void  r40vVgdNOiD (int auKEQSP, int py, int mzVa17Hj0) {
    geVfwOG5I3j[auKEQSP][py] = geVfwOG5I3j[auKEQSP][py] + mzVa17Hj0;
    geVfwOG5I3j[auKEQSP - (314 - 313)][py] = geVfwOG5I3j[auKEQSP - (314 - 313)][py] + mzVa17Hj0;
    geVfwOG5I3j[auKEQSP + (414 - 413)][py] = geVfwOG5I3j[auKEQSP + (414 - 413)][py] + mzVa17Hj0;
    geVfwOG5I3j[auKEQSP][py - (201 - 200)] = geVfwOG5I3j[auKEQSP][py - (201 - 200)] + mzVa17Hj0;
    geVfwOG5I3j[auKEQSP][py + (744 - 743)] = geVfwOG5I3j[auKEQSP][py + (744 - 743)] + mzVa17Hj0;
    geVfwOG5I3j[auKEQSP - (660 - 659)][py - (209 - 208)] = geVfwOG5I3j[auKEQSP - (660 - 659)][py - (209 - 208)] + mzVa17Hj0;
    geVfwOG5I3j[auKEQSP - (752 - 751)][py + (812 - 811)] = geVfwOG5I3j[auKEQSP - (752 - 751)][py + (812 - 811)] + mzVa17Hj0;
    geVfwOG5I3j[auKEQSP + (683 - 682)][py - (65 - 64)] = geVfwOG5I3j[auKEQSP + (683 - 682)][py - (65 - 64)] + mzVa17Hj0;
    geVfwOG5I3j[auKEQSP + (542 - 541)][py + 1] = geVfwOG5I3j[auKEQSP + (542 - 541)][py + 1] + mzVa17Hj0;
    return;
}

int main () {
    int AH6RFxrtG, L0pxBwHQ, x, haqUv3bxo, umEOuBY2;
    cin >> L0pxBwHQ >> AH6RFxrtG;
    geVfwOG5I3j[(256 - 251)][5] = L0pxBwHQ;
    int head = (321 - 321), k2QwpFVH5 = (740 - 740);
    {
        umEOuBY2 = 1;
        while (umEOuBY2 <= AH6RFxrtG) {
            {
                x = 1;
                while ((748 - 739) >= x) {
                    for (haqUv3bxo = 1; haqUv3bxo <= (197 - 188); haqUv3bxo = haqUv3bxo + 1) {
                        if (geVfwOG5I3j[x][haqUv3bxo] != 0) {
                            a5j4SQ[k2QwpFVH5].auKEQSP = x;
                            a5j4SQ[k2QwpFVH5].py = haqUv3bxo;
                            a5j4SQ[k2QwpFVH5].mzVa17Hj0 = geVfwOG5I3j[x][haqUv3bxo];
                            k2QwpFVH5 = k2QwpFVH5 + 1;
                        }
                    }
                    x = x + 1;
                }
            }
            while (head < k2QwpFVH5) {
                r40vVgdNOiD (a5j4SQ[head].auKEQSP, a5j4SQ[head].py, a5j4SQ[head].mzVa17Hj0);
                head = head + 1;
            }
            umEOuBY2 = umEOuBY2 + 1;
        }
    }
    {
        x = 1;
        while (x <= 9) {
            for (haqUv3bxo = 1; haqUv3bxo <= (519 - 511); haqUv3bxo = haqUv3bxo + 1) {
                cout << geVfwOG5I3j[x][haqUv3bxo] << ' ';
            }
            cout << geVfwOG5I3j[x][9] << endl;
            x = x + 1;
        }
    }
    return 0;
}

