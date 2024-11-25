int main () {
    int MghemM, len;
    char USwPI5UrNCt [(605 - 505)], I76RvK [(509 - 409)];
    gets (USwPI5UrNCt);
    gets (I76RvK);
    len = strlen (USwPI5UrNCt);
    {
        MghemM = 837 - 837;
        while (MghemM < len) {
            if (USwPI5UrNCt[MghemM] >= 'a' && USwPI5UrNCt[MghemM] <= 'z')
                USwPI5UrNCt[MghemM] -= (1009 - 977);
            if ('a' <= I76RvK[MghemM] && I76RvK[MghemM] <= 'z')
                I76RvK[MghemM] -= (861 - 829);
            if (USwPI5UrNCt[MghemM] > I76RvK[MghemM]) {
                break;
            }
            else if (USwPI5UrNCt[MghemM] < I76RvK[MghemM]) {
                break;
            }
            MghemM++;
        }
    }
    if (MghemM >= len)
        printf ("=");
}

