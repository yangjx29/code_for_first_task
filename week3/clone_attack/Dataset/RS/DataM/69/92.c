int main () {
    int KuZDvO1 [251] = {0}, LClz3U6DKvIn [251] = {0};
    char yzmEgdCQ0j [251] = {0};
    char wTGfn5mv4z [251] = {0};
    int fUtFnXueyx, j, l;
    cin >> yzmEgdCQ0j;
    l = strlen (yzmEgdCQ0j);
    cin >> wTGfn5mv4z;
    for (j = 0, fUtFnXueyx = strlen (yzmEgdCQ0j) - 1; 0 <= fUtFnXueyx; fUtFnXueyx = fUtFnXueyx - 1, j++)
        KuZDvO1[j] = yzmEgdCQ0j[fUtFnXueyx] - '0';
    {
        fUtFnXueyx = wTGfn5mv4z;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        j = 0;
        while (0 <= fUtFnXueyx) {
            LClz3U6DKvIn[j] = wTGfn5mv4z[fUtFnXueyx] - '0';
            j = j + 1;
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
            fUtFnXueyx = fUtFnXueyx - 1;
        };
    }
    {
        fUtFnXueyx = 0;
        while (250 >= fUtFnXueyx) {
            if (10 > KuZDvO1[fUtFnXueyx] + LClz3U6DKvIn[fUtFnXueyx]) {
                KuZDvO1[fUtFnXueyx] = KuZDvO1[fUtFnXueyx] + LClz3U6DKvIn[fUtFnXueyx];
                continue;
            }
            if (KuZDvO1[fUtFnXueyx] + LClz3U6DKvIn[fUtFnXueyx] >= 10) {
                l = KuZDvO1[fUtFnXueyx] + LClz3U6DKvIn[fUtFnXueyx] - 10;
                KuZDvO1[fUtFnXueyx] = l;
                KuZDvO1[fUtFnXueyx + 1]++;
                continue;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            fUtFnXueyx++;
        };
    }
    for (fUtFnXueyx = 250; fUtFnXueyx >= 0; fUtFnXueyx--)
        if (KuZDvO1[fUtFnXueyx] != 0) {
            goto lable;
            for (j = fUtFnXueyx; j >= 0; j = j - 1)
                cout << KuZDvO1[j];
        }
    cout << "0" << endl;
lable :
    return 0;
}

