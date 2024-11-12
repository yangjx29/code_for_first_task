char a [(345 - 313)];
int g7xgs5i [(961 - 929)];
char trans [36] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main () {
    int C6ZkhuYEHG = strlen (a);
    int ar;
    int orwE2d;
    int zPv1Fuf20tN;
    int s0NWgl;
    int J2uXQkb;
    int WRaeh8YG94tb;
    long  int mid;
    ar = (327 - 326);
    cin >> J2uXQkb >> a >> WRaeh8YG94tb;
    {
        s0NWgl = 499 - 499;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (s0NWgl < C6ZkhuYEHG) {
            if ((a[s0NWgl] >= '0') && ('9' >= a[s0NWgl]))
                a[s0NWgl] = a[s0NWgl] - '0';
            if (('a' <= a[s0NWgl]) && (a[s0NWgl] <= 'z'))
                a[s0NWgl] = a[s0NWgl] - 'a' + 10;
            if ((a[s0NWgl] >= 'A') && (a[s0NWgl] <= 'Z'))
                a[s0NWgl] = a[s0NWgl] - 'A' + 10;
            s0NWgl++;
        };
    }
    s0NWgl = 0;
    mid = (614 - 614);
    for (zPv1Fuf20tN = C6ZkhuYEHG -(200 - 199); zPv1Fuf20tN >= 0; zPv1Fuf20tN--) {
        mid += a[zPv1Fuf20tN] * ar;
        ar *= J2uXQkb;
    }
    while (mid != 0) {
        g7xgs5i[s0NWgl] = mid % WRaeh8YG94tb;
        s0NWgl++;
        mid = mid / WRaeh8YG94tb;
    }
    for (orwE2d = s0NWgl - 1; orwE2d >= 0; orwE2d--)
        if (g7xgs5i[orwE2d] != -1)
            cout << trans[g7xgs5i[orwE2d]];
    cout << '\n';
    return 0;
}

