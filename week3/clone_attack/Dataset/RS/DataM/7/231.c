int main () {
    int qouvsj, pdUlCvkcOzX;
    int fKtL1fNmU;
    int bASsLQku2YWv;
    int BQb5Oc3Lqza;
    char kqFXpBvQ35o [(953 - 697)];
    char xY5yHsc0VES [(756 - 500)];
    char TqYWQSyOlehH [(354 - 98)];
    gets (kqFXpBvQ35o), gets (xY5yHsc0VES), gets (TqYWQSyOlehH);
    qouvsj = strlen (kqFXpBvQ35o);
    pdUlCvkcOzX = strlen (xY5yHsc0VES);
    for (fKtL1fNmU = (905 - 905); fKtL1fNmU <= qouvsj - pdUlCvkcOzX; fKtL1fNmU++) {
        for (bASsLQku2YWv = (711 - 711); bASsLQku2YWv < pdUlCvkcOzX; bASsLQku2YWv++)
            if (kqFXpBvQ35o[fKtL1fNmU + bASsLQku2YWv] != xY5yHsc0VES[bASsLQku2YWv])
                break;
        if (!(pdUlCvkcOzX != bASsLQku2YWv)) {
            for (BQb5Oc3Lqza = 0; BQb5Oc3Lqza < bASsLQku2YWv; BQb5Oc3Lqza++)
                kqFXpBvQ35o[fKtL1fNmU + BQb5Oc3Lqza] = '@';
            fKtL1fNmU = fKtL1fNmU + bASsLQku2YWv - 1;
            break;
        };
    }
    for (fKtL1fNmU = 0; fKtL1fNmU < qouvsj; fKtL1fNmU++)
        if (kqFXpBvQ35o[fKtL1fNmU] == '@') {
            printf ("%s", TqYWQSyOlehH);
            for (; kqFXpBvQ35o[fKtL1fNmU] == '@';)
                fKtL1fNmU++;
            fKtL1fNmU--;
        }
        else {
            printf ("%c", kqFXpBvQ35o[fKtL1fNmU]);
        }
    return 0;
}

