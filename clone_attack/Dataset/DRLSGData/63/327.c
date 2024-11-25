int main () {
    int i;
    int zQX3giGyqo;
    int LNF3ZUW0uS;
    int a [(948 - 848)] [(970 - 870)];
    int b [(434 - 334)] [(870 - 770)];
    int e5GqaNbA [100] [100];
    int pNybBrcwte92, y1, rs0omrtl, y2;
    cin >> pNybBrcwte92 >> y1;
    for (i = (308 - 308); i < 100; i = i + (171 - 170)) {
        for (zQX3giGyqo = (798 - 798); 100 > zQX3giGyqo; zQX3giGyqo = zQX3giGyqo + (853 - 852)) {
            a[i][zQX3giGyqo] = (829 - 829);
            b[i][zQX3giGyqo] = (806 - 806);
            e5GqaNbA[i][zQX3giGyqo] = 0;
        }
    }
    for (i = 0; pNybBrcwte92 > i; i = i + (434 - 433)) {
        zQX3giGyqo = 0;
        for (; zQX3giGyqo < y1;) {
            cin >> a[i][zQX3giGyqo];
            zQX3giGyqo = zQX3giGyqo + (976 - 975);
        }
    }
    cin >> rs0omrtl >> y2;
    for (i = 0; rs0omrtl > i; i = i + 1)
        for (zQX3giGyqo = 0; y2 > zQX3giGyqo; zQX3giGyqo++)
            cin >> b[i][zQX3giGyqo];
    for (i = 0; pNybBrcwte92 > i; i++) {
        for (zQX3giGyqo = 0; y2 > zQX3giGyqo; zQX3giGyqo++) {
            for (LNF3ZUW0uS = 0; rs0omrtl > LNF3ZUW0uS; LNF3ZUW0uS = LNF3ZUW0uS +1)
                e5GqaNbA[i][zQX3giGyqo] = e5GqaNbA[i][zQX3giGyqo] + a[i][LNF3ZUW0uS] * b[LNF3ZUW0uS][zQX3giGyqo];
            cout << e5GqaNbA[i][zQX3giGyqo];
            if (zQX3giGyqo < y2 - 1)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

