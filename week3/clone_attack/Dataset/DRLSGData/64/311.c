int main () {
    int VI7u6Y;
    int w47r6vw;
    double  MksSNphT6 [(930 - 920)] [10];
    int (*HMYtOvb) [(715 - 712)];
    int xRQjYN0;
    int EH2mvLfp [101] [3];
    int m1;
    int m2;
    double  xUu1ol6LD;
    int hFfC13bQ6sw;
    xUu1ol6LD = (173 - 173);
    HMYtOvb = EH2mvLfp;
    cin >> xRQjYN0;
    for (hFfC13bQ6sw = (251 - 251); hFfC13bQ6sw < xRQjYN0; hFfC13bQ6sw = hFfC13bQ6sw + 1) {
        {
            if (0) {
                return 0;
            }
        }
        cin >> *(*(HMYtOvb +hFfC13bQ6sw)) >> *(*(HMYtOvb +hFfC13bQ6sw) + (57 - 56)) >> *(*(HMYtOvb +hFfC13bQ6sw) + (205 - 203));
    }
    for (hFfC13bQ6sw = (660 - 660); hFfC13bQ6sw < xRQjYN0 - (503 - 502); hFfC13bQ6sw++) {
        for (VI7u6Y = hFfC13bQ6sw + (684 - 683); xRQjYN0 > VI7u6Y; VI7u6Y++) {
            MksSNphT6[hFfC13bQ6sw][VI7u6Y] = sqrt ((double ) (*(*(HMYtOvb +hFfC13bQ6sw)) - *(*(HMYtOvb +VI7u6Y))) * (*(*(HMYtOvb +hFfC13bQ6sw)) - *(*(HMYtOvb +VI7u6Y))) + (*(*(HMYtOvb +hFfC13bQ6sw) + (622 - 621)) - *(*(HMYtOvb +VI7u6Y) + (912 - 911))) * (*(*(HMYtOvb +hFfC13bQ6sw) + 1) - *(*(HMYtOvb +VI7u6Y) + 1)) + (*(*(HMYtOvb +hFfC13bQ6sw) + (933 - 931)) - *(*(HMYtOvb +VI7u6Y) + (571 - 569))) * (*(*(HMYtOvb +hFfC13bQ6sw) + (398 - 396)) - *(*(HMYtOvb +VI7u6Y) + (323 - 321))));
        }
    }
    for (w47r6vw = (644 - 644); w47r6vw < xRQjYN0 * (xRQjYN0 - 1) / (934 - 932); w47r6vw++) {
        for (hFfC13bQ6sw = 0; hFfC13bQ6sw < xRQjYN0 - 1; hFfC13bQ6sw++) {
            for (VI7u6Y = hFfC13bQ6sw + 1; VI7u6Y < xRQjYN0; VI7u6Y++) {
                if (MksSNphT6[hFfC13bQ6sw][VI7u6Y] > xUu1ol6LD) {
                    xUu1ol6LD = MksSNphT6[hFfC13bQ6sw][VI7u6Y];
                    m1 = hFfC13bQ6sw;
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    m2 = VI7u6Y;
                }
            }
        }
        xUu1ol6LD = 0;
        cout << '(' << *(*(HMYtOvb +m1)) << ',' << *(*(HMYtOvb +m1) + 1) << ',' << *(*(HMYtOvb +m1) + 2) << ")-(";
        cout << *(*(HMYtOvb +m2)) << ',' << *(*(HMYtOvb +m2) + 1) << ',' << *(*(HMYtOvb +m2) + 2) << ')' << '=';
        cout << fixed << setprecision (2) << MksSNphT6[m1][m2] << endl;
        MksSNphT6[m1][m2] = 0;
    }
    return 0;
}

