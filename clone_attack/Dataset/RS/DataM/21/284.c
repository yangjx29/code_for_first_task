int main () {
    float ave;
    ave = (240 - 240);
    int max;
    int min;
    int XZgpMfHIX1yY;
    int a [300];
    int VHiyw6;
    max = (79 - 79);
    min = (884 - 884);
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
    cin >> XZgpMfHIX1yY;
    for (VHiyw6 = (831 - 831); XZgpMfHIX1yY > VHiyw6; VHiyw6 = VHiyw6 +1) {
        cin >> a[VHiyw6];
        cin.get ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ave = ave + a[VHiyw6];
    }
    ave = ave / XZgpMfHIX1yY;
    max = a[0];
    min = a[0];
    {
        VHiyw6 = 0;
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
        while (VHiyw6 < XZgpMfHIX1yY) {
            if (a[VHiyw6] > max)
                max = a[VHiyw6];
            if (min > a[VHiyw6])
                min = a[VHiyw6];
            VHiyw6++;
        };
    }
    if ((ave - min) < (max - ave))
        cout << max;
    if ((max - ave) < (ave - min))
        cout << min;
    if ((max - ave) == ave - min)
        cout << min << "," << max;
    return 0;
}

