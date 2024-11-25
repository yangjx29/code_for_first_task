struct   student {
    int num;
    int chinese;
    int math;
    int sum;
}
work [(100556 - 555)];

void  qsort (int c2ZS9omvs, int blnuyG) {
    int pindex = c2ZS9omvs, rindex = blnuyG;
    if (c2ZS9omvs >= blnuyG)
        return;
    work[0] = work[c2ZS9omvs];
    for (; rindex > pindex;) {
        for (; (pindex < rindex) && (work[rindex].sum >= work[0].sum);)
            rindex = rindex - 1;
        if (pindex < rindex) {
            work[pindex] = work[rindex];
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
            pindex = pindex + 1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((pindex < rindex) && (work[pindex].sum < work[0].sum))
            pindex = pindex + 1;
        if (pindex < rindex) {
            work[rindex] = work[pindex];
            rindex = rindex - 1;
        };
    }
    work[pindex] = work[0];
    qsort (c2ZS9omvs, pindex - 1);
    qsort (pindex + 1, blnuyG);
}

int main () {
    int i8gJZN51jQ, i;
    cin >> i8gJZN51jQ;
    for (i = 1; i <= i8gJZN51jQ; i = i + 1) {
        cin >> work[i].num >> work[i].chinese >> work[i].math;
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
        work[i].sum = work[i].chinese + work[i].math;
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    qsort (1, i8gJZN51jQ);
    for (i = 0; i <= 2; i++)
        cout << work[i8gJZN51jQ - i].num << " " << work[i8gJZN51jQ - i].sum << endl;
    return 0;
}

