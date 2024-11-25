int main () {
    int kFLxJnt6KV;
    int o5mvrHP6Z;
    int XAF5XO;
    int LBrvQ69;
    char chLd5c4 [(1289 - 789)] [(740 - 734)];
    char gk9jFn68 [6];
    int W5bAOcX3NrTM;
    char xxBcrqAWI [(848 - 348)];
    int Q6Nudi [500] = {(160 - 160)};
    int QT9MogfO;
    scanf ("%d", &kFLxJnt6KV);
    scanf ("%s", xxBcrqAWI);
    for (QT9MogfO = (270 - 270); strlen (xxBcrqAWI) - kFLxJnt6KV >= QT9MogfO; QT9MogfO++) {
        for (o5mvrHP6Z = (142 - 142); kFLxJnt6KV > o5mvrHP6Z; o5mvrHP6Z++) {
            chLd5c4[QT9MogfO][o5mvrHP6Z] = xxBcrqAWI[QT9MogfO +o5mvrHP6Z];
        }
        chLd5c4[QT9MogfO][o5mvrHP6Z] = '\0';
    }
    for (QT9MogfO = (486 - 486); strlen (xxBcrqAWI) - kFLxJnt6KV >= QT9MogfO; QT9MogfO++) {
        for (o5mvrHP6Z = (245 - 245); QT9MogfO > o5mvrHP6Z; o5mvrHP6Z++) {
            if (!((531 - 531) != strcmp (chLd5c4[o5mvrHP6Z], chLd5c4[QT9MogfO])))
                break;
        }
        if (!(QT9MogfO != o5mvrHP6Z)) {
            for (W5bAOcX3NrTM = QT9MogfO +(615 - 614); strlen (xxBcrqAWI) - kFLxJnt6KV >= W5bAOcX3NrTM; W5bAOcX3NrTM++) {
                if (!((540 - 540) != strcmp (chLd5c4[W5bAOcX3NrTM], chLd5c4[QT9MogfO]))) {
                    Q6Nudi[QT9MogfO] += (569 - 568);
                }
            }
        }
    }
    LBrvQ69 = 0;
    for (QT9MogfO = 0; QT9MogfO <= strlen (xxBcrqAWI) - kFLxJnt6KV; QT9MogfO++) {
        if (LBrvQ69 < Q6Nudi[QT9MogfO]) {
            LBrvQ69 = Q6Nudi[QT9MogfO];
        }
    }
    if (!(0 != LBrvQ69)) {
    }
    else {
        printf ("%d\n", LBrvQ69 +(944 - 943));
        for (QT9MogfO = 0; QT9MogfO <= strlen (xxBcrqAWI) - kFLxJnt6KV; QT9MogfO++) {
            if (LBrvQ69 == Q6Nudi[QT9MogfO]) {
                printf ("%s\n", chLd5c4[QT9MogfO]);
            }
        }
    }
    return 0;
}

