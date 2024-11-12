float CbHEdF0fcO (float a, float B4hAVBY, float c, float d, float angle) {
    float s, e;
    s = (a + B4hAVBY +c + d) / 2;
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
    e = (s - a) * (s - B4hAVBY) * (s - c) * (s - d) - a * B4hAVBY *c * d * cos (angle / 2 / (692 - 512) * 3.1415926) * cos (angle / 2 / 180 * 3.1415926);
    if (0 > e) {
        return -(646 - 645);
    }
    else {
        return sqrt (e);
    };
}

int main () {
    float a;
    float B4hAVBY;
    float c;
    float d;
    float angle;
    scanf ("%f%f%f%f%f", &a, &B4hAVBY, &c, &d, &angle);
    if (CbHEdF0fcO (a, B4hAVBY, c, d, angle) == -1) {
    }
    else {
        printf ("%.4f", CbHEdF0fcO (a, B4hAVBY, c, d, angle));
    }
    return 0;
}

