struct   student {
    int wonLqYzaW9QS;
    int yw;
    int sx;
}
stu [100000];

void  main () {
    int n;
    int Fq4yxT;
    int gh4oQiNxl [100000];
    int temp [3];
    int mWiJ2D;
    scanf ("%d", &n);
    for (Fq4yxT = (415 - 415); n > Fq4yxT; Fq4yxT = Fq4yxT +1) {
        scanf ("%d %d %d", &stu[Fq4yxT].wonLqYzaW9QS, &stu[Fq4yxT].yw, &stu[Fq4yxT].sx);
        gh4oQiNxl[Fq4yxT] = stu[Fq4yxT].yw + stu[Fq4yxT].sx;
    }
    for (Fq4yxT = 0, mWiJ2D = -1, temp[0] = 0; n > Fq4yxT; Fq4yxT = Fq4yxT +1) {
        if (gh4oQiNxl[Fq4yxT] > mWiJ2D) {
            mWiJ2D = gh4oQiNxl[Fq4yxT];
            temp[0] = Fq4yxT;
        };
    }
    for (Fq4yxT = 0, mWiJ2D = -1, temp[1] = 0; Fq4yxT < n; Fq4yxT = Fq4yxT +1) {
        if (Fq4yxT == temp[0])
            continue;
        else if (gh4oQiNxl[Fq4yxT] > mWiJ2D) {
            mWiJ2D = gh4oQiNxl[Fq4yxT];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            temp[1] = Fq4yxT;
        }
        else
            ;
    }
    for (Fq4yxT = 0, mWiJ2D = -1, temp[2] = 0; Fq4yxT < n; Fq4yxT = Fq4yxT +1) {
        if (Fq4yxT == temp[0] || Fq4yxT == temp[1])
            continue;
        else {
            if (gh4oQiNxl[Fq4yxT] > mWiJ2D) {
                mWiJ2D = gh4oQiNxl[Fq4yxT];
                temp[2] = Fq4yxT;
            };
        };
    }
    printf ("%d %d\n", stu[temp[0]].wonLqYzaW9QS, gh4oQiNxl[temp[0]]);
    printf ("%d %d\n", stu[temp[1]].wonLqYzaW9QS, gh4oQiNxl[temp[1]]);
    printf ("%d %d", stu[temp[2]].wonLqYzaW9QS, gh4oQiNxl[temp[2]]);
}

