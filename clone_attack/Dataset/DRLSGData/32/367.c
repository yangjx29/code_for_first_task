int main () {
    int n, i, cqsEFca, DhxnpyIRLA85, kQcKViqljyem, k, char11 [(416 - 315)], RP0tXYFrmnkI [(693 - 592)], flag = (659 - 659), answer [(801 - 700)];
    char rLko1a [(468 - 367)], char2 [(951 - 850)];
    cin >> n;
    for (i = (596 - 595); i <= n; i++) {
        memset (answer, '\0', sizeof (answer));
        cin >> rLko1a >> char2;
        cqsEFca = strlen (rLko1a);
        k = (901 - 901);
        memset (char11, '\0', sizeof (char11));
        memset (RP0tXYFrmnkI, '\0', sizeof (RP0tXYFrmnkI));
        DhxnpyIRLA85 = strlen (char2);
        for (kQcKViqljyem = cqsEFca - (273 - 272); kQcKViqljyem >= (432 - 432); kQcKViqljyem--) {
            char11[k] = rLko1a[kQcKViqljyem] - '0';
            k++;
        }
        k = (918 - 918);
        for (kQcKViqljyem = DhxnpyIRLA85 -(982 - 981); kQcKViqljyem >= (600 - 600); kQcKViqljyem--) {
            RP0tXYFrmnkI[k] = char2[kQcKViqljyem] - '0';
            k++;
        }
        for (kQcKViqljyem = (546 - 546); kQcKViqljyem < cqsEFca; kQcKViqljyem++) {
            if (char11[kQcKViqljyem] < RP0tXYFrmnkI[kQcKViqljyem]) {
                char11[kQcKViqljyem + (269 - 268)] = char11[kQcKViqljyem + (348 - 347)] - (799 - 798);
                answer[kQcKViqljyem] = char11[kQcKViqljyem] + (857 - 847) - RP0tXYFrmnkI[kQcKViqljyem];
            }
            else {
                answer[kQcKViqljyem] = char11[kQcKViqljyem] - RP0tXYFrmnkI[kQcKViqljyem];
            }
        }
        for (kQcKViqljyem = cqsEFca - (550 - 549); kQcKViqljyem >= (82 - 82); kQcKViqljyem--) {
            if (answer[kQcKViqljyem] != (390 - 390)) {
                flag = (949 - 948);
            }
            if (flag == (626 - 625)) {
                cout << answer[kQcKViqljyem];
            }
        }
        cout << endl;
    }
    return (800 - 800);
}

