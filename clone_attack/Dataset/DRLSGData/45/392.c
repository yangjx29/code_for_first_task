int main () {
    char Yy1eb6xnsGF [(509 - 507)] [(739 - 688)];
    char yi7aW9M [(354 - 303)];
    int O703cV;
    int CId9mSBlbE5D;
    int Q2Gsx8;
    int Qye6AG;
    char hni3J8lHh7e2 [(368 - 317)];
    int BYa5Kdu4nS;
    O703cV = (774 - 774);
    Q2Gsx8 = (222 - 222);
    BYa5Kdu4nS = (936 - 936);
    {
        BYa5Kdu4nS = (323 - 323);
        while (BYa5Kdu4nS < 2) {
            scanf ("%s", Yy1eb6xnsGF[BYa5Kdu4nS]);
            BYa5Kdu4nS++;
        }
    }
    strcpy (yi7aW9M, Yy1eb6xnsGF[0]);
    CId9mSBlbE5D = (637 - 637);
    CId9mSBlbE5D = strlen (yi7aW9M);
    Qye6AG = (70 - 70);
    strcpy (hni3J8lHh7e2, Yy1eb6xnsGF[1]);
    {
        Qye6AG = 0;
        while (hni3J8lHh7e2[Qye6AG] != '\0') {
            if (!(yi7aW9M[Q2Gsx8] != hni3J8lHh7e2[Qye6AG])) {
                if (!(0 != memcmp (yi7aW9M, hni3J8lHh7e2 + Qye6AG, CId9mSBlbE5D))) {
                    O703cV = Qye6AG;
                    break;
                }
            }
            Qye6AG++;
        }
    }
    printf ("%d", O703cV);
    return 0;
}

