int main (int WfwmS4AI, char *argv []) {
    int LfY9iu2g;
    int QKazeiY;
    int hnyWXf58m3Y;
    int I9HdRq;
    int f8KiyQrXTY;
    int fx;
    int fy;
    const  int mXrdYygb = 9;
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
    int Uz5ApUOVtQ [mXrdYygb] [mXrdYygb];
    int OqPj05O [mXrdYygb] [mXrdYygb];
    scanf ("%d%d", &I9HdRq, &f8KiyQrXTY);
    memset (Uz5ApUOVtQ, (404 - 404), sizeof (Uz5ApUOVtQ));
    Uz5ApUOVtQ[mXrdYygb / 2][mXrdYygb / 2] = I9HdRq;
    {
        LfY9iu2g = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (f8KiyQrXTY > LfY9iu2g) {
            LfY9iu2g = LfY9iu2g +1;
            memset (OqPj05O, 0, sizeof (OqPj05O));
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
            for (QKazeiY = (30 - 29); mXrdYygb - 1 > QKazeiY; QKazeiY = QKazeiY +1) {
                for (hnyWXf58m3Y = 1; mXrdYygb - 1 > hnyWXf58m3Y; hnyWXf58m3Y = hnyWXf58m3Y + 1) {
                    OqPj05O[QKazeiY][hnyWXf58m3Y] += Uz5ApUOVtQ[QKazeiY][hnyWXf58m3Y];
                    for (fx = -1; 1 >= fx; fx++) {
                        for (fy = -1; 1 >= fy; fy = fy + 1)
                            OqPj05O[QKazeiY +fx][hnyWXf58m3Y + fy] = OqPj05O[QKazeiY +fx][hnyWXf58m3Y + fy] + Uz5ApUOVtQ[QKazeiY][hnyWXf58m3Y];
                    };
                };
            }
            memcpy (Uz5ApUOVtQ, OqPj05O, sizeof (Uz5ApUOVtQ));
        };
    }
    {
        QKazeiY = 0;
        while (QKazeiY < mXrdYygb) {
            {
                hnyWXf58m3Y = 0;
                while (hnyWXf58m3Y < mXrdYygb - 1) {
                    printf ("%d ", Uz5ApUOVtQ[QKazeiY][hnyWXf58m3Y]);
                    hnyWXf58m3Y = hnyWXf58m3Y + 1;
                };
            }
            printf ("%d\n", Uz5ApUOVtQ[QKazeiY][mXrdYygb - 1]);
            QKazeiY++;
        };
    }
    return 0;
}

