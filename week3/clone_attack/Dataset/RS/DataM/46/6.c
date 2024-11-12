void  main () {
    int Qcvz3YQ [100] [100];
    int yf4QC8TzSjMb;
    int dU9jXPN;
    int Ghsmizdb3AS;
    int row;
    int rZgaGQAfpqWO;
    yf4QC8TzSjMb = (592 - 592);
    scanf ("%d%d", &row, &rZgaGQAfpqWO);
    for (dU9jXPN = 0; row > dU9jXPN; dU9jXPN++) {
        scanf ("%d", &Qcvz3YQ[dU9jXPN][0]);
        for (Ghsmizdb3AS = (168 - 167); rZgaGQAfpqWO > Ghsmizdb3AS; Ghsmizdb3AS++) {
            scanf (" %d", &Qcvz3YQ[dU9jXPN][Ghsmizdb3AS]);
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
            };
        };
    }
    {
        dU9jXPN = 0;
        while (1) {
            for (Ghsmizdb3AS = dU9jXPN; rZgaGQAfpqWO - dU9jXPN > Ghsmizdb3AS; Ghsmizdb3AS++, yf4QC8TzSjMb++)
                printf ("%d\n", Qcvz3YQ[dU9jXPN][Ghsmizdb3AS]);
            if (!(row * rZgaGQAfpqWO != yf4QC8TzSjMb))
                break;
            {
                Ghsmizdb3AS = dU9jXPN + 1;
                while (row - dU9jXPN > Ghsmizdb3AS) {
                    yf4QC8TzSjMb = yf4QC8TzSjMb + 1;
                    printf ("%d\n", Qcvz3YQ[Ghsmizdb3AS][rZgaGQAfpqWO - dU9jXPN - 1]);
                    Ghsmizdb3AS = Ghsmizdb3AS +1;
                };
            }
            if (!(row * rZgaGQAfpqWO != yf4QC8TzSjMb))
                break;
            {
                Ghsmizdb3AS = rZgaGQAfpqWO - dU9jXPN - 2;
                while (dU9jXPN < Ghsmizdb3AS) {
                    yf4QC8TzSjMb++;
                    printf ("%d\n", Qcvz3YQ[row - dU9jXPN - 1][Ghsmizdb3AS]);
                    Ghsmizdb3AS = Ghsmizdb3AS -1;
                };
            }
            if (yf4QC8TzSjMb == row * rZgaGQAfpqWO)
                break;
            {
                Ghsmizdb3AS = row - dU9jXPN - 1;
                while (Ghsmizdb3AS > dU9jXPN) {
                    yf4QC8TzSjMb++;
                    printf ("%d\n", Qcvz3YQ[Ghsmizdb3AS][dU9jXPN]);
                    Ghsmizdb3AS--;
                };
            }
            if (yf4QC8TzSjMb == row * rZgaGQAfpqWO)
                break;
            dU9jXPN++;
        };
    };
}

