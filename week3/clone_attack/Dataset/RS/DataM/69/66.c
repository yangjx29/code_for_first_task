char Aw6YGLRtE [MAX_LENGTH +10];
char fAvjHJFuY8h [MAX_LENGTH +10];
int bbTU4De [MAX_LENGTH +10] = {0};
int QwVm037ebi [MAX_LENGTH +10] = {0};

int main () {
    int xxTAqdX = FALSE;
    int JKF3PvD7Q = strlen (Aw6YGLRtE);
    int oE2LusXt4 = strlen (fAvjHJFuY8h);
    int UDMec57hHFk, SRMtjX0QN;
    SRMtjX0QN = 0;
    memset (bbTU4De, 0, sizeof (bbTU4De));
    scanf ("%s", Aw6YGLRtE);
    for (UDMec57hHFk = JKF3PvD7Q -1; UDMec57hHFk >= 0; UDMec57hHFk--) {
        bbTU4De[SRMtjX0QN++] = Aw6YGLRtE[UDMec57hHFk] - '0';
    }
    SRMtjX0QN = 0;
    scanf ("%s", fAvjHJFuY8h);
    memset (QwVm037ebi, 0, sizeof (QwVm037ebi));
    for (UDMec57hHFk = oE2LusXt4 - 1; UDMec57hHFk >= 0; UDMec57hHFk--) {
        QwVm037ebi[SRMtjX0QN++] = fAvjHJFuY8h[UDMec57hHFk] - '0';
    }
    {
        UDMec57hHFk = 0;
        while (UDMec57hHFk < MAX_LENGTH) {
            bbTU4De[UDMec57hHFk] += QwVm037ebi[UDMec57hHFk];
            if (bbTU4De[UDMec57hHFk] >= 10) {
                bbTU4De[UDMec57hHFk] -= 10;
                bbTU4De[UDMec57hHFk +1]++;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            UDMec57hHFk++;
        };
    }
    {
        UDMec57hHFk = MAX_LENGTH;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (UDMec57hHFk >= 0) {
            if (xxTAqdX)
                printf ("%d", bbTU4De[UDMec57hHFk]);
            else if (bbTU4De[UDMec57hHFk]) {
                xxTAqdX = TRUE;
                printf ("%d", bbTU4De[UDMec57hHFk]);
            }
            UDMec57hHFk--;
        };
    }
    if (xxTAqdX == FALSE)
        ;
    return 0;
}

