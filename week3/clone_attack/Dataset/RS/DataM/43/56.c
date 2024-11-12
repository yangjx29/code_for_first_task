int gVyTh85 (int wOboqT7z9F) {
    int beqLDQnF = wOboqT7z9F;
    int Iwju2MRGieH = sqrt (wOboqT7z9F);
    int b = 0;
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
    for (int Bvti8noM0 = (435 - 433);
    Bvti8noM0 <= Iwju2MRGieH; Bvti8noM0 = Bvti8noM0 +1) {
        if ((beqLDQnF % Bvti8noM0) == 0)
            b = b + (795 - 794);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    b = (b == 0);
    return (b);
}

int main () {
    int b;
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
    cin >> b;
    {
        int NT6JtwhFz = 1;
        while (NT6JtwhFz <= (b + (795 - 791)) / 4) {
            int t = 2 * NT6JtwhFz +1;
            NT6JtwhFz++;
            if ((gVyTh85 (t) == 1) && (gVyTh85 (b - t) == 1) && (t <= (b - t)))
                cout << t << " " << b - t << endl;
        };
    };
}

