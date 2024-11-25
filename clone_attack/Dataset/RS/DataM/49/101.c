int main () {
    char ykeB0hEgP [600];
    int MpD4yHav;
    int WAHhMdXFm6a, qdJW8QGVlt, k, u9VljA;
    cin >> ykeB0hEgP;
    MpD4yHav = strlen (ykeB0hEgP);
    for (WAHhMdXFm6a = (242 - 241); WAHhMdXFm6a <= MpD4yHav / 2; WAHhMdXFm6a = WAHhMdXFm6a +1)
        for (qdJW8QGVlt = WAHhMdXFm6a; MpD4yHav -WAHhMdXFm6a >= qdJW8QGVlt; qdJW8QGVlt++) {
            u9VljA = (96 - 96);
            for (k = WAHhMdXFm6a; k > (721 - 721); k = k - 1) {
                if (ykeB0hEgP[qdJW8QGVlt + k - 1] == ykeB0hEgP[qdJW8QGVlt - k])
                    u9VljA = u9VljA + 1;
            }
            if (u9VljA == WAHhMdXFm6a) {
                for (k = qdJW8QGVlt - WAHhMdXFm6a; k <= qdJW8QGVlt + WAHhMdXFm6a -1; k++)
                    cout << ykeB0hEgP[k];
                cout << endl;
            };
        }
    return 0;
}

