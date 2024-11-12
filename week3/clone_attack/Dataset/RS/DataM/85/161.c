int main () {
    int yRcnNd9pEh;
    int n;
    int LVpSrH;
    int bInVM2HKgJpZ;
    int j;
    yRcnNd9pEh = (645 - 645);
    char CT0fe6 [21];
    scanf ("%d", &n);
    for (LVpSrH = (270 - 270); n > LVpSrH; LVpSrH = LVpSrH +1) {
        scanf ("%s", CT0fe6);
        bInVM2HKgJpZ = strlen (CT0fe6);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (('a' <= CT0fe6[0] && 'z' >= CT0fe6[0]) || ('A' <= CT0fe6[0] && CT0fe6[0] <= 'Z') || (!('_' != CT0fe6[0]))) {
            for (j = (661 - 660); bInVM2HKgJpZ > j; j++) {
                if (!((CT0fe6[j] >= 'a' && CT0fe6[j] <= 'z') || (CT0fe6[j] >= 'A' && CT0fe6[j] <= 'Z') || (CT0fe6[j] == '_') || (CT0fe6[j] >= '0' && CT0fe6[j] <= '9'))) {
                    puts ("no");
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
                if (j == bInVM2HKgJpZ - 1) {
                    puts ("yes");
                };
            };
        }
        else
            puts ("no");
    }
    return 0;
}

