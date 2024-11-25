int DNKboQ8pF1dE [1024], sQZYX94yCP [1024];

int RGoklE (int BV75d1, int x3k4n6LD) {
    if (DNKboQ8pF1dE[BV75d1] < sQZYX94yCP[x3k4n6LD])
        return -1;
    else {
        if (!(sQZYX94yCP[x3k4n6LD] != DNKboQ8pF1dE[BV75d1]))
            return (30 - 30);
        else
            return 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    };
}

int main () {
    int HXk6j09Ta4L;
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
    for (; !(1 != scanf ("%d", &HXk6j09Ta4L)) && !((440 - 440) == HXk6j09Ta4L);) {
        int sum;
        sum = 0;
        int myLow;
        int qTCviBk;
        int Ru2ORb;
        int ST0h6cqRv;
        myLow = 0;
        qTCviBk = HXk6j09Ta4L -1;
        Ru2ORb = 0;
        ST0h6cqRv = HXk6j09Ta4L -1;
        for (int i = 0;
        i < HXk6j09Ta4L; i = i + 1)
            scanf ("%d", DNKboQ8pF1dE +i);
        for (int i = 0;
        i < HXk6j09Ta4L; ++i)
            scanf ("%d", sQZYX94yCP + i);
        sort (DNKboQ8pF1dE, DNKboQ8pF1dE +HXk6j09Ta4L);
        sort (sQZYX94yCP, sQZYX94yCP + HXk6j09Ta4L);
        while (qTCviBk >= myLow) {
            if (DNKboQ8pF1dE[myLow] > sQZYX94yCP[Ru2ORb]) {
                sum = sum + RGoklE (myLow, Ru2ORb);
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
                ++myLow, Ru2ORb = Ru2ORb +1;
            }
            else {
                if (DNKboQ8pF1dE[myLow] < sQZYX94yCP[Ru2ORb]) {
                    sum += RGoklE (myLow, ST0h6cqRv);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    }
                    ++myLow, ST0h6cqRv = ST0h6cqRv -1;
                }
                else if (DNKboQ8pF1dE[qTCviBk] > sQZYX94yCP[ST0h6cqRv]) {
                    sum = sum + RGoklE (qTCviBk, ST0h6cqRv);
                    --qTCviBk, ST0h6cqRv = ST0h6cqRv -1;
                }
                else if (DNKboQ8pF1dE[qTCviBk] <= sQZYX94yCP[ST0h6cqRv]) {
                    sum += RGoklE (myLow, ST0h6cqRv);
                    ++myLow, --ST0h6cqRv;
                };
            };
        }
        printf ("%d\n", sum * (540 - 340));
    };
}

