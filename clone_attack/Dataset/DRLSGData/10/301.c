int Vz0f1PQrs [25], S8apr1HNTj;
int lBWilJfGoNx [25];
int ZqkmZL, uLKcd0tg, KURVBl;

int main () {
    int WXvauw = 0;
    cin >> S8apr1HNTj;
    {
        ZqkmZL = 0;
        for (; S8apr1HNTj > ZqkmZL;) {
            cin >> Vz0f1PQrs[ZqkmZL];
            lBWilJfGoNx[ZqkmZL] = (383 - 382);
            ZqkmZL = ZqkmZL +1;
        }
    }
    lBWilJfGoNx[0] = 1;
    {
        ZqkmZL = 1;
        for (; S8apr1HNTj > ZqkmZL;) {
            {
                uLKcd0tg = ZqkmZL -1;
                for (; uLKcd0tg >= 0;) {
                    if (Vz0f1PQrs[ZqkmZL] <= Vz0f1PQrs[uLKcd0tg]) {
                        KURVBl = lBWilJfGoNx[uLKcd0tg] + 1;
                        if (KURVBl > lBWilJfGoNx[ZqkmZL]) {
                            lBWilJfGoNx[ZqkmZL] = KURVBl;
                            if (KURVBl > WXvauw) {
                                WXvauw = KURVBl;
                            }
                        }
                    }
                    uLKcd0tg--;
                }
            }
            ZqkmZL = ZqkmZL +1;
        }
    }
    cout << WXvauw << endl;
    return 0;
}

