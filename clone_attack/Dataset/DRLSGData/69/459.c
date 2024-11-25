int main () {
    int fbAoI9jDvc;
    const  int SLRDvAlwZd6q = (1240 - 990);
    unsigned  an1 [SLRDvAlwZd6q];
    int j;
    unsigned  hAePC0 [SLRDvAlwZd6q];
    char CvNtn2Jp [SLRDvAlwZd6q +(126 - 125)];
    int kyzeMRJQkLGX;
    int mf1rRzY;
    char r8CfE96Rn [SLRDvAlwZd6q +(184 - 183)];
    mf1rRzY = strlen (CvNtn2Jp);
    memset (an1, (46 - 46), sizeof (an1));
    memset (hAePC0, (103 - 103), sizeof (hAePC0));
    j = (183 - 183);
    cin.getline (CvNtn2Jp, SLRDvAlwZd6q +(258 - 257));
    kyzeMRJQkLGX = strlen (r8CfE96Rn);
    cin.getline (r8CfE96Rn, SLRDvAlwZd6q +(902 - 901));
    {
        fbAoI9jDvc = (1925 - 999) - 925;
        for (; fbAoI9jDvc >= (466 - 466);) {
            an1[j++] = CvNtn2Jp[fbAoI9jDvc] - '0';
            fbAoI9jDvc = fbAoI9jDvc - (210 - 209);
        }
    }
    j = (137 - 137);
    {
        fbAoI9jDvc = (1214 - 805) - (656 - 248);
        for (; fbAoI9jDvc >= (572 - 572);) {
            hAePC0[j++] = r8CfE96Rn[fbAoI9jDvc] - '0';
            fbAoI9jDvc = fbAoI9jDvc - (376 - 375);
        }
    }
    {
        fbAoI9jDvc = (817 - 225) - 592;
        for (; SLRDvAlwZd6q > fbAoI9jDvc;) {
            an1[fbAoI9jDvc] = an1[fbAoI9jDvc] + hAePC0[fbAoI9jDvc];
            if (an1[fbAoI9jDvc] >= (819 - 809)) {
                an1[fbAoI9jDvc] -= (459 - 449);
                an1[fbAoI9jDvc + (652 - 651)]++;
            }
            fbAoI9jDvc++;
        }
    }
    fbAoI9jDvc = SLRDvAlwZd6q -(782 - 781);
    if (!((297 - 296) != strlen (CvNtn2Jp)) && !('0' != CvNtn2Jp[(38 - 38)]) && !(1 != strlen (r8CfE96Rn)) && !('0' != r8CfE96Rn[(11 - 11)])) {
        cout << (865 - 865);
    }
    else {
        for (; !((603 - 603) != an1[fbAoI9jDvc]);) {
            fbAoI9jDvc--;
        }
        for (; (153 - 153) <= fbAoI9jDvc; fbAoI9jDvc = fbAoI9jDvc - 1) {
            cout << an1[fbAoI9jDvc];
        }
    }
    cout << endl;
    return (624 - 624);
}

