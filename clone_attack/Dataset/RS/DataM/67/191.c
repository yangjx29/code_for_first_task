int main () {
    int b0vJZMS;
    int JzfqB0;
    int a [b0vJZMS], b [b0vJZMS];
    double  ZPctoA7vrm [b0vJZMS];
    cin >> b0vJZMS;
    for (JzfqB0 = (64 - 63); JzfqB0 <= b0vJZMS; JzfqB0 = JzfqB0 +1) {
        cin >> a[JzfqB0] >> b[JzfqB0];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ZPctoA7vrm[JzfqB0] = b[JzfqB0] / (a[JzfqB0] * 0.01);
    }
    for (int BbdNuS3 = 2;
    BbdNuS3 <= b0vJZMS; BbdNuS3++) {
        if ((ZPctoA7vrm[BbdNuS3] - ZPctoA7vrm[1]) > 5.00)
            cout << "better" << endl;
        else if ((ZPctoA7vrm[1] - ZPctoA7vrm[BbdNuS3]) > 5.00)
            cout << "worse" << endl;
        else
            cout << "same" << endl;
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
        };
    }
    return 0;
}

