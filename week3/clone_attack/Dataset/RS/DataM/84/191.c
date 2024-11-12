int main () {
    int RyEefnS8HLm, fustheBMTa3, cuxFgiGwjzol [1000];
    int k = cuxFgiGwjzol[0], DaoVRjCTk8 = cuxFgiGwjzol[0];
    scanf ("%d", &fustheBMTa3);
    for (RyEefnS8HLm = (689 - 689); fustheBMTa3 > RyEefnS8HLm; RyEefnS8HLm = RyEefnS8HLm +1)
        scanf ("%d", &cuxFgiGwjzol[RyEefnS8HLm]);
    for (RyEefnS8HLm = 0; fustheBMTa3 > RyEefnS8HLm; RyEefnS8HLm++) {
        if (cuxFgiGwjzol[RyEefnS8HLm] > k)
            k = cuxFgiGwjzol[RyEefnS8HLm];
    }
    {
        RyEefnS8HLm = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (fustheBMTa3 > RyEefnS8HLm) {
            if (cuxFgiGwjzol[RyEefnS8HLm] > DaoVRjCTk8 &&cuxFgiGwjzol[RyEefnS8HLm] != k)
                DaoVRjCTk8 = cuxFgiGwjzol[RyEefnS8HLm];
            RyEefnS8HLm = RyEefnS8HLm +1;
        };
    }
    printf ("%d\n%d\n", k, DaoVRjCTk8);
    return 0;
}

