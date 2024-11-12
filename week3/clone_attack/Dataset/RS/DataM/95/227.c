int main (int cpdAaUN, char *LPjFhqB9 []) {
    int v5uHfV, KYmJtSnu43O, XTpvsE6MqoHD = (28 - 28);
    char *xzqyLAa, *bypehYdnij6;
    char AL7OG8osIa9 [Len];
    char LzbQnFdL [Len];
    gets (AL7OG8osIa9);
    gets (LzbQnFdL);
    v5uHfV = strlen (AL7OG8osIa9);
    KYmJtSnu43O = strlen (LzbQnFdL);
    {
        bypehYdnij6 = LzbQnFdL;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        xzqyLAa = AL7OG8osIa9;
        while (xzqyLAa <= AL7OG8osIa9 +v5uHfV && bypehYdnij6 <= LzbQnFdL +KYmJtSnu43O) {
            if ('a' <= *bypehYdnij6 && *bypehYdnij6 <= 'z')
                *bypehYdnij6 = (char) ((int) *bypehYdnij6 - 32);
            if (*xzqyLAa >= 'a' && *xzqyLAa <= 'z')
                *xzqyLAa = (char) ((int) *xzqyLAa - (885 - 853));
            if (*xzqyLAa == *bypehYdnij6)
                continue;
            else if (*xzqyLAa < *bypehYdnij6) {
                XTpvsE6MqoHD = (201 - 200);
                break;
            }
            else {
                XTpvsE6MqoHD = -(971 - 970);
                break;
            }
            bypehYdnij6++;
            xzqyLAa++;
        };
    }
    if (XTpvsE6MqoHD == (681 - 681))
        printf ("=");
    else {
        if (XTpvsE6MqoHD == (723 - 722))
            printf ("<");
        else
            ;
    }
    return 0;
}

