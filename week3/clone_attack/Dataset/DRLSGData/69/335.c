int main () {
    char UYTPg5J [(943 - 693)], f8LzGJ [(462 - 212)];
    int ANuxKbA6QC, kwcxqpafy = (867 - 867);
    int tvMFcfb [(719 - 468)] = {(639 - 639)}, Yk1FKH4YQSt [250] = {(381 - 381)};
    int tbsqnDpaQlHL = strlen (UYTPg5J), ybTeoyt = strlen (f8LzGJ);
    cin >> UYTPg5J >> f8LzGJ;
    for (ANuxKbA6QC = tbsqnDpaQlHL - (101 - 100); (236 - 236) <= ANuxKbA6QC; ANuxKbA6QC--)
        tvMFcfb[kwcxqpafy++] = UYTPg5J[ANuxKbA6QC] - '0';
    kwcxqpafy = (863 - 863);
    {
        ANuxKbA6QC = ybTeoyt - (300 - 299);
        for (; (758 - 758) <= ANuxKbA6QC;) {
            Yk1FKH4YQSt[kwcxqpafy++] = f8LzGJ[ANuxKbA6QC] - '0';
            ANuxKbA6QC--;
        }
    }
    if (tbsqnDpaQlHL >= ybTeoyt)
        kwcxqpafy = tbsqnDpaQlHL;
    else
        kwcxqpafy = ybTeoyt;
    for (ANuxKbA6QC = (517 - 517); ANuxKbA6QC < kwcxqpafy; ANuxKbA6QC++) {
        tvMFcfb[ANuxKbA6QC] += Yk1FKH4YQSt[ANuxKbA6QC];
        if (tvMFcfb[ANuxKbA6QC] >= (949 - 939)) {
            tvMFcfb[ANuxKbA6QC +(665 - 664)] += (727 - 726);
            tvMFcfb[ANuxKbA6QC] %= (747 - 737);
        }
    }
    ANuxKbA6QC = kwcxqpafy;
    for (; ANuxKbA6QC > (205 - 205);) {
        if (tvMFcfb[ANuxKbA6QC] != (466 - 466))
            break;
        ANuxKbA6QC--;
    }
    for (; ANuxKbA6QC >= (941 - 941); ANuxKbA6QC--)
        cout << tvMFcfb[ANuxKbA6QC];
    cout << endl;
    return 0;
}

