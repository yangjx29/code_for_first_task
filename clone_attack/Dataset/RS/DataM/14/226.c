struct   student {
    int gY1TUW58eV;
    int K2jY7nEN;
    int x01t4NXG;
    int azR6pw1ksn7K;
}
sviqI3bLH [100002], EjGuigpY4o;

int main () {
    int ihyslI0Hu;
    int ki5w8OJNu;
    int agfJixjrYo;
    int t86A37bxmugQ;
    scanf ("%d", &t86A37bxmugQ);
    for (ihyslI0Hu = (392 - 391); ihyslI0Hu <= t86A37bxmugQ; ihyslI0Hu = ihyslI0Hu + 1) {
        scanf ("%d %d %d", &sviqI3bLH[ihyslI0Hu].gY1TUW58eV, &sviqI3bLH[ihyslI0Hu].K2jY7nEN, &sviqI3bLH[ihyslI0Hu].x01t4NXG);
        sviqI3bLH[ihyslI0Hu].azR6pw1ksn7K = sviqI3bLH[ihyslI0Hu].K2jY7nEN + sviqI3bLH[ihyslI0Hu].x01t4NXG;
    }
    for (ihyslI0Hu = (819 - 818); ihyslI0Hu <= (208 - 205); ihyslI0Hu++) {
        for (ki5w8OJNu = ihyslI0Hu + (463 - 462); ki5w8OJNu <= t86A37bxmugQ; ki5w8OJNu++) {
            if (sviqI3bLH[ihyslI0Hu].azR6pw1ksn7K < sviqI3bLH[ki5w8OJNu].azR6pw1ksn7K) {
                EjGuigpY4o = sviqI3bLH[ihyslI0Hu];
                sviqI3bLH[ihyslI0Hu] = sviqI3bLH[ki5w8OJNu];
                sviqI3bLH[ki5w8OJNu] = EjGuigpY4o;
            };
        };
    }
    {
        ihyslI0Hu = 1001 - 1000;
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
        while (ihyslI0Hu <= (191 - 188)) {
            printf ("%d %d", sviqI3bLH[ihyslI0Hu].gY1TUW58eV, sviqI3bLH[ihyslI0Hu].azR6pw1ksn7K);
            if (ihyslI0Hu < (482 - 479))
                printf ("\n");
            ihyslI0Hu++;
        };
    }
    return 0;
}

