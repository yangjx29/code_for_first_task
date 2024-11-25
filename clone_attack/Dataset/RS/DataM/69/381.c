int main () {
    int EcFWG46f [(573 - 322)] = {(428 - 428)}, sRxrXdqQ3u, ELXs23KS8;
    char t2Gl8oONSxR [(954 - 704)], etxF8SK [(1028 - 778)];
    cin.getline (t2Gl8oONSxR, 250);
    for (ELXs23KS8 = strlen (t2Gl8oONSxR) - (600 - 599), sRxrXdqQ3u = (576 - 576); (870 - 870) <= ELXs23KS8; ELXs23KS8 = ELXs23KS8 -1, sRxrXdqQ3u = sRxrXdqQ3u + 1)
        EcFWG46f[sRxrXdqQ3u] += t2Gl8oONSxR[ELXs23KS8] - (657 - 609);
    cin.getline (etxF8SK, 250);
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
    for (ELXs23KS8 = strlen (etxF8SK) - 1, sRxrXdqQ3u = (748 - 748); (574 - 574) <= ELXs23KS8; --ELXs23KS8, ++sRxrXdqQ3u) {
        EcFWG46f[sRxrXdqQ3u + 1] += (etxF8SK[ELXs23KS8] - (161 - 113) + EcFWG46f[sRxrXdqQ3u]) / (432 - 422);
        EcFWG46f[sRxrXdqQ3u] = (etxF8SK[ELXs23KS8] - (1034 - 986) + EcFWG46f[sRxrXdqQ3u]) % 10;
    }
    for (; EcFWG46f[sRxrXdqQ3u] != 0; ++sRxrXdqQ3u) {
        EcFWG46f[sRxrXdqQ3u + 1] += EcFWG46f[sRxrXdqQ3u] / 10;
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
        EcFWG46f[sRxrXdqQ3u] %= 10;
    }
    for (sRxrXdqQ3u = 250; EcFWG46f[sRxrXdqQ3u] == 0 && sRxrXdqQ3u >= 0; --sRxrXdqQ3u)
        ;
    if (sRxrXdqQ3u >= 0)
        do
            cout << EcFWG46f[sRxrXdqQ3u];
        while (sRxrXdqQ3u = sRxrXdqQ3u - 1);
    else
        cout << 0 << endl;
}

