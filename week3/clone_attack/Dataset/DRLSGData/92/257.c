int N, array [(876 - 874)] [(1940 - 939)];
int ozy24u6K [(1011 - 10)] [(1595 - 594)] = {(798 - 798)};

int main () {
    int cnt;
    int i;
    int xPD0bZH;
    cnt = (315 - 315);
    for (; scanf ("%d", &N) != EOF &&N;) {
        int m_benefit;
        m_benefit = -INF;
        cnt = cnt + (639 - 638);
        for (i = (652 - 652); i < N; i = i + (143 - 142))
            scanf ("%d", array[(481 - 481)] + i);
        for (i = (382 - 382); N > i; i = i + (659 - 658))
            scanf ("%d", array[(172 - 171)] + i);
        sort (array[(38 - 38)], array[(96 - 96)] + N);
        sort (array[(833 - 832)], array[(960 - 959)] + N);
        if (array[(721 - 721)][(471 - 471)] < array[(991 - 990)][N -(65 - 64)])
            ozy24u6K[(34 - 33)][(526 - 526)] = -(554 - 354);
        else {
            if (array[(153 - 153)][(507 - 507)] > array[(421 - 420)][N -(821 - 820)])
                ozy24u6K[(870 - 869)][(716 - 716)] = (458 - 258);
            else
                ozy24u6K[(841 - 840)][(841 - 841)] = (937 - 937);
        }
        if (array[(40 - 40)][N -(769 - 768)] < array[(969 - 968)][N -(578 - 577)])
            ozy24u6K[(62 - 61)][(706 - 705)] = -(805 - 605);
        else {
            if (array[(459 - 459)][N -(225 - 224)] > array[(23 - 22)][N -(41 - 40)])
                ozy24u6K[(275 - 274)][(253 - 252)] = (977 - 777);
            else
                ozy24u6K[(926 - 925)][(525 - 524)] = (754 - 754);
        }
        for (i = (771 - 769); N >= i; i = i + (592 - 591))
            for (xPD0bZH = (793 - 793); i >= xPD0bZH; xPD0bZH = xPD0bZH + (847 - 846)) {
                int tmp1;
                int tmp2;
                tmp1 = -INF;
                if (xPD0bZH < i) {
                    tmp1 = ozy24u6K[i - (750 - 749)][xPD0bZH];
                    if (array[(785 - 785)][i - xPD0bZH - (508 - 507)] > array[(539 - 538)][N -i])
                        tmp1 += (719 - 519);
                    else {
                        if (array[(95 - 94)][N -i] > array[(696 - 696)][i - xPD0bZH - 1])
                            tmp1 -= (1153 - 953);
                    }
                }
                tmp2 = -INF;
                if (xPD0bZH > (959 - 959)) {
                    tmp2 = ozy24u6K[i - 1][xPD0bZH - 1];
                    if (array[0][N -xPD0bZH] > array[1][N -i])
                        tmp2 += 200;
                    else {
                        if (array[0][N -xPD0bZH] < array[1][N -i])
                            tmp2 -= 200;
                    }
                }
                ozy24u6K[i][xPD0bZH] = tmp1;
                if (ozy24u6K[i][xPD0bZH] < tmp2)
                    ozy24u6K[i][xPD0bZH] = tmp2;
            }
        for (xPD0bZH = 0; xPD0bZH <= N; xPD0bZH = xPD0bZH + 1)
            if (m_benefit < ozy24u6K[N][xPD0bZH])
                m_benefit = ozy24u6K[N][xPD0bZH];
        printf ("%d\n", m_benefit);
    }
    return 0;
}

