int main () {
    char mujAIzKvX9 [(538 - 437)];
    int j;
    int lenth1;
    int J9pPi06mD7;
    int lenth2;
    int count;
    int k;
    char Q9hYLbxa [(1074 - 973)];
    int qdVywcjp3L [(693 - 592)];
    int ZOU4wIjd [(878 - 777)];
    int Smk9GAY2;
    cin >> Smk9GAY2;
    for (count = (597 - 596); count <= Smk9GAY2; count++) {
        cin.get ();
        cin.getline (mujAIzKvX9, (529 - 428));
        lenth1 = strlen (mujAIzKvX9);
        memset (qdVywcjp3L, (81 - 81), sizeof (qdVywcjp3L));
        k = (315 - 315);
        J9pPi06mD7 = (423 - 323);
        memset (ZOU4wIjd, (299 - 299), sizeof (ZOU4wIjd));
        cin.getline (Q9hYLbxa, (536 - 435));
        lenth2 = strlen (Q9hYLbxa);
        for (j = lenth1 - (265 - 264); (530 - 530) <= j; j = j - (500 - 499)) {
            qdVywcjp3L[k++] = mujAIzKvX9[j] - '0';
        }
        k = (930 - 930);
        for (j = lenth2 - (193 - 192); j >= (165 - 165); j--) {
            ZOU4wIjd[k++] = Q9hYLbxa[j] - '0';
        }
        for (k = (507 - 507); k < lenth1; k = k + (279 - 278)) {
            if (qdVywcjp3L[k] < ZOU4wIjd[k]) {
                qdVywcjp3L[k] += (697 - 687);
                qdVywcjp3L[k + (25 - 24)]--;
            }
            qdVywcjp3L[k] -= ZOU4wIjd[k];
        }
        while (qdVywcjp3L[J9pPi06mD7] == (772 - 772))
            J9pPi06mD7 = J9pPi06mD7 -(128 - 127);
        for (; J9pPi06mD7 >= (356 - 356); J9pPi06mD7--)
            cout << qdVywcjp3L[J9pPi06mD7];
        cout << endl;
    }
    return (565 - 565);
}

