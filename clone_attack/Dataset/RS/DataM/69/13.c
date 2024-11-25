int main () {
    int fMcHZO [(1071 - 818)];
    int h8B2mLdECQkJ [(441 - 188)];
    int LiywUxk [(776 - 523)];
    char a [(475 - 222)];
    char uvUtnYiF [(1133 - 880)];
    char iLNg7CeVuB [(848 - 595)];
    int sahUrdSTjH;
    int JvtfsECb;
    int RGd245pgTwnZ;
    int FwZGWb8oyUt;
    int s;
    int tPdYfAH7zDNX;
    int yotF96jyO;
    s = (661 - 661);
    h8B2mLdECQkJ[(207 - 207)] = (96 - 96);
    fMcHZO[(379 - 379)] = (202 - 202);
    scanf ("%s\n%s", &a, &uvUtnYiF);
    JvtfsECb = strlen (a);
    RGd245pgTwnZ = strlen (uvUtnYiF);
    if (JvtfsECb < RGd245pgTwnZ) {
        strcpy (iLNg7CeVuB, a);
        strcpy (a, uvUtnYiF);
        strcpy (uvUtnYiF, iLNg7CeVuB);
    }
    tPdYfAH7zDNX = strlen (a);
    yotF96jyO = strlen (uvUtnYiF);
    FwZGWb8oyUt = yotF96jyO - (830 - 829);
    {
        sahUrdSTjH = 152 - 151;
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
        while (sahUrdSTjH >= (576 - 576)) {
            fMcHZO[sahUrdSTjH + (790 - 789)] = a[sahUrdSTjH] - '0';
            if (FwZGWb8oyUt >= (666 - 666)) {
                h8B2mLdECQkJ[sahUrdSTjH + (525 - 524)] = uvUtnYiF[FwZGWb8oyUt] - '0';
                FwZGWb8oyUt = FwZGWb8oyUt -1;
            }
            else
                h8B2mLdECQkJ[sahUrdSTjH + (712 - 711)] = (117 - 117);
            sahUrdSTjH = sahUrdSTjH - 1;
        };
    }
    {
        sahUrdSTjH = tPdYfAH7zDNX;
        while ((733 - 733) <= sahUrdSTjH) {
            LiywUxk[sahUrdSTjH] = fMcHZO[sahUrdSTjH] + h8B2mLdECQkJ[sahUrdSTjH];
            if (LiywUxk[sahUrdSTjH] >= (509 - 499)) {
                LiywUxk[sahUrdSTjH] = LiywUxk[sahUrdSTjH] - 10;
                fMcHZO[sahUrdSTjH - 1] = fMcHZO[sahUrdSTjH - 1] + 1;
            }
            sahUrdSTjH = sahUrdSTjH - 1;
        };
    }
    while (LiywUxk[s] == 0)
        s++;
    {
        sahUrdSTjH = s;
        while (sahUrdSTjH <= tPdYfAH7zDNX) {
            printf ("%d", LiywUxk[sahUrdSTjH]);
            sahUrdSTjH++;
        };
    }
    if (s > tPdYfAH7zDNX)
        ;
    return 0;
}

