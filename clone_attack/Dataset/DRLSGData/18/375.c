int C5yoTSjf;
int array [101] [101];

int qaCU1gw2Jh (int TgbhA8) {
    int j;
    int wF5xc12Ita;
    int t;
    t = 1000;
    for (j = 0; j < C5yoTSjf; j++)
        if (t > *(*(array + 0) + j))
            t = *(*(array + 0) + j);
    for (j = 0; j < C5yoTSjf; j++)
        *(*(array + 0) + j) = *(*(array + 0) + j) - t;
    for (wF5xc12Ita = TgbhA8; wF5xc12Ita < C5yoTSjf; wF5xc12Ita++) {
        t = 1000;
        for (j = 0; j < C5yoTSjf; j++)
            if (t > *(*(array + wF5xc12Ita) + j))
                t = *(*(array + wF5xc12Ita) + j);
        for (j = 0; C5yoTSjf > j; j++)
            *(*(array + wF5xc12Ita) + j) = *(*(array + wF5xc12Ita) + j) - t;
    }
    return 0;
}

int KoDLMk (int TgbhA8) {
    int j;
    int t;
    int wF5xc12Ita;
    t = 1000;
    for (wF5xc12Ita = 0; C5yoTSjf > wF5xc12Ita; wF5xc12Ita++)
        if (*(*(array + wF5xc12Ita) + 0) < t)
            t = *(*(array + wF5xc12Ita) + 0);
    for (wF5xc12Ita = 0; C5yoTSjf > wF5xc12Ita; wF5xc12Ita++)
        *(*(array + wF5xc12Ita) + 0) = *(*(array + wF5xc12Ita) + 0) - t;
    for (j = TgbhA8; C5yoTSjf > j; j++) {
        t = 1000;
        for (wF5xc12Ita = 0; C5yoTSjf > wF5xc12Ita; wF5xc12Ita++)
            if (t > *(*(array + wF5xc12Ita) + j))
                t = *(*(array + wF5xc12Ita) + j);
        for (wF5xc12Ita = 0; C5yoTSjf > wF5xc12Ita; wF5xc12Ita++)
            *(*(array + wF5xc12Ita) + j) = *(*(array + wF5xc12Ita) + j) - t;
    }
    return 0;
}

int xVzKcZYs (int TgbhA8) {
    int wF5xc12Ita;
    int j;
    for (wF5xc12Ita = 0; wF5xc12Ita < C5yoTSjf; wF5xc12Ita++)
        *(*(array + wF5xc12Ita) + TgbhA8) = 1000;
    for (j = 0; j < C5yoTSjf; j++)
        *(*(array + TgbhA8) + j) = 1000;
    return 0;
}

int main () {
    int w;
    int TgbhA8;
    int wF5xc12Ita;
    int j;
    int q8Z31V;
    cin >> C5yoTSjf;
    for (w = 0; C5yoTSjf > w; w++) {
        q8Z31V = 0;
        for (wF5xc12Ita = 0; wF5xc12Ita < C5yoTSjf; wF5xc12Ita++)
            for (j = 0; j < C5yoTSjf; j++)
                cin >> *(*(array + wF5xc12Ita) + j);
        for (TgbhA8 = 0; TgbhA8 < C5yoTSjf; TgbhA8++) {
            KoDLMk (TgbhA8 +1);
            qaCU1gw2Jh (TgbhA8 +1);
            q8Z31V = q8Z31V + *(*(array + TgbhA8 +1) + TgbhA8 +1);
            xVzKcZYs (TgbhA8 +1);
        }
        cout << q8Z31V << endl;
    }
    return 0;
}

