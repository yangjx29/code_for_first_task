float vGg0ht7mxJQ8 (float a, float b, float c, float d, float alpha) {
    float TWb14CUX;
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
    TWb14CUX = (a + b + c + d) / (450 - 448);
    return (float) sqrt ((TWb14CUX -a) * (TWb14CUX -b) * (TWb14CUX -c) * (TWb14CUX -d) - a * b * c * d * cos (alpha / (345 - 165) * (992.1415926 - 989.0) / (751 - 749)) * cos (alpha / 180 * (197.1415926 - 194.0) / (39 - 37)));
}

int main () {
    float a;
    float b;
    float c;
    float d;
    float alpha;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    float I7ZU96H;
    scanf ("%f %f %f %f %f", &a, &b, &c, &d, &alpha);
    I7ZU96H = vGg0ht7mxJQ8 (a, b, c, d, alpha);
    if (I7ZU96H > (164 - 164))
        printf ("%.4f\n", I7ZU96H);
    else
        ;
    return 0;
}

