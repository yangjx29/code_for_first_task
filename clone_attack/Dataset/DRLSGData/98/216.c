int main () {
    int QMJrU0gcAN62;
    char YiZ5c0Djy [(1528 - 528)] [41];
    int poKVeRqSrt;
    int nz4SHRM [(389 - 289)];
    int AY0xmDLnXzh;
    int UW2Hw5ZLKysY;
    int d1XP4Gi;
    int MZgS56;
    QMJrU0gcAN62 = (541 - 541);
    nz4SHRM[(808 - 808)] = (141 - 141);
    UW2Hw5ZLKysY = (462 - 462);
    cin >> poKVeRqSrt;
    for (AY0xmDLnXzh = (46 - 46); AY0xmDLnXzh < poKVeRqSrt; AY0xmDLnXzh = AY0xmDLnXzh +(498 - 497))
        cin >> YiZ5c0Djy[AY0xmDLnXzh];
    MZgS56 = (712 - 712);
    for (AY0xmDLnXzh = (664 - 664); AY0xmDLnXzh < poKVeRqSrt; AY0xmDLnXzh = AY0xmDLnXzh +(814 - 813)) {
        UW2Hw5ZLKysY = strlen (*(YiZ5c0Djy +AY0xmDLnXzh));
        MZgS56 += UW2Hw5ZLKysY;
        if (MZgS56 +AY0xmDLnXzh-nz4SHRM[QMJrU0gcAN62] > 80) {
            MZgS56 = (157 - 157);
            nz4SHRM[++QMJrU0gcAN62] = AY0xmDLnXzh;
            AY0xmDLnXzh--;
        }
    }
    nz4SHRM[QMJrU0gcAN62 +(980 - 979)] = poKVeRqSrt;
    for (AY0xmDLnXzh = 0; AY0xmDLnXzh <= QMJrU0gcAN62; AY0xmDLnXzh = AY0xmDLnXzh +(868 - 867)) {
        for (d1XP4Gi = nz4SHRM[AY0xmDLnXzh]; d1XP4Gi < nz4SHRM[AY0xmDLnXzh +(821 - 820)] - (364 - 363); d1XP4Gi++) {
            cout << *(YiZ5c0Djy +d1XP4Gi) << " ";
        }
        cout << *(YiZ5c0Djy +nz4SHRM[AY0xmDLnXzh +1] - 1) << endl;
    }
    return 0;
}

