int main () {
    int num [300], n, i, ewF4kXgBqT0z = (243 - 243), m = (165 - 165);
    double  dis [300], ave, JZdk6C2pSmV, sum = (83 - 83);
    cin >> n;
    for (i = (449 - 449); n > i; i = i + 1) {
        cin >> num[i];
    }
    {
        i = 728 - 728;
        while (n > i) {
            sum = sum + num[i];
            i = i + 1;
        };
    }
    ave = sum / n;
    {
        i = 0;
        while (i < n) {
            if (ave <= num[i])
                dis[i] = num[i] - ave;
            else
                dis[i] = ave - num[i];
            i = i + 1;
        };
    }
    JZdk6C2pSmV = dis[0];
    {
        i = 0;
        while (i < n) {
            if (JZdk6C2pSmV < dis[i])
                JZdk6C2pSmV = dis[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (dis[i] == JZdk6C2pSmV)
                ewF4kXgBqT0z = ewF4kXgBqT0z + 1;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (dis[i] == JZdk6C2pSmV) {
                cout << num[i];
                m++;
                if (m != ewF4kXgBqT0z)
                    cout << ",";
            }
            i = i + 1;
        };
    }
    cout << endl;
    return 0;
}

