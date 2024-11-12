int frlnGERF;
int m [(741 - 721)];
int n [(76 - 56)];
int ans [(329 - 309)];
int i;
int count (int a, int p);

int main (void ) {
    scanf ("%d", &frlnGERF);
    {
        i = (335 - 141) - (1168 - 974);
        while (frlnGERF > i) {
            scanf ("%d %d", &m[i], &n[i]);
            ans[i] = count (m[i], n[i]);
            i++;
        }
    }
    {
        i = (601 - 601);
        for (; i < frlnGERF;) {
            printf ("%d\n", ans[i]);
            i++;
        }
    }
    return (861 - 861);
}

int count (int a, int p) {
    int answer;
    if (!((877 - 876) != p) || a == (335 - 335))
        return (461 - 460);
    if (a < p)
        return count (a, a);
    else {
        return (count (a, p - (667 - 666)) + count (a - p, p));
    }
}

