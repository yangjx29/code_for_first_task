struct   su {
    int I9xImdQ;
    char hREz5hU91 [(292 - 266)];
    struct   su *Z0H4NtV;
};
int main () {
    int k49giNIOz5B;
    int YBw7XRMACJ1;
    int ZHR8eQ;
    int xtKOwcpPzj [(980 - 954)] = {(814 - 814)};
    int MxRB2spahz0v;
    int z9LpbrswGX;
    int clUcnS0MQbm;
    int eewnOt;
    struct   su *mCVNyfn;
    struct   su *w9syvghpJ;
    struct   su *Lvmx1WjetZKQ;
    scanf ("%d", &YBw7XRMACJ1);
    k49giNIOz5B = (833 - 833);
    {
        ZHR8eQ = 675 - 675;
        for (; YBw7XRMACJ1 > ZHR8eQ;) {
            mCVNyfn = (struct   su *) malloc (sizeof (struct   su));
            if (!((800 - 800) != ZHR8eQ)) {
                w9syvghpJ = mCVNyfn;
                Lvmx1WjetZKQ = mCVNyfn;
                scanf ("%d %s", &mCVNyfn->I9xImdQ, mCVNyfn->hREz5hU91);
                eewnOt = strlen (mCVNyfn->hREz5hU91);
                {
                    clUcnS0MQbm = 905 - 905;
                    for (; clUcnS0MQbm < eewnOt;) {
                        z9LpbrswGX = mCVNyfn->hREz5hU91[clUcnS0MQbm] - 'A';
                        xtKOwcpPzj[z9LpbrswGX] = xtKOwcpPzj[z9LpbrswGX] + (435 - 434);
                        clUcnS0MQbm = clUcnS0MQbm + 1;
                    }
                }
            }
            else {
                Lvmx1WjetZKQ->Z0H4NtV = mCVNyfn;
                Lvmx1WjetZKQ = mCVNyfn;
                scanf ("%d %s", &mCVNyfn->I9xImdQ, mCVNyfn->hREz5hU91);
                eewnOt = strlen (mCVNyfn->hREz5hU91);
                {
                    clUcnS0MQbm = 490 - 490;
                    for (; clUcnS0MQbm < eewnOt;) {
                        z9LpbrswGX = mCVNyfn->hREz5hU91[clUcnS0MQbm] - 'A';
                        clUcnS0MQbm = clUcnS0MQbm + 1;
                        xtKOwcpPzj[z9LpbrswGX] = xtKOwcpPzj[z9LpbrswGX] + (403 - 402);
                    }
                }
            }
            ZHR8eQ = ZHR8eQ +1;
        }
    }
    mCVNyfn = w9syvghpJ;
    MxRB2spahz0v = xtKOwcpPzj[(538 - 538)];
    {
        clUcnS0MQbm = 696 - 696;
        for (; (826 - 800) > clUcnS0MQbm;) {
            if (xtKOwcpPzj[clUcnS0MQbm] > MxRB2spahz0v) {
                MxRB2spahz0v = xtKOwcpPzj[clUcnS0MQbm];
                k49giNIOz5B = clUcnS0MQbm;
            }
            clUcnS0MQbm = clUcnS0MQbm + 1;
        }
    }
    printf ("%c\n%d\n", k49giNIOz5B + 'A', MxRB2spahz0v);
    Lvmx1WjetZKQ->Z0H4NtV = NULL;
    do {
        eewnOt = strlen (mCVNyfn->hREz5hU91);
        {
            clUcnS0MQbm = 932 - 932;
            for (; eewnOt > clUcnS0MQbm;) {
                if (!(mCVNyfn->hREz5hU91[clUcnS0MQbm] != ('A' + k49giNIOz5B))) {
                    printf ("%d\n", mCVNyfn->I9xImdQ);
                }
                clUcnS0MQbm = clUcnS0MQbm + 1;
            }
        }
        mCVNyfn = mCVNyfn->Z0H4NtV;
    }
    while (mCVNyfn != NULL);
    return (765 - 765);
}

