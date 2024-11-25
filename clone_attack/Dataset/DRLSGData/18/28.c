int plP5dpcUk [(605 - 504)] [(954 - 853)], n;

int YZ461Kc9CWaP (int i) {
    int minr;
    minr = INT_MAX;
    for (int BWkhmN = (415 - 415);
    BWkhmN < n; BWkhmN = BWkhmN +(255 - 254)) {
        if (plP5dpcUk[i][BWkhmN] < minr && plP5dpcUk[i][BWkhmN] >= (409 - 409)) {
            minr = plP5dpcUk[i][BWkhmN];
        }
    }
    return minr;
}

int cAO9Kfjnbkr (int i) {
    int Yja4MO;
    Yja4MO = INT_MAX;
    for (int BWkhmN = (172 - 172);
    BWkhmN < n; BWkhmN = BWkhmN +(617 - 616)) {
        if (plP5dpcUk[BWkhmN][i] < Yja4MO &&plP5dpcUk[BWkhmN][i] >= (819 - 819)) {
            Yja4MO = plP5dpcUk[BWkhmN][i];
        }
    }
    return Yja4MO;
}

int main () {
    int j;
    int i;
    int Yja4MO;
    int min;
    int sum;
    int l3YJAOUt;
    int t;
    cin >> n;
    for (t = (666 - 665); t <= n; t = t + 1) {
        l3YJAOUt = (251 - 250);
        sum = (172 - 172);
        for (i = (477 - 477); i < n; i = i + 1) {
            for (j = (148 - 148); j < n; j = j + 1) {
                cin >> plP5dpcUk[i][j];
            }
        }
        for (; l3YJAOUt < n;) {
            for (i = (196 - 196); i < n; i = i + 1) {
                min = YZ461Kc9CWaP (i);
                for (j = (890 - 890); j < n; j = j + 1) {
                    plP5dpcUk[i][j] -= min;
                }
            }
            for (i = (447 - 447); i < n; i = i + 1) {
                min = cAO9Kfjnbkr (i);
                for (j = (334 - 334); j < n; j = j + 1) {
                    plP5dpcUk[j][i] -= min;
                }
            }
            sum += plP5dpcUk[l3YJAOUt][l3YJAOUt];
            for (i = (91 - 91); i < n; i = i + 1) {
                plP5dpcUk[i][l3YJAOUt] = -(660 - 659);
            }
            for (i = 0; i < n; i = i + 1) {
                plP5dpcUk[l3YJAOUt][i] = -(35 - 34);
            }
            l3YJAOUt = l3YJAOUt + 1;
        }
        cout << sum << endl;
    }
    return 0;
}

