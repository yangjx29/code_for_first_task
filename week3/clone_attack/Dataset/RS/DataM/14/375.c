struct   student {
    int XWSJ0P;
    int yuwen;
    int xnTd9zUwXyxZ;
    int K7g8DU;
    struct   student *next;
};
int j4G2QV389jO, TZGr1x5BwP0j = 0, m3lSVzJWkx;
struct   student *hOKnwoF, *m2, *m3, *q;

struct   student *nQsnF1PXo9 (void ) {
    struct   student *w8TH1au;
    struct   student *MryH6YWhI;
    struct   student *VDBsdUjfmWk;
    MryH6YWhI = VDBsdUjfmWk = (struct   student *) malloc (LEN);
    scanf ("%d %d %d", &MryH6YWhI->XWSJ0P, &MryH6YWhI->yuwen, &MryH6YWhI->xnTd9zUwXyxZ);
    MryH6YWhI->K7g8DU = MryH6YWhI->yuwen + MryH6YWhI->xnTd9zUwXyxZ;
    w8TH1au = NULL;
    while (TZGr1x5BwP0j < j4G2QV389jO - 1) {
        if (!(0 != TZGr1x5BwP0j))
            w8TH1au = MryH6YWhI;
        else
            VDBsdUjfmWk->next = MryH6YWhI;
        VDBsdUjfmWk = MryH6YWhI;
        MryH6YWhI = (struct   student *) malloc (LEN);
        scanf ("%d %d %d", &MryH6YWhI->XWSJ0P, &MryH6YWhI->yuwen, &MryH6YWhI->xnTd9zUwXyxZ);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        MryH6YWhI->K7g8DU = MryH6YWhI->yuwen + MryH6YWhI->xnTd9zUwXyxZ;
        if (3 <= TZGr1x5BwP0j) {
            TZGr1x5BwP0j++;
            if (VDBsdUjfmWk->K7g8DU > hOKnwoF->K7g8DU) {
                m3 = m2;
                m2 = hOKnwoF;
                hOKnwoF = VDBsdUjfmWk;
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (VDBsdUjfmWk->K7g8DU <= hOKnwoF->K7g8DU && m2->K7g8DU < VDBsdUjfmWk->K7g8DU) {
                    m3 = m2;
                    m2 = VDBsdUjfmWk;
                }
                else {
                    if (VDBsdUjfmWk->K7g8DU <= m2->K7g8DU && m3->K7g8DU < VDBsdUjfmWk->K7g8DU)
                        m3 = VDBsdUjfmWk;
                };
            }
            continue;
        }
        if (TZGr1x5BwP0j == 0)
            hOKnwoF = VDBsdUjfmWk;
        else {
            if (!(1 != TZGr1x5BwP0j))
                m2 = VDBsdUjfmWk;
            else {
                if (TZGr1x5BwP0j == 2) {
                    m3 = VDBsdUjfmWk;
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
                    if (hOKnwoF->K7g8DU > m2->K7g8DU) {
                        if (m2->K7g8DU <= m3->K7g8DU) {
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            }
                            if (hOKnwoF->K7g8DU > m3->K7g8DU) {
                                q = m3;
                                m3 = m2;
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        float n = 0.0;
                                        if (n > 10)
                                            return;
                                        else
                                            n = 0;
                                    }
                                }
                                m2 = q;
                            }
                            else {
                                if (hOKnwoF->K7g8DU <= m3->K7g8DU) {
                                    q = hOKnwoF;
                                    hOKnwoF = m2;
                                    m2 = m3;
                                    m3 = q;
                                };
                            };
                        };
                    }
                    else {
                        if (hOKnwoF->K7g8DU <= m2->K7g8DU) {
                            if (m2->K7g8DU > m3->K7g8DU) {
                                if (hOKnwoF->K7g8DU > m3->K7g8DU) {
                                    q = hOKnwoF;
                                    hOKnwoF = m2;
                                    m2 = q;
                                }
                                else {
                                    if (hOKnwoF->K7g8DU <= m3->K7g8DU) {
                                        q = m3;
                                        m3 = hOKnwoF;
                                        hOKnwoF = m2;
                                        m2 = q;
                                    };
                                };
                            }
                            else if (m2->K7g8DU <= m3->K7g8DU) {
                                q = hOKnwoF;
                                hOKnwoF = m3;
                                m3 = q;
                            };
                        };
                    };
                };
            };
        }
        TZGr1x5BwP0j++;
    }
    return (w8TH1au);
}

int main () {
    struct   student *w8TH1au;
    scanf ("%d", &j4G2QV389jO);
    w8TH1au = nQsnF1PXo9 ();
    printf ("%d %d\n", hOKnwoF->XWSJ0P, hOKnwoF->K7g8DU);
    printf ("%d %d\n", m2->XWSJ0P, m2->K7g8DU);
    printf ("%d %d\n", m3->XWSJ0P, m3->K7g8DU);
    return 0;
}

