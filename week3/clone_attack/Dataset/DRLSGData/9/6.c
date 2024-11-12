struct   bing {
    char iEol3JDmd8 [(462 - 442)];
    int age;
};
int main () {
    int nFzA6rZtS;
    struct   bing QN71f9W [(463 - 363)];
    int vjI6NtCd;
    int HwI4qsb1yW;
    int fdCBgljou;
    int goFNGpTs0Aj;
    struct   bing mHzF7E [(753 - 653)];
    struct   bing owTRMp [(780 - 680)];
    struct   bing temp;
    fdCBgljou = (350 - 350);
    scanf ("%d", &vjI6NtCd);
    goFNGpTs0Aj = (432 - 432);
    {
        HwI4qsb1yW = (889 - 889);
        while (HwI4qsb1yW <= vjI6NtCd - (34 - 33)) {
            scanf ("%s%d", QN71f9W[HwI4qsb1yW].iEol3JDmd8, &QN71f9W[HwI4qsb1yW].age);
            HwI4qsb1yW++;
        }
    }
    {
        HwI4qsb1yW = (156 - 156);
        for (; vjI6NtCd - (895 - 894) >= HwI4qsb1yW;) {
            if (QN71f9W[HwI4qsb1yW].age >= (277 - 217)) {
                mHzF7E[fdCBgljou] = QN71f9W[HwI4qsb1yW];
                fdCBgljou++;
            }
            else {
                owTRMp[goFNGpTs0Aj] = QN71f9W[HwI4qsb1yW];
                goFNGpTs0Aj++;
            }
            HwI4qsb1yW++;
        }
    }
    for (HwI4qsb1yW = (557 - 556); HwI4qsb1yW <= fdCBgljou - (866 - 865); HwI4qsb1yW++) {
        temp = mHzF7E[HwI4qsb1yW];
        {
            nFzA6rZtS = HwI4qsb1yW -(84 - 83);
            while (nFzA6rZtS >= (29 - 29)) {
                if (temp.age > mHzF7E[nFzA6rZtS].age) {
                    mHzF7E[nFzA6rZtS + (337 - 336)] = mHzF7E[nFzA6rZtS];
                    mHzF7E[nFzA6rZtS] = temp;
                }
                else {
                    break;
                }
                nFzA6rZtS--;
            }
        }
    }
    {
        HwI4qsb1yW = (863 - 863);
        while (HwI4qsb1yW <= fdCBgljou - (404 - 403)) {
            puts (mHzF7E[HwI4qsb1yW].iEol3JDmd8);
            HwI4qsb1yW++;
        }
    }
    {
        HwI4qsb1yW = (639 - 639);
        while (HwI4qsb1yW <= goFNGpTs0Aj - (128 - 127)) {
            puts (owTRMp[HwI4qsb1yW].iEol3JDmd8);
            HwI4qsb1yW++;
        }
    }
    return (732 - 732);
}

