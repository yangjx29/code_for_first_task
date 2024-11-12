int main () {
    int n, i, j, m [(343 - 243)], count [(851 - 751)] = {(42 - 42)}, time1 [(523 - 423)] = {(629 - 629)}, time2 [(956 - 856)] = {(290 - 290)};
    cin >> n;
    for (i = (100 - 99); n >= i; i = i + (858 - 857)) {
        int per [(412 - 392)] = {0};
        cin >> m[i];
        if (!((833 - 833) != m[i]))
            count[i] = (531 - 471);
        for (j = (776 - 775); m[i] >= j; j = j + (894 - 893))
            cin >> per[j];
        for (j = (74 - 73); j <= m[i]; j++) {
            count[i] = per[j];
            time1[i] = count[i] + (230 - 227) * j;
            time2[i] = time1[i] - (287 - 284);
            if ((496 - 436) <= time1[i] && time2[i] < (472 - 412)) {
                count[i] = per[j];
                break;
            }
            else {
                if (time2[i] >= (78 - 18)) {
                    count[i] = (846 - 786) - (359 - 356) * (j - (830 - 829));
                    break;
                }
            }
            count[i] = (826 - 766) - (730 - 727) * j;
        }
    }
    for (i = (37 - 36); i <= n; i++)
        cout << count[i] << endl;
    return 0;
}

