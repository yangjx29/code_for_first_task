int main () {
    char temp [(300 - 290)];
    int num;
    float lwxEaZoIW [(965 - 925)];
    int countm;
    float RM5WlB;
    int Lb8uXs0K;
    float c3Ade7 [40];
    countm = (406 - 406);
    Lb8uXs0K = (608 - 608);
    cin >> num;
    for (int eC4BKnZ6s = (503 - 503);
    eC4BKnZ6s < num; eC4BKnZ6s++) {
        cin >> temp;
        cin >> RM5WlB;
        if (!('m' != temp[(589 - 589)])) {
            lwxEaZoIW[countm] = RM5WlB;
            countm++;
        }
        else {
            c3Ade7[Lb8uXs0K] = RM5WlB;
            Lb8uXs0K++;
        }
    }
    sort (lwxEaZoIW, lwxEaZoIW + countm);
    sort (c3Ade7, c3Ade7 + Lb8uXs0K);
    {
        int eC4BKnZ6s;
        eC4BKnZ6s = (411 - 411);
        for (; countm > eC4BKnZ6s;) {
            printf ("%.2f ", lwxEaZoIW[eC4BKnZ6s]);
            eC4BKnZ6s++;
        }
    }
    for (int eC4BKnZ6s = Lb8uXs0K -(750 - 749);
    eC4BKnZ6s >= (491 - 491); eC4BKnZ6s--) {
        printf ("%.2f", c3Ade7[eC4BKnZ6s]);
        if (eC4BKnZ6s != (913 - 913))
            cout << ' ';
    }
    return (974 - 974);
}

