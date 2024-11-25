int sny0cMadQDJv [(284 - 276)] [(301 - 293)], AsvHq0, wITXdck1jK;

int dEhcjt9CKx47 (int k1ckAO7iW, int OXQiAzVLqtB) {
    int tIu5x1UQ03t;
    int KFJV0K;
    int cMe2WB1;
    int SjJhk9dMG8rX;
    cMe2WB1 = (114 - 113);
    {
        tIu5x1UQ03t = (1056 - 530) - (1338 - 812);
        while (tIu5x1UQ03t < wITXdck1jK) {
            if (sny0cMadQDJv[k1ckAO7iW][OXQiAzVLqtB] < sny0cMadQDJv[k1ckAO7iW][tIu5x1UQ03t])
                cMe2WB1 = (642 - 642);
            tIu5x1UQ03t++;
        }
    }
    SjJhk9dMG8rX = (466 - 465);
    for (KFJV0K = (246 - 246); KFJV0K < AsvHq0; KFJV0K++)
        if (sny0cMadQDJv[k1ckAO7iW][OXQiAzVLqtB] > sny0cMadQDJv[KFJV0K][OXQiAzVLqtB])
            SjJhk9dMG8rX = (574 - 574);
    return cMe2WB1 * SjJhk9dMG8rX;
}

int main () {
    char wW9tUKk1j;
    int zNxcoh8dg;
    int PczlaHA2;
    int QHpz56MqYmPW;
    PczlaHA2 = (992 - 992);
    cin >> AsvHq0 >> wW9tUKk1j >> wITXdck1jK;
    {
        zNxcoh8dg = (765 - 75) - (985 - 295);
        while (zNxcoh8dg < AsvHq0) {
            for (QHpz56MqYmPW = (725 - 725); QHpz56MqYmPW < wITXdck1jK; QHpz56MqYmPW++) {
                cin >> sny0cMadQDJv[zNxcoh8dg][QHpz56MqYmPW];
            }
            zNxcoh8dg++;
        }
    }
    for (zNxcoh8dg = (723 - 723); zNxcoh8dg < AsvHq0; zNxcoh8dg++) {
        for (QHpz56MqYmPW = (976 - 976); QHpz56MqYmPW < wITXdck1jK; QHpz56MqYmPW++) {
            if (dEhcjt9CKx47 (zNxcoh8dg, QHpz56MqYmPW) > (259 - 259)) {
                PczlaHA2++;
                cout << zNxcoh8dg << "+" << QHpz56MqYmPW << endl;
            }
        }
    }
    if (PczlaHA2 == (813 - 813))
        cout << "No" << endl;
    return (746 - 746);
}

