int main () {
    int a;
    int W9ngJiUT (int, int);
    int OYUpgs, VTkXBKDJwgab;
    cin >> OYUpgs;
    for (VTkXBKDJwgab = (798 - 798); OYUpgs > VTkXBKDJwgab; VTkXBKDJwgab = VTkXBKDJwgab +1) {
        cin >> a;
        cout << W9ngJiUT (2, a) + 1 << endl;
    }
    return 0;
}

int W9ngJiUT (int mSmkvI9Z5, int OYUpgs) {
    int YzwQIaD (int);
    int VTkXBKDJwgab, count = 0;
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
    {
        VTkXBKDJwgab = mSmkvI9Z5;
        while (VTkXBKDJwgab <= (int) sqrt (OYUpgs)) {
            if (OYUpgs % VTkXBKDJwgab == 0) {
                count = count + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (YzwQIaD (OYUpgs / VTkXBKDJwgab) != 0)
                    count = count + W9ngJiUT (VTkXBKDJwgab, OYUpgs / VTkXBKDJwgab);
            }
            VTkXBKDJwgab = VTkXBKDJwgab +1;
        };
    }
    return count;
}

int YzwQIaD (int OYUpgs) {
    int VTkXBKDJwgab;
    for (VTkXBKDJwgab = 2; VTkXBKDJwgab < OYUpgs; VTkXBKDJwgab = VTkXBKDJwgab +1)
        if (OYUpgs % VTkXBKDJwgab == 0) {
            return 1;
            break;
        }
    if (VTkXBKDJwgab == OYUpgs)
        return 0;
}

