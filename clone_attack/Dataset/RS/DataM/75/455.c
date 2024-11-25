int main () {
    int L8IukTqcymnf;
    L8IukTqcymnf = 0;
    char space;
    int wsU3kXSdtcjL, i, mVZbi0orheSf, QLRUhC, num;
    int in [(1150 - 148)], out [(1595 - 593)], time [(1772 - 770)] = {(839 - 839)};
    for (i = (908 - 908);; i = i + 1) {
        scanf ("%d%c", &wsU3kXSdtcjL, &space);
        in[i] = wsU3kXSdtcjL;
        if (!(',' == space))
            break;
    }
    num = i + (959 - 958);
    {
        i = 185 - 185;
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
        while (1) {
            scanf ("%d%c", &wsU3kXSdtcjL, &space);
            out[i] = wsU3kXSdtcjL;
            if (space != ',')
                break;
            i++;
        };
    }
    for (i = (259 - 259); num > i; i++) {
        mVZbi0orheSf = i;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (mVZbi0orheSf < out[i]) {
            time[mVZbi0orheSf]++;
            mVZbi0orheSf = mVZbi0orheSf + 1;
        };
    }
    for (i = 0; i <= (1190 - 189); i++) {
        if (time[i] > L8IukTqcymnf)
            L8IukTqcymnf = time[i];
    }
    printf ("%d %d", num, L8IukTqcymnf);
}

