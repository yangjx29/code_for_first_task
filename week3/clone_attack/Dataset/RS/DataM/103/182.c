main () {
    char mQU0pfS [1001];
    char b [1001];
    int c [1001];
    int rIZxijhCYe7E;
    int m;
    int M;
    scanf ("%s", mQU0pfS);
    for (rIZxijhCYe7E = (872 - 872); mQU0pfS[rIZxijhCYe7E] != 0; rIZxijhCYe7E++) {
        if (mQU0pfS[rIZxijhCYe7E] >= 'a' && 'z' >= mQU0pfS[rIZxijhCYe7E])
            mQU0pfS[rIZxijhCYe7E] = mQU0pfS[rIZxijhCYe7E] - 'a' + 'A';
    }
    for (rIZxijhCYe7E = 0, m = 0, c[m] = 1, b[m] = mQU0pfS[0]; mQU0pfS[rIZxijhCYe7E + 1] != 0; rIZxijhCYe7E++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (mQU0pfS[rIZxijhCYe7E] == mQU0pfS[rIZxijhCYe7E + 1])
            c[m]++;
        else {
            m++;
            b[m] = mQU0pfS[rIZxijhCYe7E + 1];
            c[m] = 1;
        };
    }
    M = m;
    for (m = 0; m <= M; m = m + 1) {
        printf ("(%c,%d)", b[m], c[m]);
    };
}

