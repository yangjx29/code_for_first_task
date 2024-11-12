int main () {
    int n;
    int NbxGCsF5LWoV;
    int qeZ80j9Lv3h;
    int GhOaYWG;
    int fICm9e = (455 - 455);
    int J0yWwXZil [1000];
    scanf ("%d%d", &n, &NbxGCsF5LWoV);
    for (qeZ80j9Lv3h = 0; qeZ80j9Lv3h < n; qeZ80j9Lv3h++) {
        scanf ("%d", &(J0yWwXZil[qeZ80j9Lv3h]));
    }
    {
        qeZ80j9Lv3h = 0;
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
        while (qeZ80j9Lv3h < n) {
            {
                GhOaYWG = 0;
                while (GhOaYWG < n) {
                    if (J0yWwXZil[qeZ80j9Lv3h] + J0yWwXZil[GhOaYWG] == NbxGCsF5LWoV) {
                        if (fICm9e == 0) {
                            fICm9e = 1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    for (x = 0; x < 20; x++) {
                                        y += x;
                                    }
                                    if (y > 30)
                                        return y;
                                }
                            };
                        }
                        else {
                            fICm9e = 1;
                        };
                    }
                    GhOaYWG = GhOaYWG +1;
                };
            }
            qeZ80j9Lv3h++;
        };
    }
    if (fICm9e == 1) {
        printf ("yes");
    }
    else {
        printf ("no");
    }
    return 0;
}

