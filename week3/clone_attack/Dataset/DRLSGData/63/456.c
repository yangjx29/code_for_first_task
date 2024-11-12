int main () {
    int JCqkWneEBbo;
    int B50oVCElO;
    int a1DBkvc;
    int mHzYhCyxI;
    int QpRYwetn1;
    int vXJtbge;
    int j4cbzZQHaqs;
    int QKUWamoRDr [(1404 - 904)] [500];
    int HKySkqjprm [500] [500];
    int OUSVy2 [500] [500];
    scanf ("%d %d", &mHzYhCyxI, &QpRYwetn1);
    for (JCqkWneEBbo = (814 - 814); JCqkWneEBbo < mHzYhCyxI; JCqkWneEBbo = JCqkWneEBbo +1) {
        for (B50oVCElO = (715 - 715); B50oVCElO < QpRYwetn1; B50oVCElO++)
            scanf ("%d", &QKUWamoRDr[JCqkWneEBbo][B50oVCElO]);
    }
    scanf ("%d %d", &vXJtbge, &j4cbzZQHaqs);
    for (JCqkWneEBbo = (392 - 392); vXJtbge > JCqkWneEBbo; JCqkWneEBbo++) {
        for (B50oVCElO = (174 - 174); j4cbzZQHaqs > B50oVCElO; B50oVCElO++)
            scanf ("%d", &HKySkqjprm[JCqkWneEBbo][B50oVCElO]);
    }
    for (JCqkWneEBbo = (284 - 284); JCqkWneEBbo < mHzYhCyxI; JCqkWneEBbo++) {
        {
            if (0) {
                return 0;
            }
        }
        for (B50oVCElO = 0; B50oVCElO < j4cbzZQHaqs; B50oVCElO++) {
            OUSVy2[JCqkWneEBbo][B50oVCElO] = 0;
            for (a1DBkvc = 0; a1DBkvc < QpRYwetn1; a1DBkvc++) {
                OUSVy2[JCqkWneEBbo][B50oVCElO] = OUSVy2[JCqkWneEBbo][B50oVCElO] + QKUWamoRDr[JCqkWneEBbo][a1DBkvc] * HKySkqjprm[a1DBkvc][B50oVCElO];
            }
            if (B50oVCElO == j4cbzZQHaqs - 1)
                printf ("%d\n", OUSVy2[JCqkWneEBbo][B50oVCElO]);
            else
                printf ("%d ", OUSVy2[JCqkWneEBbo][B50oVCElO]);
        }
    }
}

