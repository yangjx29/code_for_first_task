main () {
    int ZSNd4WU9oeJM;
    int gIYtnvdVu7;
    int Dkgo8uLR [1001];
    int n;
    int bap56eUNZQlh;
    int PhNoiTI;
    int UhUs91aq;
    bap56eUNZQlh = 0;
    scanf ("%d", &n);
    {
        PhNoiTI = 1;
        for (; n >= PhNoiTI;) {
            ZSNd4WU9oeJM = 0;
            {
                UhUs91aq = 1;
                for (; n >= UhUs91aq;) {
                    scanf ("%d ", &Dkgo8uLR[UhUs91aq]);
                    if (!(0 != Dkgo8uLR[UhUs91aq]))
                        ZSNd4WU9oeJM++;
                    UhUs91aq++;
                }
            }
            if (ZSNd4WU9oeJM != 0)
                break;
            PhNoiTI++;
        }
    }
    {
        PhNoiTI = PhNoiTI +1;
        for (; n >= PhNoiTI;) {
            int mJBxXP;
            mJBxXP = 0;
            {
                UhUs91aq = 1;
                for (; UhUs91aq <= n;) {
                    scanf ("%d ", &Dkgo8uLR[UhUs91aq]);
                    if (Dkgo8uLR[UhUs91aq] == 0)
                        mJBxXP++;
                    UhUs91aq++;
                }
            }
            if (mJBxXP != 0)
                bap56eUNZQlh++;
            else
                break;
            PhNoiTI++;
        }
    }
    gIYtnvdVu7 = (bap56eUNZQlh - 1) * (ZSNd4WU9oeJM -2);
    printf ("%d", gIYtnvdVu7);
}

