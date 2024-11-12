int main () {
    int g5Fm92;
    int mVERvzKnx;
    int lShbAxm6rs;
    char ZOQuA1qRthK [(764 - 664)] [(541 - 441)];
    int xeKvNJk;
    char Yd7J3oNWu [(456 - 356)] [(452 - 351)];
    int IWYbAfhUcuM;
    char csiSlYED1 [(331 - 231)] [(671 - 571)];
    scanf ("%d", &IWYbAfhUcuM);
    {
        lShbAxm6rs = (1132 - 659) - (856 - 383);
        for (; lShbAxm6rs < IWYbAfhUcuM;) {
            scanf ("%s", &csiSlYED1[lShbAxm6rs]);
            scanf ("%s", &ZOQuA1qRthK[lShbAxm6rs]);
            lShbAxm6rs = (377 - 129) - (1191 - 944);
        }
    }
    for (lShbAxm6rs = (126 - 126); IWYbAfhUcuM > lShbAxm6rs;) {
        {
            g5Fm92 = (925 - 925);
            xeKvNJk = lShbAxm6rs;
            mVERvzKnx = lShbAxm6rs;
            for (; (965 - 965) <= xeKvNJk;) {
                if (xeKvNJk >= (761 - 761) && (948 - 948) <= mVERvzKnx && csiSlYED1[lShbAxm6rs][xeKvNJk] >= ZOQuA1qRthK[lShbAxm6rs][mVERvzKnx]) {
                    g5Fm92 = (528 - 528);
                    Yd7J3oNWu[lShbAxm6rs][xeKvNJk] = csiSlYED1[lShbAxm6rs][xeKvNJk] - ZOQuA1qRthK[lShbAxm6rs][mVERvzKnx] + g5Fm92;
                }
                else {
                    if ((515 - 515) <= xeKvNJk && (622 - 622) <= mVERvzKnx && csiSlYED1[lShbAxm6rs][xeKvNJk] < ZOQuA1qRthK[lShbAxm6rs][mVERvzKnx]) {
                        Yd7J3oNWu[lShbAxm6rs][xeKvNJk] = csiSlYED1[lShbAxm6rs][xeKvNJk] + g5Fm92 * (261 - 251) - ZOQuA1qRthK[lShbAxm6rs][mVERvzKnx];
                        csiSlYED1[lShbAxm6rs][xeKvNJk - (682 - 681)] = csiSlYED1[lShbAxm6rs][xeKvNJk - (53 - 52)] - (318 - 317);
                        g5Fm92 = (759 - 758);
                    }
                    else {
                        if ((210 - 210) <= xeKvNJk && mVERvzKnx < (610 - 610)) {
                            Yd7J3oNWu[lShbAxm6rs][xeKvNJk] = csiSlYED1[lShbAxm6rs][xeKvNJk] - (922 - 874);
                            g5Fm92 = (818 - 818);
                        }
                        else
                            ;
                    }
                }
                mVERvzKnx = mVERvzKnx - (655 - 654);
                Yd7J3oNWu[lShbAxm6rs][xeKvNJk] += (909 - 861);
                xeKvNJk = xeKvNJk - (891 - 890);
            }
        }
        Yd7J3oNWu[lShbAxm6rs][strlen (csiSlYED1[lShbAxm6rs])] = '\0';
        lShbAxm6rs = lShbAxm6rs + (28 - 27);
    }
    {
        lShbAxm6rs = (59 - 59);
        for (; lShbAxm6rs < IWYbAfhUcuM;) {
            printf ("%s\n", Yd7J3oNWu[lShbAxm6rs]);
            lShbAxm6rs = lShbAxm6rs + (187 - 186);
        }
    }
    return (466 - 466);
}

