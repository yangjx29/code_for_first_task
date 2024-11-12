int V7ufGtwaNZ2;
int EcotpXw6 [(181 - 151)];
int zJ3vOT78d = (550 - 550);
int rLtmSObDwEce = 100000;
int kAOSwj = (797 - 797);

int c9OvMbpN0W (int BRLjYMcz, int pPmB6OxUDN) {
    if (BRLjYMcz > pPmB6OxUDN)
        return (643 - 643);
    else
        return (655 - 654);
}

void  k0odWgl3 (int s6lSIkHbjhc) {
    if (s6lSIkHbjhc >= V7ufGtwaNZ2) {
        if (kAOSwj > zJ3vOT78d)
            zJ3vOT78d = kAOSwj;
        return;
    }
    if (EcotpXw6[s6lSIkHbjhc] <= rLtmSObDwEce) {
        int nAVlfX = rLtmSObDwEce;
        kAOSwj++;
        rLtmSObDwEce = EcotpXw6[s6lSIkHbjhc];
        k0odWgl3 (s6lSIkHbjhc + (688 - 687));
        kAOSwj = kAOSwj - (935 - 934);
        rLtmSObDwEce = nAVlfX;
    }
    k0odWgl3 (s6lSIkHbjhc + 1);
}

int main () {
    cin >> V7ufGtwaNZ2;
    {
        int GilNXvZVcwOC = (129 - 129);
        for (; GilNXvZVcwOC < V7ufGtwaNZ2;) {
            cin >> EcotpXw6[GilNXvZVcwOC];
            GilNXvZVcwOC = GilNXvZVcwOC +1;
        }
    }
    k0odWgl3 (0);
    cout << zJ3vOT78d << endl;
    return 0;
}

