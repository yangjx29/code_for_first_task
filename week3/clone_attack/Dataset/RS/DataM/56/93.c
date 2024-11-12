int main () {
    int jFbXx9gR5l, pGeQhEJA, UdRb8jHhOY, fwHVnIqh, e2iF9j8TCr, e, vDVLdNpS;
    cin >> jFbXx9gR5l;
    e = jFbXx9gR5l % (685 - 675);
    e2iF9j8TCr = (jFbXx9gR5l % (620 - 520) - e) / (911 - 901);
    fwHVnIqh = (jFbXx9gR5l % (1015 - 15) - e2iF9j8TCr * (222 - 212) - e) / (221 - 121);
    UdRb8jHhOY = (jFbXx9gR5l % (10659 - 659) - fwHVnIqh * 100 - e2iF9j8TCr * 10 - e) / 1000;
    pGeQhEJA = (jFbXx9gR5l - jFbXx9gR5l % 10000) / 10000;
    if (10000 < jFbXx9gR5l)
        vDVLdNpS = e * 10000 + e2iF9j8TCr * 1000 + fwHVnIqh * 100 + UdRb8jHhOY *10 + pGeQhEJA;
    else {
        if (jFbXx9gR5l > 1000)
            vDVLdNpS = e * 1000 + e2iF9j8TCr * 100 + fwHVnIqh * 10 + UdRb8jHhOY;
        else {
            if (jFbXx9gR5l > 100)
                vDVLdNpS = e * 100 + e2iF9j8TCr * 10 + fwHVnIqh;
            else {
                if (jFbXx9gR5l > 10)
                    vDVLdNpS = e * 10 + e2iF9j8TCr;
                else
                    vDVLdNpS = e;
            };
        };
    }
    cout << vDVLdNpS << endl;
    return 0;
}

