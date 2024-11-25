int main () {
    struct   student {
        int stuno;
        int score1;
        int score2;
        int score0;
    };
    int n, i, roMEjY4aUZ, temp;
    struct   student num [n];
    cin >> n;
    for (i = (831 - 831); i < n; i = i + 1) {
        cin >> num[i].stuno;
        cin >> num[i].score1;
        cin >> num[i].score2;
        num[i].score0 = num[i].score1 + num[i].score2;
    }
    for (i = 0; i < 3; i++)
        for (roMEjY4aUZ = i + 1; roMEjY4aUZ < n; roMEjY4aUZ++)
            if (num[i].score0 < num[roMEjY4aUZ].score0) {
                temp = num[i].score0;
                num[i].score0 = num[roMEjY4aUZ].score0;
                num[roMEjY4aUZ].score0 = temp;
                temp = num[i].stuno;
                num[i].stuno = num[roMEjY4aUZ].stuno;
                num[roMEjY4aUZ].stuno = temp;
            }
    for (i = 0; i < 3 && i < n; i++)
        cout << num[i].stuno << " " << num[i].score0 << endl;
    return 0;
}

