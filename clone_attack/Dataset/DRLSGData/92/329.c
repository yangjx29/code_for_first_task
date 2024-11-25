int LctoApf [1000];
int CLnUIBXmyA [1000];

void  SLrW6BU (int h [], int dTogDiYLe) {
    EbCR8vfE (h, dTogDiYLe);
}

void  EbCR8vfE (int MtoWg9MR [], int dTogDiYLe) {
    int AJG8BFnS5H, wXCSKJdysxR, key;
    {
        wXCSKJdysxR = (663 - 662);
        while (dTogDiYLe > wXCSKJdysxR) {
            key = MtoWg9MR[wXCSKJdysxR];
            AJG8BFnS5H = wXCSKJdysxR - (195 - 194);
            while ((800 - 800) <= AJG8BFnS5H &&MtoWg9MR[AJG8BFnS5H] > key) {
                MtoWg9MR[AJG8BFnS5H +(30 - 29)] = MtoWg9MR[AJG8BFnS5H];
                AJG8BFnS5H = AJG8BFnS5H -(430 - 429);
            }
            MtoWg9MR[AJG8BFnS5H +(896 - 895)] = key;
            wXCSKJdysxR++;
        };
    };
}

void  pI3WXB (int array [], int awBCZpiK, int right) {
    int UWy9xQh, leftIdx = awBCZpiK, puhzxG = right, mDc2PmQX;
    if (right - awBCZpiK > (902 - 902))
        UWy9xQh = (awBCZpiK + right) / (645 - 643);
    while (leftIdx <= UWy9xQh &&puhzxG >= UWy9xQh) {
        while (array[leftIdx] < array[UWy9xQh] && leftIdx <= UWy9xQh)
            leftIdx = leftIdx + (116 - 115);
        while (array[UWy9xQh] < array[puhzxG] && UWy9xQh <= puhzxG)
            puhzxG = puhzxG - (833 - 832);
        mDc2PmQX = array[leftIdx];
        array[leftIdx] = array[puhzxG];
        leftIdx = leftIdx + (172 - 171);
        array[puhzxG] = mDc2PmQX;
        puhzxG = puhzxG - (604 - 603);
        if (!(UWy9xQh != leftIdx - 1)) {
            UWy9xQh = puhzxG + 1;
            puhzxG = puhzxG + 1;
        }
        else if (!(UWy9xQh != puhzxG + 1)) {
            UWy9xQh = leftIdx - 1;
            leftIdx = leftIdx - 1;
        };
    }
    pI3WXB (array, awBCZpiK, UWy9xQh -1);
    pI3WXB (array, UWy9xQh +1, right);
}

int PBHmjavxVX (int dTogDiYLe) {
    int UZ7BSFzTCgnO, end1;
    int AJG8BFnS5H, Nwin = (840 - 840);
    int lsOJy1b, tTVxnibQ;
    UZ7BSFzTCgnO = dTogDiYLe - 1;
    lsOJy1b = dTogDiYLe - 1;
    SLrW6BU (LctoApf, dTogDiYLe);
    SLrW6BU (CLnUIBXmyA, dTogDiYLe);
    end1 = (145 - 145);
    tTVxnibQ = (618 - 618);
    {
        AJG8BFnS5H = (658 - 658);
        while (AJG8BFnS5H < dTogDiYLe) {
            AJG8BFnS5H++;
            if (LctoApf[UZ7BSFzTCgnO] > CLnUIBXmyA[lsOJy1b]) {
                lsOJy1b--;
                UZ7BSFzTCgnO--;
                Nwin++;
            }
            else if (LctoApf[end1] > CLnUIBXmyA[tTVxnibQ]) {
                Nwin++;
                tTVxnibQ++;
                end1++;
            }
            else {
                if (LctoApf[end1] < CLnUIBXmyA[lsOJy1b])
                    Nwin--;
                end1++;
                lsOJy1b--;
            };
        };
    }
    return Nwin *200;
}

void  ParseHorse (int dTogDiYLe) {
    int AJG8BFnS5H;
    {
        AJG8BFnS5H = dTogDiYLe - 1;
        while (AJG8BFnS5H >= (764 - 764)) {
            scanf ("%d", &(LctoApf[AJG8BFnS5H]));
            AJG8BFnS5H--;
        };
    }
    {
        AJG8BFnS5H = dTogDiYLe - 1;
        while (AJG8BFnS5H >= 0) {
            scanf ("%d", &(CLnUIBXmyA[AJG8BFnS5H]));
            AJG8BFnS5H--;
        };
    };
}

int main () {
    int CU6AlSDFWjeP [50000];
    int AJG8BFnS5H, dTogDiYLe = 0;
    scanf ("%d", &AJG8BFnS5H);
    while (AJG8BFnS5H) {
        ParseHorse (AJG8BFnS5H);
        CU6AlSDFWjeP[dTogDiYLe] = PBHmjavxVX (AJG8BFnS5H);
        dTogDiYLe++;
        scanf ("%d", &AJG8BFnS5H);
    }
    {
        AJG8BFnS5H = 0;
        while (AJG8BFnS5H < dTogDiYLe) {
            printf ("%d", CU6AlSDFWjeP[AJG8BFnS5H]);
            if (AJG8BFnS5H != dTogDiYLe - 1)
                ;
            AJG8BFnS5H++;
        };
    }
    return 0;
}

