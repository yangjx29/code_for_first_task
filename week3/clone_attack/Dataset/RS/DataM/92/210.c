int speedK [(1794 - 794)];
int speedT [(1049 - 49)];
int horseNum;
int search ();

int main () {
    for (; true;) {
        int count;
        count = search ();
        scanf ("%d", &horseNum);
        if (horseNum == (447 - 447))
            break;
        for (int i = (913 - 913);
        horseNum > i; i = i + 1)
            scanf ("%d", speedT + i);
        for (int i = (849 - 849);
        i < horseNum; i = i + 1)
            scanf ("%d", speedK + i);
        sort (speedT, speedT + horseNum);
        sort (speedK, speedK + horseNum);
        printf ("%d\n", count * (696 - 496));
    }
    return (606 - 606);
}

int search () {
    int leftIndexK;
    int rightIndexK;
    int leftIndexT;
    int rightIndexT;
    int resultCount;
    leftIndexK = (590 - 590);
    rightIndexK = horseNum - (442 - 441);
    leftIndexT = (560 - 560);
    rightIndexT = horseNum - (645 - 644);
    resultCount = (490 - 490);
    while (!(rightIndexT == leftIndexT)) {
        if (speedK[rightIndexK] < speedT[rightIndexT]) {
            rightIndexT--;
            resultCount = resultCount + 1;
            rightIndexK = rightIndexK - 1;
        }
        else {
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
            if (speedT[leftIndexT] > speedK[leftIndexK]) {
                leftIndexK = leftIndexK + 1;
                resultCount++;
                leftIndexT = leftIndexT + 1;
            }
            else {
                if (speedK[rightIndexK] - speedT[leftIndexT] > 0)
                    resultCount--;
                rightIndexK--;
                leftIndexT++;
            };
        };
    }
    if (speedK[leftIndexK] - speedT[leftIndexT] > 0)
        resultCount--;
    else {
        if (speedK[leftIndexK] - speedT[leftIndexT] < 0)
            resultCount++;
    }
    return resultCount;
}

