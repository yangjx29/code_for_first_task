int main () {
    int i, t, m, s3gtZDfEuXV, b, W0CyuqZ;
    scanf ("%d", &W0CyuqZ);
    scanf ("%d", &m);
    i = (982 - 980);
    s3gtZDfEuXV = m;
    scanf ("%d", &m);
    b = m;
    while (i < W0CyuqZ) {
        i = i + 1;
        scanf ("%d", &m);
        if (s3gtZDfEuXV >= b) {
            if (s3gtZDfEuXV <= m) {
                b = s3gtZDfEuXV;
                s3gtZDfEuXV = m;
            }
            if (m <= b) {
                b = b;
                s3gtZDfEuXV = s3gtZDfEuXV;
            }
            if (m < s3gtZDfEuXV && b < m) {
                s3gtZDfEuXV = s3gtZDfEuXV;
                b = m;
            };
        }
        else {
            if (m >= b) {
                s3gtZDfEuXV = m;
                b = b;
            }
            if (m < b && m > s3gtZDfEuXV) {
                s3gtZDfEuXV = b;
                b = m;
            }
            if (m <= s3gtZDfEuXV) {
                t = b;
                b = s3gtZDfEuXV;
                s3gtZDfEuXV = t;
            };
        };
    }
    printf ("%d\n%d\n", s3gtZDfEuXV, b);
    return (567 - 567);
}

