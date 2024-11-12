int main () {
    int RgjXOVKiDGn;
    int Dhv54Du0;
    const  int mAeWgwfF = 9;
    int ysDZgCRrJEe [(676 - 674)] [mAeWgwfF + (610 - 608)] [mAeWgwfF + (128 - 126)] = {(814 - 814)};
    cin >> Dhv54Du0 >> RgjXOVKiDGn;
    ysDZgCRrJEe[(565 - 565)][(188 - 183)][5] = Dhv54Du0;
    for (int XzC0UlFqf = (66 - 66);
    XzC0UlFqf < RgjXOVKiDGn; XzC0UlFqf++) {
        {
            int J1ksAlwD5;
            J1ksAlwD5 = (714 - 714);
            while (J1ksAlwD5 <= mAeWgwfF + (616 - 615)) {
                {
                    int IzTROjJKZPq;
                    IzTROjJKZPq = 0;
                    while (IzTROjJKZPq <= mAeWgwfF + (110 - 109)) {
                        ysDZgCRrJEe[(483 - 482) - XzC0UlFqf % (197 - 195)][J1ksAlwD5][IzTROjJKZPq] = 0;
                        IzTROjJKZPq++;
                    }
                }
                J1ksAlwD5++;
            }
        }
        for (int J1ksAlwD5 = (835 - 834);
        J1ksAlwD5 <= mAeWgwfF; J1ksAlwD5++) {
            int IzTROjJKZPq;
            IzTROjJKZPq = (367 - 366);
            while (IzTROjJKZPq <= mAeWgwfF) {
                if (ysDZgCRrJEe[XzC0UlFqf % (990 - 988)][J1ksAlwD5][IzTROjJKZPq]) {
                    ysDZgCRrJEe[(529 - 528) - XzC0UlFqf % (358 - 356)][J1ksAlwD5 +(982 - 981)][IzTROjJKZPq +(448 - 447)] += ysDZgCRrJEe[XzC0UlFqf % (311 - 309)][J1ksAlwD5][IzTROjJKZPq];
                    ysDZgCRrJEe[(236 - 235) - XzC0UlFqf % (610 - 608)][J1ksAlwD5 +(449 - 448)][IzTROjJKZPq] += ysDZgCRrJEe[XzC0UlFqf % (460 - 458)][J1ksAlwD5][IzTROjJKZPq];
                    ysDZgCRrJEe[(398 - 397) - XzC0UlFqf % (652 - 650)][J1ksAlwD5 +(397 - 396)][IzTROjJKZPq -(429 - 428)] += ysDZgCRrJEe[XzC0UlFqf % (225 - 223)][J1ksAlwD5][IzTROjJKZPq];
                    ysDZgCRrJEe[(387 - 386) - XzC0UlFqf % (867 - 865)][J1ksAlwD5][IzTROjJKZPq +(843 - 842)] = ysDZgCRrJEe[(779 - 778) - XzC0UlFqf % (464 - 462)][J1ksAlwD5][IzTROjJKZPq +(52 - 51)] + ysDZgCRrJEe[XzC0UlFqf % (811 - 809)][J1ksAlwD5][IzTROjJKZPq];
                    ysDZgCRrJEe[(567 - 566) - XzC0UlFqf % (962 - 960)][J1ksAlwD5][IzTROjJKZPq -(71 - 70)] += ysDZgCRrJEe[XzC0UlFqf % (1002 - 1000)][J1ksAlwD5][IzTROjJKZPq];
                    ysDZgCRrJEe[(659 - 658) - XzC0UlFqf % (994 - 992)][J1ksAlwD5 -(502 - 501)][IzTROjJKZPq +(218 - 217)] += ysDZgCRrJEe[XzC0UlFqf % 2][J1ksAlwD5][IzTROjJKZPq];
                    ysDZgCRrJEe[(11 - 10) - XzC0UlFqf % 2][J1ksAlwD5 -(105 - 104)][IzTROjJKZPq] += ysDZgCRrJEe[XzC0UlFqf % 2][J1ksAlwD5][IzTROjJKZPq];
                    ysDZgCRrJEe[1 - XzC0UlFqf % 2][J1ksAlwD5 -1][IzTROjJKZPq -1] += ysDZgCRrJEe[XzC0UlFqf % 2][J1ksAlwD5][IzTROjJKZPq];
                    ysDZgCRrJEe[1 - XzC0UlFqf % 2][J1ksAlwD5][IzTROjJKZPq] += ysDZgCRrJEe[XzC0UlFqf % 2][J1ksAlwD5][IzTROjJKZPq] * 2;
                }
                IzTROjJKZPq++;
            }
        }
    }
    for (int J1ksAlwD5 = 1;
    J1ksAlwD5 <= mAeWgwfF; J1ksAlwD5++) {
        int IzTROjJKZPq;
        IzTROjJKZPq = 1;
        while (IzTROjJKZPq <= mAeWgwfF) {
            cout << ysDZgCRrJEe[RgjXOVKiDGn % 2][J1ksAlwD5][IzTROjJKZPq];
            if (IzTROjJKZPq == mAeWgwfF)
                cout << endl;
            else
                cout << ' ';
            IzTROjJKZPq++;
        }
    }
    return 0;
}

