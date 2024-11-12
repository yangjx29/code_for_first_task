int main (int argc, char *W6dYAP3BGiRv []) {
    int n = (529 - 529), k = (337 - 337), AWp8BT = (867 - 867), dBoczX9rL3D1 = 0;
    scanf ("%d", &n);
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
    for (AWp8BT = 0; n > AWp8BT; AWp8BT++) {
        double  a = 0, s = 0;
        double  W67kT5mph [1000];
        scanf ("%d", &k);
        {
            dBoczX9rL3D1 = 0;
            while (k > dBoczX9rL3D1) {
                scanf ("%lf", &W67kT5mph[dBoczX9rL3D1]);
                a = a + W67kT5mph[dBoczX9rL3D1];
                dBoczX9rL3D1++;
            };
        }
        a = a / k;
        for (dBoczX9rL3D1 = 0; dBoczX9rL3D1 < k; dBoczX9rL3D1++) {
            s = s + (W67kT5mph[dBoczX9rL3D1] - a) * (W67kT5mph[dBoczX9rL3D1] - a);
        }
        s = s / k;
        s = sqrt (s);
        printf ("%.5f\n", s);
    }
    return 0;
}

