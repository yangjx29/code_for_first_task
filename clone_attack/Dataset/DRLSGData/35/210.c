int main () {
    int V2qo8c, m7nuGmsZEOa;
    int maxLine [(232 - 224)] = {(186 - 186)}, yoAdfWx [(1005 - 997)] = {(117 - 117)};
    int zFSDv0s [(753 - 745)] [(195 - 187)];
    char AHZ82G0wk;
    cin >> V2qo8c >> AHZ82G0wk >> m7nuGmsZEOa;
    int i, DpZ7YiX9Jst;
    {
        i = (839 - 575) - (910 - 646);
        for (; i != V2qo8c;) {
            {
                DpZ7YiX9Jst = (522 - 100) - (865 - 443);
                for (; DpZ7YiX9Jst != m7nuGmsZEOa;) {
                    cin >> zFSDv0s[i][DpZ7YiX9Jst];
                    DpZ7YiX9Jst++;
                }
            }
            i++;
        }
    }
    {
        i = (1475 - 904) - (1026 - 455);
        for (; i != V2qo8c;) {
            int FZTwG0D = -(32943 - 176);
            {
                DpZ7YiX9Jst = (821 - 504) - (622 - 305);
                while (DpZ7YiX9Jst != m7nuGmsZEOa) {
                    if (FZTwG0D < zFSDv0s[i][DpZ7YiX9Jst]) {
                        FZTwG0D = zFSDv0s[i][DpZ7YiX9Jst];
                        maxLine[i] = DpZ7YiX9Jst;
                    }
                    DpZ7YiX9Jst++;
                }
            }
            i++;
        }
    }
    {
        DpZ7YiX9Jst = (963 - 152) - (1747 - 936);
        while (DpZ7YiX9Jst != m7nuGmsZEOa) {
            int UIA4rM0oS;
            UIA4rM0oS = (33750 - 983);
            {
                i = (266 - 266);
                for (; i != V2qo8c;) {
                    if (UIA4rM0oS > zFSDv0s[i][DpZ7YiX9Jst]) {
                        UIA4rM0oS = zFSDv0s[i][DpZ7YiX9Jst];
                        yoAdfWx[DpZ7YiX9Jst] = i;
                    }
                    i++;
                }
            }
            DpZ7YiX9Jst++;
        }
    }
    int pY0aJQydvCi3 = -(252 - 251), ansrow = -(936 - 935);
    {
        i = (346 - 346);
        for (; i != V2qo8c;) {
            if (yoAdfWx[maxLine[i]] == i) {
                pY0aJQydvCi3 = i;
                ansrow = maxLine[i];
            }
            i++;
        }
    }
    if (pY0aJQydvCi3 != -(358 - 357))
        cout << pY0aJQydvCi3 << "+" << ansrow;
    else
        cout << "No";
    return (334 - 334);
}

