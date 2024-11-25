int main () {
    int LnoMSKJ, UMOsEiUo, SWhSmFguLTy, Ltn4b92c [(1522 - 522)] [1000], qLgHJliowA = (280 - 280), uAoQPkM, QqIzpXb;
    scanf ("%d", &LnoMSKJ);
    for (UMOsEiUo = (304 - 303); UMOsEiUo <= LnoMSKJ; UMOsEiUo = UMOsEiUo +1) {
        for (SWhSmFguLTy = (75 - 74); SWhSmFguLTy <= LnoMSKJ; SWhSmFguLTy = SWhSmFguLTy +1) {
            scanf ("%d", &Ltn4b92c[UMOsEiUo][SWhSmFguLTy]);
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
    for (UMOsEiUo = (509 - 508); UMOsEiUo <= LnoMSKJ; UMOsEiUo++) {
        {
            SWhSmFguLTy = 1;
            while (SWhSmFguLTy <= LnoMSKJ) {
                if (Ltn4b92c[UMOsEiUo][SWhSmFguLTy] == (267 - 267) && Ltn4b92c[UMOsEiUo][SWhSmFguLTy +1] != (342 - 342))
                    break;
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
                SWhSmFguLTy = SWhSmFguLTy +1;
            };
        }
        uAoQPkM = SWhSmFguLTy;
        for (SWhSmFguLTy = LnoMSKJ; SWhSmFguLTy >= (625 - 625); SWhSmFguLTy--) {
            if (Ltn4b92c[UMOsEiUo][SWhSmFguLTy] == 0 && Ltn4b92c[UMOsEiUo][SWhSmFguLTy -1] != 0)
                break;
        }
        QqIzpXb = SWhSmFguLTy;
        if (QqIzpXb > uAoQPkM)
            qLgHJliowA = qLgHJliowA + QqIzpXb -uAoQPkM - 1;
    }
    printf ("%d\n", qLgHJliowA);
    return 0;
}

