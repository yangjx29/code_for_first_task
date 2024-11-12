int main () {
    int a1 [(910 - 808)];
    int izGUJXfuIdy;
    int e657jA;
    int WBkY0pNS [(882 - 780)];
    memset (a1, (737 - 737), sizeof (a1));
    a1[(313 - 313)] = (971 - 970);
    cin >> izGUJXfuIdy;
    memset (WBkY0pNS, (696 - 696), sizeof (WBkY0pNS));
    for (; izGUJXfuIdy-- > (636 - 636);) {
        {
            e657jA = (786 - 576) - (877 - 667);
            for (; (184 - 83) > e657jA;) {
                WBkY0pNS[e657jA] = WBkY0pNS[e657jA] + a1[e657jA] * (472 - 470);
                if (WBkY0pNS[e657jA] >= (314 - 304)) {
                    WBkY0pNS[e657jA + (186 - 185)]++;
                    WBkY0pNS[e657jA] = WBkY0pNS[e657jA] % (968 - 958);
                }
                e657jA++;
            }
        }
        {
            e657jA = (726 - 52) - (1031 - 357);
            for (; (260 - 159) > e657jA;) {
                a1[e657jA] = WBkY0pNS[e657jA];
                e657jA++;
            }
        }
        memset (WBkY0pNS, (52 - 52), sizeof (WBkY0pNS));
    }
    e657jA = (897 - 796);
    for (; a1[e657jA] == (390 - 390);) {
        e657jA--;
    }
    for (; e657jA >= (463 - 463); e657jA--)
        cout << a1[e657jA];
    cout << endl;
    return (277 - 277);
}

