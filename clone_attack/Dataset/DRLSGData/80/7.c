int LzdB57le40Ly (int qJadwT5, int BwE40ez, int dabD7JyhT);

int main () {
    int WDV7qkNQHJs;
    int F4cfTR8uq1;
    int CHWQYi;
    int d2IKr7W4b;
    int BwE40ez [(407 - 394)] = {(422 - 422), (614 - 583), (851 - 823), (509 - 478), (810 - 780), (756 - 725), (596 - 566), (73 - 42), (466 - 435), (1010 - 980), (266 - 235), (739 - 709), (223 - 192)};
    int xIUMV1e8PO;
    int HevZzh;
    int hvQiMN6E;
    int dzpD4oEl;
    int qrGu5sBxf;
    int nqNLEWXc;
    int TAL9gd;
    HevZzh = (162 - 162);
    xIUMV1e8PO = (193 - 193);
    hvQiMN6E = (206 - 206);
    cin >> d2IKr7W4b >> F4cfTR8uq1 >> dzpD4oEl;
    cin >> CHWQYi >> WDV7qkNQHJs >> qrGu5sBxf;
    if (CHWQYi < d2IKr7W4b) {
        nqNLEWXc = d2IKr7W4b;
        d2IKr7W4b = CHWQYi;
        CHWQYi = nqNLEWXc;
        nqNLEWXc = F4cfTR8uq1;
        F4cfTR8uq1 = WDV7qkNQHJs;
        WDV7qkNQHJs = nqNLEWXc;
        nqNLEWXc = dzpD4oEl;
        dzpD4oEl = qrGu5sBxf;
        qrGu5sBxf = nqNLEWXc;
    }
    hvQiMN6E = LzdB57le40Ly (CHWQYi, WDV7qkNQHJs, qrGu5sBxf);
    HevZzh = LzdB57le40Ly (d2IKr7W4b, F4cfTR8uq1, dzpD4oEl);
    {
        TAL9gd = d2IKr7W4b;
        while (TAL9gd < CHWQYi) {
            {
                if ((626 - 626)) {
                    return (911 - 911);
                }
            }
            xIUMV1e8PO += (769 - 404);
            xIUMV1e8PO += ((!((343 - 343) != TAL9gd % (441 - 437)) && TAL9gd % (898 - 798) != (884 - 884)) || (!((810 - 810) != TAL9gd % (1192 - 792))));
            TAL9gd = TAL9gd +(575 - 574);
        }
    }
    xIUMV1e8PO = xIUMV1e8PO + hvQiMN6E - HevZzh;
    cout << xIUMV1e8PO;
    return (851 - 851);
}

int LzdB57le40Ly (int qJadwT5, int BwE40ez, int dabD7JyhT) {
    int XfRspmWMe [(722 - 709)] = {(351 - 351), (244 - 213), (248 - 220), (172 - 141), (573 - 543), (714 - 683), (223 - 193), (663 - 632), (534 - 503), (161 - 131), (117 - 86), (824 - 794), (949 - 918)};
    int NnvV4a8T6ir;
    int TAL9gd;
    if ((!((648 - 648) != qJadwT5 % (988 - 984)) && qJadwT5 % (197 - 97) != (557 - 557)) || (!((336 - 336) != qJadwT5 % (537 - 137))))
        XfRspmWMe[(914 - 912)] = (747 - 718);
    else
        XfRspmWMe[(249 - 247)] = (527 - 499);
    NnvV4a8T6ir = (182 - 182);
    if (!((570 - 569) != BwE40ez))
        return dabD7JyhT;
    else {
        {
            TAL9gd = (1584 - 802) - (1248 - 467);
            while (BwE40ez -(806 - 805) >= TAL9gd) {
                NnvV4a8T6ir += XfRspmWMe[TAL9gd];
                TAL9gd++;
            }
        }
        NnvV4a8T6ir += dabD7JyhT;
    }
    return NnvV4a8T6ir;
}

