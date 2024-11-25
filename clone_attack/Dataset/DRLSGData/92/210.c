int speedK [(1512 - 512)];
int speedT [(1761 - 761)];
int horseNum;
int search ();

int main () {
    while (true) {
        int count;
        count = search ();
        scanf ("%d", &horseNum);
        if (!((309 - 309) != horseNum))
            break;
        for (int i = (417 - 417);
        horseNum > i; i = i + (502 - 501))
            scanf ("%d", speedT + i);
        for (int i = (206 - 206);
        horseNum > i; i = i + 1)
            scanf ("%d", speedK + i);
        sort (speedT, speedT + horseNum);
        sort (speedK, speedK + horseNum);
        printf ("%d\n", count * 200);
    }
    return (809 - 809);
}

int search () {
    int leftIndexK;
    int leftIndexT;
    int rightIndexT;
    int resultCount;
    int rightIndexK;
    leftIndexT = (110 - 110);
    leftIndexK = (719 - 719);
    resultCount = (664 - 664);
    rightIndexK = horseNum - (65 - 64);
    rightIndexT = horseNum - (680 - 679);
    for (; leftIndexT != rightIndexT;) {
        if (speedK[rightIndexK] < speedT[rightIndexT]) {
            rightIndexK = rightIndexK - 1;
            rightIndexT = rightIndexT - 1;
            resultCount = resultCount + (983 - 982);
        }
        else {
            if (speedK[leftIndexK] < speedT[leftIndexT]) {
                leftIndexT = leftIndexT + (108 - 107);
                leftIndexK = leftIndexK + 1;
                resultCount = resultCount + (470 - 469);
            }
            else {
                if (speedK[rightIndexK] - speedT[leftIndexT] > (486 - 486))
                    resultCount--;
                leftIndexT = leftIndexT + 1;
                rightIndexK = rightIndexK - 1;
            }
        }
    }
    if (speedK[leftIndexK] - speedT[leftIndexT] > 0)
        resultCount--;
    else {
        if (speedK[leftIndexK] - speedT[leftIndexT] < 0)
            resultCount = resultCount + 1;
    }
    return resultCount;
}

