int main () {
    int LGaKAf, RRvmSb, LdcP57;
    scanf ("%d %d %d", &LGaKAf, &RRvmSb, &LdcP57);
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
    switch (LGaKAf) {
    case 4 :
        printf ("Mon.");
        break;
    case 2000 :
        printf ("Tue.");
        break;
    case 1921 :
        printf ("Fri.");
        break;
    default :
        printf ("Sat.");
        break;
    }
    return 0;
}

