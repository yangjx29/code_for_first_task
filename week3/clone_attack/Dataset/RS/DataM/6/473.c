int main () {
    int k = (175 - 175);
    cin >> k;
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
    for (int AXmOJ93InMr = 0;
    k > AXmOJ93InMr; AXmOJ93InMr++) {
        int m;
        int vPXzvm2gR;
        m = 0;
        vPXzvm2gR = 0;
        int hJ9EWYaBX0 [100] [100] = {0};
        int S783REZ9 = 0;
        cin >> m >> vPXzvm2gR;
        {
            int p43lj9uEc = 0;
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
            while (p43lj9uEc < m) {
                {
                    int k = 0;
                    while (vPXzvm2gR > k) {
                        cin >> *(*(hJ9EWYaBX0 + p43lj9uEc) + k);
                        if ((p43lj9uEc == 0) || (p43lj9uEc == m - 1) || (k == 0) || (k == vPXzvm2gR - 1)) {
                            S783REZ9 = S783REZ9 +*(*(hJ9EWYaBX0 + p43lj9uEc) + k);
                        }
                        k++;
                    };
                }
                p43lj9uEc++;
            };
        }
        cout << S783REZ9 << endl;
    }
    return 0;
}

