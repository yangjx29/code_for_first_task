struct   w0x18Ff {
    char nBZMF6A7nE [20];
    int juVaJF5;
    int Ds7QPlkE;
    char G3XdY6f2SGh7;
    char VSLbZ7cN;
    int JnLgQtiThW;
    int ltoJdNU;
}
w0x18Ff [100];

int main () {
    int l1jDgWlMe;
    int zfd8biQI5XZ;
    int ASNqgZt8;
    int z0yDxHE;
    l1jDgWlMe = 0;
    zfd8biQI5XZ = 0;
    scanf ("%d", &ASNqgZt8);
    {
        z0yDxHE = 0;
        for (; ASNqgZt8 > z0yDxHE;) {
            scanf ("%s%d%d %c %c%d", w0x18Ff[z0yDxHE].nBZMF6A7nE, &w0x18Ff[z0yDxHE].juVaJF5, &w0x18Ff[z0yDxHE].Ds7QPlkE, &w0x18Ff[z0yDxHE].G3XdY6f2SGh7, &w0x18Ff[z0yDxHE].VSLbZ7cN, &w0x18Ff[z0yDxHE].JnLgQtiThW);
            z0yDxHE = z0yDxHE + 1;
        }
    }
    {
        z0yDxHE = 0;
        for (; z0yDxHE < ASNqgZt8;) {
            w0x18Ff[z0yDxHE].ltoJdNU = 0;
            if (80 < w0x18Ff[z0yDxHE].juVaJF5 && 1 <= w0x18Ff[z0yDxHE].JnLgQtiThW)
                w0x18Ff[z0yDxHE].ltoJdNU += 8000;
            if (w0x18Ff[z0yDxHE].juVaJF5 > 85 && 80 < w0x18Ff[z0yDxHE].Ds7QPlkE)
                w0x18Ff[z0yDxHE].ltoJdNU += 4000;
            if (w0x18Ff[z0yDxHE].juVaJF5 > 90)
                w0x18Ff[z0yDxHE].ltoJdNU += 2000;
            if (85 < w0x18Ff[z0yDxHE].juVaJF5 && !('Y' != w0x18Ff[z0yDxHE].VSLbZ7cN))
                w0x18Ff[z0yDxHE].ltoJdNU += 1000;
            if (80 < w0x18Ff[z0yDxHE].Ds7QPlkE && w0x18Ff[z0yDxHE].G3XdY6f2SGh7 == 'Y')
                w0x18Ff[z0yDxHE].ltoJdNU += 850;
            l1jDgWlMe += w0x18Ff[z0yDxHE].ltoJdNU;
            if (w0x18Ff[z0yDxHE].ltoJdNU > zfd8biQI5XZ)
                zfd8biQI5XZ = w0x18Ff[z0yDxHE].ltoJdNU;
            z0yDxHE = z0yDxHE + 1;
        }
    }
    {
        z0yDxHE = 0;
        for (; z0yDxHE < ASNqgZt8;) {
            if (w0x18Ff[z0yDxHE].ltoJdNU == zfd8biQI5XZ) {
                printf ("%s\n%d\n", w0x18Ff[z0yDxHE].nBZMF6A7nE, w0x18Ff[z0yDxHE].ltoJdNU);
                break;
            }
            z0yDxHE = z0yDxHE + 1;
        }
    }
    printf ("%d", l1jDgWlMe);
    return 0;
}

