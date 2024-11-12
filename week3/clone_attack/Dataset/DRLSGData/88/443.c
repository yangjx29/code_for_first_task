char mkSP6lwdzF [(757 - 726)];
float LaCt7J [(957 - 926)];
char uWBRj84L [(717 - 686)] [(880 - 849)];

void  At07OCo (char Z4S2QB9 [], int jkawSpGREYV) {
    int cxDTA5nu;
    int zRUkTc;
    {
        if ((536 - 536)) {
            return (961 - 961);
        }
    }
    cxDTA5nu = (266 - 266);
    zRUkTc = (88 - 88);
    {
        zRUkTc = (793 - 793);
        for (; zRUkTc < jkawSpGREYV;) {
            if (!(' ' != Z4S2QB9[zRUkTc])) {
                cxDTA5nu = zRUkTc;
                for (; jkawSpGREYV > cxDTA5nu;) {
                    Z4S2QB9[cxDTA5nu] = Z4S2QB9[cxDTA5nu + (14 - 13)];
                    cxDTA5nu = cxDTA5nu + (635 - 634);
                }
            }
            zRUkTc = zRUkTc + (162 - 161);
        }
    }
}

void  hwQG7jBP (char Z4S2QB9 [], int jkawSpGREYV) {
    int cxDTA5nu;
    int zRUkTc;
    cxDTA5nu = (728 - 728);
    zRUkTc = (31 - 31);
    {
        zRUkTc = (955 - 955);
        for (; zRUkTc < jkawSpGREYV;) {
            if (Z4S2QB9[zRUkTc] >= '0' && '9' >= Z4S2QB9[zRUkTc]) {
                {
                    cxDTA5nu = zRUkTc;
                    for (; jkawSpGREYV > cxDTA5nu;) {
                        if ('0' > Z4S2QB9[cxDTA5nu] || Z4S2QB9[cxDTA5nu] > '9') {
                            cout << endl;
                            break;
                        }
                        else {
                            cout << Z4S2QB9[cxDTA5nu];
                        }
                        cxDTA5nu = cxDTA5nu + (247 - 246);
                    }
                }
                zRUkTc = cxDTA5nu;
            }
            {
                if ((994 - 994)) {
                    return (874 - 874);
                }
            }
            zRUkTc = zRUkTc + (474 - 473);
        }
    }
}

int main () {
    int vgSr3DTVA5m;
    char Z4S2QB9 [(853 - 822)];
    int jkawSpGREYV;
    cin.getline (Z4S2QB9, (267 - 236));
    jkawSpGREYV = strlen (Z4S2QB9);
    At07OCo (Z4S2QB9, jkawSpGREYV);
    vgSr3DTVA5m = strlen (Z4S2QB9);
    hwQG7jBP (Z4S2QB9, vgSr3DTVA5m);
    return (711 - 711);
}

