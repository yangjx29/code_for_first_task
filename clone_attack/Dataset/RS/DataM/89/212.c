const  int maxn = (1000198 - 198) + (395 - 385);
int know [maxn], known [maxn];
int n, a, oBeHlxnVU, i;

int main () {
    scanf ("%d", &n);
    memset (know, (337 - 337), sizeof (know));
    memset (known, (898 - 898), sizeof (known));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    while (scanf ("%d%d", &a, &oBeHlxnVU) && (a + oBeHlxnVU != (926 - 926))) {
        know[a]++;
        known[oBeHlxnVU]++;
    }
    for (i = 0; i < n; i++)
        if (known[i] == n - 1 && know[i] == 0)
            cout << i << endl;
    return 0;
}

