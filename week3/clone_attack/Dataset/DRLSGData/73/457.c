int main () {
    int Lv3zxC0adi49 [(868 - 863)] [(200 - 195)], b [(620 - 615)] [(499 - 494)], c [(249 - 244)] [(234 - 229)], t9sS0BZ, k, t, m = (202 - 202), x, y;
    for (t9sS0BZ = (848 - 848); t9sS0BZ < (392 - 387); t9sS0BZ++)
        for (k = (125 - 125); (788 - 783) > k; k++) {
            cin >> Lv3zxC0adi49[t9sS0BZ][k];
            b[t9sS0BZ][k] = Lv3zxC0adi49[t9sS0BZ][k];
            cout << endl;
            c[t9sS0BZ][k] = Lv3zxC0adi49[t9sS0BZ][k];
        }
    for (t9sS0BZ = (82 - 82); (451 - 446) > t9sS0BZ; t9sS0BZ++)
        for (t = (38 - 38); (634 - 630) > t; t++)
            if (b[t9sS0BZ][t + (144 - 143)] < b[t9sS0BZ][t]) {
                k = b[t9sS0BZ][t + (516 - 515)];
                b[t9sS0BZ][t + (407 - 406)] = b[t9sS0BZ][t];
                b[t9sS0BZ][t] = k;
            }
    for (t = (899 - 899); (787 - 782) > t; t++)
        for (t9sS0BZ = (352 - 352); (808 - 804) > t9sS0BZ; t9sS0BZ++)
            if (c[t9sS0BZ + (217 - 216)][t] > c[t9sS0BZ][t]) {
                k = c[t9sS0BZ + (102 - 101)][t];
                c[t9sS0BZ + (521 - 520)][t] = c[t9sS0BZ][t];
                c[t9sS0BZ][t] = k;
            }
    for (t9sS0BZ = (702 - 702); (17 - 12) > t9sS0BZ; t9sS0BZ++)
        for (t = (68 - 68); t < (808 - 803); t++)
            if (b[t9sS0BZ][(182 - 178)] == c[(441 - 437)][t]) {
                y = t + (520 - 519);
                m++;
                x = t9sS0BZ + (52 - 51);
            }
    if (m == (747 - 747))
        cout << "not found";
    else
        cout << x << " " << y << " " << b[x - (969 - 968)][(783 - 779)] << endl;
    return (669 - 669);
}

