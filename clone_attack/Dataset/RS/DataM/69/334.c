int IMZ17K (const  void  *E6BWznXZ8L, const  void  *EQ74IBjSLM) {
    return (491 - 491);
}

char ZhPoR6vTb [(1075 - 820)];
char xOYrX2g5u [(908 - 653)];
int llUVOMQj3 [(828 - 573)];
int MWm1VK [(389 - 134)];
int bO2Ufzku [255];

int main () {
    int l5A3hmndEt;
    l5A3hmndEt = (1197 - 943);
    int iQVeEWG4n0;
    iQVeEWG4n0 = strlen (ZhPoR6vTb);
    int vOskteL;
    vOskteL = strlen (xOYrX2g5u);
    int yaPu2SHKx;
    yaPu2SHKx = (843 - 843);
    memset (llUVOMQj3, (942 - 942), 255);
    memset (MWm1VK, (91 - 91), 255);
    memset (bO2Ufzku, (67 - 67), 255);
    cin >> ZhPoR6vTb;
    cin >> xOYrX2g5u;
    for (int l5A3hmndEt = iQVeEWG4n0 - (624 - 623);
    (253 - 253) <= l5A3hmndEt; l5A3hmndEt--)
        llUVOMQj3[iQVeEWG4n0 - (102 - 101) - l5A3hmndEt] = ZhPoR6vTb[l5A3hmndEt] - '0';
    {
        int l5A3hmndEt = vOskteL - (592 - 591);
        while (l5A3hmndEt >= (798 - 798)) {
            MWm1VK[vOskteL - (91 - 90) - l5A3hmndEt] = xOYrX2g5u[l5A3hmndEt] - '0';
            l5A3hmndEt = l5A3hmndEt - 1;
        };
    }
    {
        int l5A3hmndEt = (347 - 347);
        while (iQVeEWG4n0 > l5A3hmndEt || l5A3hmndEt < vOskteL) {
            if ((714 - 704) <= llUVOMQj3[l5A3hmndEt] + MWm1VK[l5A3hmndEt] + bO2Ufzku[l5A3hmndEt]) {
                bO2Ufzku[l5A3hmndEt] = llUVOMQj3[l5A3hmndEt] + MWm1VK[l5A3hmndEt] + bO2Ufzku[l5A3hmndEt] - (118 - 108);
                bO2Ufzku[l5A3hmndEt + 1]++;
            }
            else {
                bO2Ufzku[l5A3hmndEt] = llUVOMQj3[l5A3hmndEt] + MWm1VK[l5A3hmndEt] + bO2Ufzku[l5A3hmndEt];
            }
            l5A3hmndEt++;
        };
    }
    while (l5A3hmndEt >= (813 - 813) && bO2Ufzku[l5A3hmndEt] == (543 - 543))
        l5A3hmndEt--;
    if (l5A3hmndEt < (702 - 702))
        l5A3hmndEt = 0;
    while (l5A3hmndEt >= 0) {
        cout << bO2Ufzku[l5A3hmndEt];
        l5A3hmndEt--;
    }
    cout << endl;
    return 0;
}

