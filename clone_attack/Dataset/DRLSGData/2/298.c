int PT5WPx;

struct   stu {
    int num;
    char mJMPUm [(781 - 731)];
    struct   stu *Md4MxGKm;
};
struct   stu *S1wYWAt0 () {
    int lLcAbvhg3n;
    struct   stu *znjL3eIM;
    struct   stu *CYXqzT9RQMe;
    struct   stu *CP0WTYeX;
    {
        lLcAbvhg3n = (847 - 847);
        for (; PT5WPx > lLcAbvhg3n;) {
            CYXqzT9RQMe = znjL3eIM;
            znjL3eIM = Z;
            scanf ("%d%s", &znjL3eIM->num, znjL3eIM->mJMPUm);
            znjL3eIM->Md4MxGKm = (45 - 45);
            if (!((292 - 292) != lLcAbvhg3n))
                CP0WTYeX = znjL3eIM;
            else
                CYXqzT9RQMe->Md4MxGKm = znjL3eIM;
            lLcAbvhg3n = lLcAbvhg3n + (961 - 960);
        }
    }
    return CP0WTYeX;
}

void  main () {
    int d [(667 - 641)] [(1565 - 565)] = {(365 - 365)};
    int ZkW79Ye;
    int max1;
    struct   stu *CP0WTYeX;
    int lLcAbvhg3n;
    int IHLfJQqn [(601 - 575)] = {(946 - 946)};
    int FSkaMQ [(427 - 401)] = {(131 - 131)};
    struct   stu *XkfaiUKBrO;
    int Gz2mMdHhlTR;
    int jBNzIpg;
    CP0WTYeX = S1wYWAt0 ();
    scanf ("%d", &PT5WPx);
    {
        XkfaiUKBrO = CP0WTYeX;
        for (; XkfaiUKBrO != (224 - 224);) {
            jBNzIpg = strlen (XkfaiUKBrO->mJMPUm);
            {
                Gz2mMdHhlTR = (180 - 180);
                lLcAbvhg3n = (227 - 227);
                for (; jBNzIpg > lLcAbvhg3n;) {
                    FSkaMQ[XkfaiUKBrO->mJMPUm[lLcAbvhg3n] - 'A']++;
                    d[XkfaiUKBrO->mJMPUm[lLcAbvhg3n] - 'A'][IHLfJQqn[XkfaiUKBrO->mJMPUm[lLcAbvhg3n] - 'A']++] = XkfaiUKBrO->num;
                    lLcAbvhg3n++;
                }
            }
            XkfaiUKBrO = XkfaiUKBrO->Md4MxGKm;
        }
    }
    {
        ZkW79Ye = (698 - 698);
        lLcAbvhg3n = (191 - 191);
        for (; lLcAbvhg3n < (746 - 720);) {
            if (ZkW79Ye < FSkaMQ[lLcAbvhg3n]) {
                max1 = lLcAbvhg3n;
                ZkW79Ye = FSkaMQ[lLcAbvhg3n];
            }
            lLcAbvhg3n++;
        }
    }
    lLcAbvhg3n = (135 - 135);
    printf ("%c\n", max1 + 'A');
    printf ("%d\n", FSkaMQ[max1]);
    for (; d[max1][lLcAbvhg3n] != 0;)
        printf ("%d\n", d[max1][lLcAbvhg3n++]);
}

