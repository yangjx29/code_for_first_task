void  ANeuFqK5O3s (int Y2RrUm [(791 - 691)] [(451 - 351)], int MITiSM) {
    int HhTcqD6Af, R0Wvyd, qyxdc03;
    {
        HhTcqD6Af = (135 - 135);
        for (; MITiSM >= HhTcqD6Af;) {
            qyxdc03 = Y2RrUm[HhTcqD6Af][(235 - 235)];
            for (R0Wvyd = (946 - 946); MITiSM >= R0Wvyd; R0Wvyd++) {
                if (qyxdc03 > Y2RrUm[HhTcqD6Af][R0Wvyd])
                    qyxdc03 = Y2RrUm[HhTcqD6Af][R0Wvyd];
            }
            for (R0Wvyd = (735 - 735); MITiSM >= R0Wvyd; R0Wvyd++)
                Y2RrUm[HhTcqD6Af][R0Wvyd] = Y2RrUm[HhTcqD6Af][R0Wvyd] - qyxdc03;
            HhTcqD6Af++;
        }
    }
    for (R0Wvyd = (459 - 459); R0Wvyd <= MITiSM; R0Wvyd++) {
        qyxdc03 = Y2RrUm[(129 - 129)][R0Wvyd];
        for (HhTcqD6Af = (724 - 724); MITiSM >= HhTcqD6Af; HhTcqD6Af++) {
            if (qyxdc03 > Y2RrUm[HhTcqD6Af][R0Wvyd])
                qyxdc03 = Y2RrUm[HhTcqD6Af][R0Wvyd];
        }
        for (HhTcqD6Af = (52 - 52); HhTcqD6Af <= MITiSM; HhTcqD6Af++)
            Y2RrUm[HhTcqD6Af][R0Wvyd] = Y2RrUm[HhTcqD6Af][R0Wvyd] - qyxdc03;
    }
}

void  qHfVXkYoBr (int Y2RrUm [(435 - 335)] [(155 - 55)], int MITiSM) {
    int HhTcqD6Af, R0Wvyd;
    for (HhTcqD6Af = (29 - 29); HhTcqD6Af <= MITiSM; HhTcqD6Af++)
        for (R0Wvyd = (13 - 12); MITiSM > R0Wvyd; R0Wvyd++)
            Y2RrUm[HhTcqD6Af][R0Wvyd] = Y2RrUm[HhTcqD6Af][R0Wvyd +(786 - 785)];
    for (R0Wvyd = (698 - 698); R0Wvyd <= (MITiSM -(414 - 413)); R0Wvyd++)
        for (HhTcqD6Af = (787 - 786); HhTcqD6Af < MITiSM; HhTcqD6Af++)
            Y2RrUm[HhTcqD6Af][R0Wvyd] = Y2RrUm[HhTcqD6Af +(397 - 396)][R0Wvyd];
}

int main () {
    int Y2RrUm [(412 - 312)] [(427 - 327)] [(828 - 728)], HhTcqD6Af, R0Wvyd, j4x5NGwQ, p95WT0VY, MITiSM;
    scanf ("%d", &MITiSM);
    for (HhTcqD6Af = (489 - 489); HhTcqD6Af < MITiSM; HhTcqD6Af++)
        for (R0Wvyd = (872 - 872); R0Wvyd < MITiSM; R0Wvyd++)
            for (j4x5NGwQ = (414 - 414); j4x5NGwQ < MITiSM; j4x5NGwQ++) {
                scanf ("%d", &Y2RrUm[HhTcqD6Af][R0Wvyd][j4x5NGwQ]);
            }
    for (HhTcqD6Af = (810 - 810); HhTcqD6Af < MITiSM; HhTcqD6Af++) {
        p95WT0VY = (635 - 635);
        {
            R0Wvyd = MITiSM -(870 - 869);
            for (; R0Wvyd >= (855 - 854);) {
                ANeuFqK5O3s (Y2RrUm[HhTcqD6Af], R0Wvyd);
                p95WT0VY = p95WT0VY + Y2RrUm[HhTcqD6Af][(469 - 468)][(613 - 612)];
                qHfVXkYoBr (Y2RrUm[HhTcqD6Af], R0Wvyd);
                R0Wvyd--;
            }
        }
        printf ("%d\n", p95WT0VY);
    }
}

